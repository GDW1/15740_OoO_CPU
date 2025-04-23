/**
 * The scoreboard keeps track of the status of pipeline and determines which instructions in the issue stage
 * can be issued to the execution stage.
*/
module Scoreboard #(
    NUM_PIPELINE_STAGES = 5,
    NUM_WIDTH = 32,
    RD_WIDTH = 5
) (
    input logic clk,
    input logic rst,

    // inputs needed to fill the scoreboard
    input logic [RD_WIDTH-1:0] rd [0:NUM_WIDTH-1], // destination register
    input logic rd_valid [NUM_WIDTH-1:0], // array that holds the final mask
    input logic branch [NUM_WIDTH-1:0], 

    // inputs needed to check the scoreboard
    input logic [RD_WIDTH-1:0] rs1 [0:NUM_WIDTH-1], // source register 1
    input logic [RD_WIDTH-1:0] rs2 [0:NUM_WIDTH-1], // source register 2
    input logic [RD_WIDTH-1:0] source_rds [0:NUM_WIDTH-1], // source register 2

    
    output logic can_issue [NUM_WIDTH-1:0] // can issue to the execution stage
); 

    logic [RD_WIDTH-1:0] scoreboard [0:NUM_PIPELINE_STAGES-1][0:NUM_WIDTH-1]; // scoreboard for each pipeline stage
    logic branchboard [0:NUM_WIDTH-1];

    always_ff @(posedge clk) begin : scoreboard_update
        if (rst) begin
            for (int i = 0; i < NUM_PIPELINE_STAGES; i++) begin
                for (int j = 0; j < NUM_WIDTH; j++) begin
                    scoreboard[i][j] <= 0;
                end
            end
            for (int i = 0; i < NUM_WIDTH; i++) begin
                branchboard[i] <= 0;
            end
        end else begin
            // march the scoreboard
            for (int i = 0; i < NUM_PIPELINE_STAGES - 1; i++) begin
                for (int j = 0; j < NUM_WIDTH; j++) begin
                    scoreboard[i + 1][j] <= scoreboard[i][j];
                end
            end

            // fill the scoreboard with the destination register
            for (int i = 0; i < NUM_WIDTH; i++) begin
                if (rd_valid[i]) begin
                    scoreboard[0][i] <= rd[i];
                    branchboard[i] <= branch[i];
                end else begin
                    scoreboard[0][i] <= 0;
                    branchboard[i] <= 0;
                end
            end
        end
    end
    logic is_a_branch;
    always_comb begin : scoreboard_check
        // O(n^2) check for each instruction for a total of n^3
        for (int i = 0; i < NUM_WIDTH; i++) begin
            can_issue[i] = 1;
        end
        for (int i = 0; i < NUM_WIDTH; i++) begin
            for (int j = 0; j < NUM_PIPELINE_STAGES; j++) begin
                for (int k = 0; k < NUM_WIDTH; k++) begin
                    if (((scoreboard[j][k] == rs1[i]) && rs1[i] != 0) || ((scoreboard[j][k] == rs2[i]) && rs2[i] != 0)) begin
                        can_issue[i] = 0;
                        for (int l = i + 1; l < NUM_WIDTH; l++) begin
                            can_issue[l] = 0;
                        end
                        break;
                    end
                end
            end
        end
        
        // and all the bits in the branchboard
        is_a_branch = 0;
        for (int i = 0; i < NUM_WIDTH; i++) begin
            if (branchboard[i]) begin
                is_a_branch = 1;
                break;
            end
        end

        // if there is a branch, set all the bits in the can_issue array to 0
        if (is_a_branch) begin
            for (int i = 0; i < NUM_WIDTH; i++) begin
                can_issue[i] = 0;
            end
        end
    end


endmodule // scoreboard