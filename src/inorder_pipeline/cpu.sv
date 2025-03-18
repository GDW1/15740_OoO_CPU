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
/*
    values that need to carry from decode to execute:
    
    write_reg_enable, mem_write, mem_read, branch, jump, imm_select
*/
/* pipeline registers begin */
logic [31:0] fetch_decode_instruction_preg;
logic [31:0] fetch_decode_PC_preg; 

logic [I_TYPE_IMM_WIDTH - 1:0] decode_execute_i_type_imm;
logic [S_TYPE_IMM_WIDTH - 1:0] decode_execute_s_type_imm;
logic [B_TYPE_IMM_WIDTH - 1:0] decode_execute_b_type_imm;
logic [31:0] decode_execute_read_data_1; 
logic [31:0] decode_execute_read_data_2;
logic [OPCODE_WIDTH - 1:0] decode_execute_opcode;
logic [FUNCT3_WIDTH - 1:0] decode_execute_funct3;
logic [FUNCT7_WIDTH - 1:0] decode_execute_funct7;
logic [31:0] decode_execute_pc;
logic [3:0] decode_execute_imm_select;
logic [RD_WIDTH - 1: 0] decode_execute_rd;
logic decode_execute_write_reg_enable, decode_execute_mem_write, decode_execute_mem_read, decode_execute_branch, decode_execute_jump, decode_execute_mem_to_reg;

logic [31:0] execute_mem_ALU_result;
logic execute_mem_zero;
logic [31:0] execute_mem_reg_read_2;
logic [RD_WIDTH - 1: 0] execute_mem_rd;
logic [31:0] execute_mem_PC;
logic execute_mem_mem_read, execute_mem_mem_write, execute_mem_reg_write, execute_mem_mem_to_reg, execute_mem_branch, execute_mem_jump;

logic [31:0] mem_wb_mem_result;
logic [31:0] mem_wb_alu_result;
logic [RD_WIDTH - 1:0] mem_wb_rd;
logic mem_wb_reg_write, mem_wb_mem_to_reg;

/* end pipeline registers */ 

/* wires */
// decode instruction
logic [OPCODE_WIDTH - 1: 0] opcode;
logic [FUNCT3_WIDTH - 1: 0] funct3;
logic [FUNCT7_WIDTH - 1: 0] funct7;
logic [ADDR_WIDTH - 1: 0]   rs1;
logic [ADDR_WIDTH - 1: 0]   rs2;
logic [ADDR_WIDTH - 1: 0]   rd;
logic [I_TYPE_IMM_WIDTH - 1: 0] i_type_imm;
logic [S_TYPE_IMM_WIDTH - 1: 0] s_type_imm;
logic [B_TYPE_IMM_WIDTH - 1: 0] b_type_imm; //LSB implicitly 0
// Control
logic reg_write;
logic mem_read;
logic mem_write;
logic mem_to_reg;
logic branch;
logic jump;
logic [3:0] imm_sel;

// PC incrementer
always_ff @(posedge clk) begin
    if (rst) begin
        PC <= 0;
    end else if (branch && zero) begin
        // B-TYPE immediate sign extender
        logic [31:0] btype_imm_sign_extended = { {19{b_type_imm[B_TYPE_IMM_WIDTH - 1]}}, b_type_imm };
        PC <= PC + $signed(btype_imm_sign_extended);
    end else if (stall) begin
        PC <= PC;
    end else begin
        PC <= PC + 1;
    end
    $display("PC %d", PC);
end

// Fetch Stage begin

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

always_ff @(posedge clk) begin : preg_setting
    if (rst) begin
        fetch_decode_instruction_preg <= 0;
        fetch_decode_PC_preg <= 0; 

        decode_execute_i_type_imm <= 0;
        decode_execute_s_type_imm <= 0;
        decode_execute_b_type_imm <= 0;
        decode_execute_read_data_1 <= 0;
        decode_execute_read_data_2 <= 0;
        decode_execute_opcode <= 0;
        decode_execute_funct3 <= 0;
        decode_execute_funct7 <= 0;
        decode_execute_pc <= 0;
        decode_execute_imm_select <= 0;
        decode_execute_write_reg_enable <= 0;
        decode_execute_mem_write <= 0;
        decode_execute_mem_read <= 0;
        decode_execute_branch <= 0;
        decode_execute_jump <= 0;
        decode_execute_rd <= 0;
        decode_execute_mem_to_reg <= 0;

        execute_mem_rd <= 0;
        execute_mem_reg_read_2 <= 0;
        execute_mem_zero <= 0;
        execute_mem_ALU_result <= 0;

        execute_mem_mem_read <= 0;
        execute_mem_mem_write <= 0;
        execute_mem_reg_write <= 0;
        execute_mem_mem_to_reg <= 0;
        execute_mem_branch <= 0;
        execute_mem_jump <= 0;

        mem_wb_alu_result <= 0;
        mem_wb_mem_result <= 0;
        mem_wb_rd <= 0;
        mem_wb_reg_write <= 0;
        mem_wb_mem_to_reg <= 0;
    end else begin
        mem_wb_alu_result <= execute_mem_ALU_result;
        mem_wb_mem_result <= mem_read_data;
        mem_wb_rd <= execute_mem_rd;
        mem_wb_reg_write <= execute_mem_reg_write;
        mem_wb_mem_to_reg <= execute_mem_mem_to_reg; 

        execute_mem_rd <= decode_execute_rd;
        execute_mem_reg_read_2 <= decode_execute_read_data_2;
        execute_mem_zero <= zero;
        execute_mem_ALU_result <= alu_result;
        execute_mem_mem_read <= decode_execute_mem_read;
        execute_mem_mem_write <= decode_execute_mem_write;
        execute_mem_reg_write <= decode_execute_write_reg_enable;
        execute_mem_mem_to_reg <= decode_execute_mem_to_reg;
        execute_mem_branch <= decode_execute_branch;
        execute_mem_jump <= decode_execute_jump;

        fetch_decode_instruction_preg <= instruction; 
        fetch_decode_PC_preg <= PC; 

        decode_execute_i_type_imm <= i_type_imm;
        decode_execute_s_type_imm <= s_type_imm;
        decode_execute_b_type_imm <= b_type_imm;
        decode_execute_read_data_1 <= read_data_1; 
        decode_execute_read_data_2 <= read_data_2;
        decode_execute_opcode <= opcode;
        decode_execute_funct3 <= funct3;
        decode_execute_funct7 <= funct7;
        decode_execute_pc <= fetch_decode_PC_preg;
        decode_execute_imm_select <= imm_sel;
        decode_execute_write_reg_enable <= reg_write & ~stall;
        decode_execute_mem_write <= mem_write & ~stall;
        decode_execute_mem_read <= mem_read & ~stall;
        decode_execute_branch <= branch & ~stall;
        decode_execute_jump <= jump & ~stall;   
        decode_execute_rd <= rd;   
        decode_execute_mem_to_reg <= mem_to_reg;
    end
end


logic s00 = (rs1 == execute_mem_rd);
logic s01 = ((rs2 == execute_mem_rd) & imm_sel == 0);

logic s10 = (rs1 == mem_wb_rd);
logic s11 = ((rs2 == mem_wb_rd) & imm_sel == 0);

logic s20 = (rs1 == decode_execute_rd);
logic s21 = ((rs2 == decode_execute_rd) & imm_sel == 0);

logic s0 = (s00 | s01) & execute_mem_reg_write;
logic s1 = (s10 | s11) & mem_wb_reg_write;
logic s2 = (s20 | s21) & decode_execute_write_reg_enable;
logic stall;
always_comb begin
    stall = s0 | s1 | s2;
end
// fetch stage end
// decode stage begin

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
    .instruction(fetch_decode_instruction_preg),
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
    .write_addrs({mem_wb_rd}),
    .write_data({write_data}),
    .write_reg_enable({mem_wb_reg_write}),
    .read_data({read_data_1, read_data_2})
);

// decode stage end



// Execute stage begin

logic [31:0] operand1 = decode_execute_read_data_1;
logic [31:0] operand2;
always_comb begin
    case(decode_execute_imm_select)
    0: operand2 = decode_execute_read_data_2;
    // I-TYPE immediate extender
    1: operand2 = { {20{decode_execute_i_type_imm[I_TYPE_IMM_WIDTH - 1]}}, decode_execute_i_type_imm };
    2: operand2 = { {20{1'b0}}, decode_execute_i_type_imm };
    // S-TYPE immediate extender
    3: operand2 = { {20{decode_execute_s_type_imm[S_TYPE_IMM_WIDTH - 1]}}, decode_execute_s_type_imm };
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
    .opcode(decode_execute_opcode),
    .funct3(decode_execute_funct3),
    .funct7(decode_execute_funct7),
    .result(alu_result),
    .zero(zero)
);


// execute stage end

// Memory stage begin

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
    .write_data({execute_mem_reg_read_2}),
    .write_addr({execute_mem_ALU_result}),
    .read_addr({execute_mem_ALU_result}),
    .read_enable(execute_mem_mem_read),
    .write_enable(execute_mem_mem_write),
    .read_data({mem_read_data})
);

// memory stage end

// Writeback stage begin
always_comb begin
case(mem_wb_mem_to_reg)
    0: write_data = mem_wb_alu_result;
    1: write_data = mem_wb_mem_result;
    default: write_data = 0;
endcase
end

// Writeback stage end

endmodule
