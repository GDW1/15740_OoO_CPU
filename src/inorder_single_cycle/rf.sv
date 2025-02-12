module rf #(
    parameter DATA_WIDTH = 32,
    parameter NUM_REGS = 32,
    parameter ADDR_WIDTH = $clog2(NUM_REGS),

    parameter READ_PORTS = 2,
    parameter WRITE_PORTS = 1,
) (
    input wire clk,
    input wire rst,
    input logic [ADDR_WIDTH-1:0][READ_PORTS-1:0] read_addrs,
    input logic [ADDR_WIDTH-1:0][WRITE_PORTS-1:0] write_addrs,
    input logic [DATA_WIDTH-1:0][WRITE_PORTS-1:0] write_data,
    input logic write_reg_enable[WRITE_PORTS-1:0],

    output logic [DATA_WIDTH-1:0][READ_PORTS-1:0] read_data
);

    logic [DATA_WIDTH-1:0][NUM_REGS-1:0] regs;

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < NUM_REGS; i++) begin
                regs[i] <= 0;
            end
        end else begin
            for (int i = 0; i < WRITE_PORTS; i++) begin
                if (write_reg_enable[i]) begin
                    regs[write_addrs[i]] <= write_data[i];
                end
            end
        end
    end

    always_comb begin
        for (int i = 0; i < READ_PORTS; i++) begin
            read_data[i] = regs[read_addrs[i]];
        end
    end


endmodule;