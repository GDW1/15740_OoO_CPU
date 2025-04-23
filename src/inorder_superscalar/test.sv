`timescale 1ps / 1ps
`include "cpu.sv"

module test (
    input logic clk,
    input logic reset,
    input logic [63:0] runtime
    );
    SuperScalarCPU cpu (
        .clk(clk),
        .rst(reset)
    );

endmodule
