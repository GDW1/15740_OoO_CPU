module decode #(
    parameter INSN_WIDTH = 32,
    parameter OPCODE_WIDTH = 7,
    parameter FUNCT3_WIDTH = 3,
    parameter FUNCT7_WIDTH = 7,

    parameter NUM_REGS = 32,
    parameter ADDR_WIDTH = $clog2(NUM_REGS),
    parameter I_TYPE_IMM_WIDTH = 12
) (
   input logic [INSN_WIDTH - 1 : 0] instruction,

// R-Type inputs
    output logic [OPCODE_WIDTH - 1: 0] opcode,
    output logic [FUNCT3_WIDTH - 1: 0] funct3,
    output logic [FUNCT3_WIDTH - 1: 0] funct7,
    output logic [ADDR_WIDTH - 1: 0]   rs1,
    output logic [ADDR_WIDTH - 1: 0]   rs2,
    output logic [ADDR_WIDTH - 1: 0]   rd,

// I-Type inputs
    output logic [I_TYPE_IMM_WIDTH - 1: 0] i_type_imm 
);

always_comb begin : decode_r_type
    assign opcode = instruction[OPCODE_WIDTH - 1:0]
    assign funct3 = instruction[OPCODE_WIDTH + FUNCT3_WIDTH - 1:OPCODE_WIDTH]
    assign funct7 = instruction[INSN_WIDTH - 1:INSN_WIDTH - FUNCT7_WIDTH]
    assign rs1 = instruction[19:15]
    assign rs2 = instruction[24:20]
    assign rd = instruction[11:7]
end // decode_r_type

always_comb begin : decode_i_type
    assign i_type_imm = instruction[31:20]
end // decode_i_type

endmodule