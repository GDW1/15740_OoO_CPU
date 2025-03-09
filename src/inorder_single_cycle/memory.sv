module Memory #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter MEM_SIZE = 1024,
    parameter NUM_READ_PORTS = 1,
    parameter NUM_WRITE_PORTS = 1
) (
    input logic clk,
    input logic reset,
    input logic [DATA_WIDTH-1:0] write_data [NUM_WRITE_PORTS-1:0],
    input logic [ADDR_WIDTH-1:0] write_addr [NUM_WRITE_PORTS-1:0] ,
    input logic [ADDR_WIDTH-1:0] read_addr [NUM_READ_PORTS-1:0],
    input logic [NUM_READ_PORTS-1:0] read_enable,
    input logic [NUM_WRITE_PORTS-1:0] write_enable,

    output logic [DATA_WIDTH-1:0] read_data [NUM_READ_PORTS-1:0]
);

    initial begin
        $readmemb("memory_file.mem", mem);        
    end
    logic [DATA_WIDTH-1:0] mem[MEM_SIZE-1:0];

    always_ff @(posedge clk) begin
        if (reset) begin
            for (int i = 0; i < MEM_SIZE; i++) begin
                mem[i] <= 0;
            end
        end else begin
            for (int i = 0; i < NUM_WRITE_PORTS; i++) begin
                if (write_enable[i]) begin
                    mem[write_addr[i]] <= write_data[i];
                end
            end
        end
    end

    always_comb begin
        for (int i = 0; i < NUM_READ_PORTS; i++) begin
            read_data[i] = mem[read_addr[i]];
        end
    end

endmodule
