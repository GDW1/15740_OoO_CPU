module Decode #(
    parameter INSN_WIDTH = 32,
    parameter OPCODE_WIDTH = 7,
    parameter FUNCT3_WIDTH = 3,
    parameter FUNCT7_WIDTH = 7,
    parameter RD_WIDTH = 5,
    parameter RS_WIDTH = 5,

    parameter NUM_REGS = 1 << RD_WIDTH,
    parameter ADDR_WIDTH = $clog2(NUM_REGS),
    parameter I_TYPE_IMM_WIDTH = 12,
    parameter S_TYPE_IMM_WIDTH = 12,
    parameter B_TYPE_IMM_WIDTH = 13
) (
   input logic [INSN_WIDTH - 1 : 0] instruction,

// R-Type inputs
    output logic [OPCODE_WIDTH - 1: 0] opcode,
    output logic [FUNCT3_WIDTH - 1: 0] funct3,
    output logic [FUNCT7_WIDTH - 1: 0] funct7,
    output logic [ADDR_WIDTH - 1: 0]   rs1,
    output logic [ADDR_WIDTH - 1: 0]   rs2,
    output logic [ADDR_WIDTH - 1: 0]   rd,

// I-Type inputs
    output logic [I_TYPE_IMM_WIDTH - 1: 0] i_type_imm,
    output logic [S_TYPE_IMM_WIDTH - 1: 0] s_type_imm,
    output logic [B_TYPE_IMM_WIDTH - 1: 0] b_type_imm //LSB implicitly 0
);

always_comb begin : decode
    opcode = instruction[OPCODE_WIDTH - 1:0];
    funct3 = instruction[RD_WIDTH + OPCODE_WIDTH + FUNCT3_WIDTH - 1:RD_WIDTH + OPCODE_WIDTH];
    funct7 = instruction[INSN_WIDTH - 1:INSN_WIDTH - FUNCT7_WIDTH];
    rs1 = instruction[INSN_WIDTH - FUNCT7_WIDTH - RS_WIDTH - 1:INSN_WIDTH - FUNCT7_WIDTH - RS_WIDTH*2];
    rs2 = instruction[INSN_WIDTH - FUNCT7_WIDTH - 1:INSN_WIDTH - FUNCT7_WIDTH - RS_WIDTH];
    rd = instruction[OPCODE_WIDTH + RD_WIDTH - 1:OPCODE_WIDTH];

    //Decode immediates
    i_type_imm = {funct7, rs2};
    s_type_imm = {funct7, rd};
    b_type_imm = {funct7[6], rd[0], funct7[5:0], rd[4:1], 1'b0};
end // decode

endmodule
