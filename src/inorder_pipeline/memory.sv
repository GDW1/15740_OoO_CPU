module Memory #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter MEM_SIZE = 1024,
    parameter NUM_READ_PORTS = 1,
    parameter NUM_WRITE_PORTS = 1,
    parameter NAME = "MEM"
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

    //Read in the memory file into our memory
    initial begin
        string memfile;
        if ($value$plusargs("memory_file=%s", memfile)) begin
            $readmemb(memfile, mem);
        end else begin
            $readmemb("memory_file.mem", mem);
        end
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
                    $display("[%s] Writing %d to address %d", NAME, write_data[i], write_addr[i]);
                    mem[write_addr[i]] <= write_data[i];
                end
            end
        end
    end

    always_comb begin : read
        for (int i = 0; i < NUM_READ_PORTS; i++) begin
            if (read_enable[i]) begin
                read_data[i] = mem[read_addr[i]];
                $display("[%s] Reading %d from address %d", NAME, read_data[ i], read_addr[i]);
            end
        end
    end

endmodule
