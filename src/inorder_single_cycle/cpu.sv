`include "memory.sv"
`include "decode.sv"
`include "control.sv"
`include "alu.sv"
`include "rf.sv"


module InOrderCPU #(
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
    input logic clk,
    input logic rst
);

/* architectural registers */
logic [31:0] PC;

// PC incrementer
always_ff @(posedge clk) begin
    if (rst) begin
        PC <= 0;
    end else if (branch && zero) begin
        // B-TYPE immediate sign extender
        logic [31:0] btype_imm_sign_extended = { {19{b_type_imm[B_TYPE_IMM_WIDTH - 1]}}, b_type_imm };
        PC <= PC + $signed(btype_imm_sign_extended);
    end else begin
        PC <= PC + 1;
    end
    $display("PC %d", PC);
end

// Fetch

logic [31:0] instruction;
Memory #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(32),
    .MEM_SIZE(1024),
    .NUM_READ_PORTS(1),
    .NUM_WRITE_PORTS(1),
    .NAME("I-MEM")
) instruction_memory (
    .clk(clk),
    .reset(rst),
    .write_data({'b0}),
    .write_addr({'b0}),
    .read_addr({PC}),
    .read_enable('b1),
    .write_enable('b0),
    .read_data({instruction})
);

logic [OPCODE_WIDTH - 1: 0] opcode;
logic [FUNCT3_WIDTH - 1: 0] funct3;
logic [FUNCT7_WIDTH - 1: 0] funct7;
logic [ADDR_WIDTH - 1: 0]   rs1;
logic [ADDR_WIDTH - 1: 0]   rs2;
logic [ADDR_WIDTH - 1: 0]   rd;
logic [I_TYPE_IMM_WIDTH - 1: 0] i_type_imm;
logic [S_TYPE_IMM_WIDTH - 1: 0] s_type_imm;
logic [B_TYPE_IMM_WIDTH - 1: 0] b_type_imm; //LSB implicitly 0

// Decode
Decode #(
    .INSN_WIDTH(INSN_WIDTH),
    .OPCODE_WIDTH(OPCODE_WIDTH),
    .FUNCT3_WIDTH(FUNCT3_WIDTH),
    .FUNCT7_WIDTH(FUNCT7_WIDTH),
    .RD_WIDTH(RD_WIDTH),
    .RS_WIDTH(RS_WIDTH),
    .NUM_REGS(NUM_REGS),
    .ADDR_WIDTH(ADDR_WIDTH),
    .I_TYPE_IMM_WIDTH(I_TYPE_IMM_WIDTH),
    .S_TYPE_IMM_WIDTH(S_TYPE_IMM_WIDTH),
    .B_TYPE_IMM_WIDTH(B_TYPE_IMM_WIDTH)
) decode_instruction (
    .instruction(instruction),
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .i_type_imm(i_type_imm),
    .s_type_imm(s_type_imm),
    .b_type_imm(b_type_imm)
);

// Control
logic reg_write;
logic mem_read;
logic mem_write;
logic mem_to_reg;
logic branch;
logic jump;
logic [3:0] imm_sel;

Control #(
    .NUM_OPS(64),
    .FUNCT3_WIDTH(3)
) control_unit (
    .opcode(opcode),
    .funct3(funct3),
    .reg_write(reg_write),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_to_reg(mem_to_reg),
    .branch(branch),
    .jump(jump),
    .imm_sel(imm_sel)
);

// Register File
// logic [63:0] read_data;
logic [31:0] read_data_1;
logic [31:0] read_data_2;
logic [31:0] write_data;
logic write_reg_enable = reg_write;

RF #(
    .DATA_WIDTH(32),
    .NUM_REGS(32),
    .ADDR_WIDTH(5),
    .READ_PORTS(2),
    .WRITE_PORTS(1)
) register_file (
    .clk(clk),
    .rst(rst),
    .read_addrs({rs1, rs2}),
    .write_addrs({rd}),
    .write_data({write_data}),
    .write_reg_enable({write_reg_enable}),
    .read_data({read_data_1, read_data_2})
);


// Execute

logic [31:0] operand1 = read_data_1;
logic [31:0] operand2;
always_comb begin
    case(imm_sel)
    0: operand2 = read_data_2;
    // I-TYPE immediate extender
    1: operand2 = { {20{i_type_imm[I_TYPE_IMM_WIDTH - 1]}}, i_type_imm };
    2: operand2 = { {20{1'b0}}, i_type_imm };
    // S-TYPE immediate extender
    3: operand2 = { {20{s_type_imm[S_TYPE_IMM_WIDTH - 1]}}, s_type_imm };
    default: operand2 = 0;
    endcase
end

logic [31:0] alu_result;
logic zero;

ALU #(
    .DATA_WIDTH(32)
) alu (
    .operand1(operand1),
    .operand2(operand2),
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .result(alu_result),
    .zero(zero)
);

// Memory

logic [31:0] mem_read_data;
Memory #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(32),
    .MEM_SIZE(1024),
    .NUM_READ_PORTS(1),
    .NUM_WRITE_PORTS(1),
    .NAME("D-MEM")
) data_memory (
    .clk(clk),
    .reset(rst),
    .write_data({read_data_2}),
    .write_addr({alu_result}),
    .read_addr({alu_result}),
    .read_enable(mem_read),
    .write_enable(mem_write),
    .read_data({mem_read_data})
);

// Writeback
always_comb begin
case(mem_to_reg)
    0: write_data = alu_result;
    1: write_data = mem_read_data;
    default: write_data = 0;
endcase
end

endmodule
