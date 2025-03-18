module RF #(
    parameter DATA_WIDTH = 32,
    parameter NUM_REGS = 32,
    parameter ADDR_WIDTH = $clog2(NUM_REGS),

    parameter READ_PORTS = 2,
    parameter WRITE_PORTS = 1
) (
    input wire clk,
    input wire rst,
    input logic [ADDR_WIDTH-1:0] read_addrs  [READ_PORTS-1:0],
    input logic [ADDR_WIDTH-1:0] write_addrs [WRITE_PORTS-1:0],
    input logic [DATA_WIDTH-1:0] write_data  [WRITE_PORTS-1:0],
    input logic write_reg_enable[WRITE_PORTS-1:0],

    output logic [DATA_WIDTH-1:0] read_data [READ_PORTS-1:0]
);

    logic [DATA_WIDTH-1:0] regs [NUM_REGS-1:0];
    
    integer i;
    integer j;
    integer k;

    always @(posedge clk) begin
        if (rst) begin
            $display("Resetting registers");
            for (i = 0; i < NUM_REGS; i = i + 1) begin
                regs[i] <= 0;
            end
        end else begin
            for (j = 0; j < WRITE_PORTS; j = j + 1) begin
                if (write_reg_enable[j] & write_addrs[j] != 0) begin
                    $display("Writing %d to register %d (reg_write %d)", $signed(write_data[j]), write_addrs[j], write_reg_enable[j]);
                    regs[write_addrs[j]] <= write_data[j];
                end
            end
        end
    end

    always @(negedge clk) begin
        // print out the registers
        $display("Registers:");
        for (i = 0; i < NUM_REGS; i = i + 1) begin
            $display("Register %d: %d %d", i, regs[i], $signed(regs[i]));
        end
    end

    always_comb begin
        for (k = 0; k < READ_PORTS; k = k + 1) begin
            read_data[k] = regs[read_addrs[k]];
            $display("Reading register %d: %d", k, regs[read_addrs[k]]);
        end
    end


endmodule;
