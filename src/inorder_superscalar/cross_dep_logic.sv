module Cross_dep_check #(
    parameter RS_WIDTH = 5,
    parameter RD_WIDTH = 5,
    parameter NUM_WIDTH = 3
) (
    input logic [RD_WIDTH-1:0] rd [0:NUM_WIDTH-1], // destination register
    input logic [RS_WIDTH-1:0] rs1 [0:NUM_WIDTH-1], // source register 1
    input logic [RS_WIDTH-1:0] rs2 [0:NUM_WIDTH-1], // source register 2

    output logic can_issue [NUM_WIDTH-1:0] // can issue to the execution stage
);

always_comb begin : branch_mask_logic 
    // find the first 1 in the branch array. Set all operations prior to it to 1, set the rest to 0 
    for (int i = 0; i < NUM_WIDTH; i++) begin
        can_issue[i] = 1;
    end
    for (int i = 0; i < NUM_WIDTH; i++) begin
        for(int j = i+1; j < NUM_WIDTH; j++) begin
            if((rs1[j] == rd[i] && rd[i] != 0) || (rs2[j] == rd[i]  && rd[i] != 0) || (rd[j] == rd[i] && rd[i] != 0)) begin
                can_issue[j] = 0;
                for (int k = j + 1; k < NUM_WIDTH; k++) begin
                    can_issue[k] = 0;
                end
                break;
            end
        end
    end
end

endmodule // Cross_dep_check