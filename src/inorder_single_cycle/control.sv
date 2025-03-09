module Control #(
    parameter NUM_OPS = 64,
    parameter I_TYPE_IMM_WIDTH = 12

) (
    input [6:0] opcode,
    input logic [I_TYPE_IMM_WIDTH - 1: 0] i_type_imm,
    output logic reg_write,
    
    output logic mem_read,
    output logic mem_write,
    output logic mem_to_reg,
    output logic branch,
    output logic jump,
    output logic [2:0] imm_sel 
    // 0 -> use the register value, 1 -> use the sign extended immediate value, 2 -> use unsigned immediate value
);

always_comb begin
    case(opcode)
        'b0110011: begin
            reg_write = 1;
            mem_read = 0;
            mem_write = 0;
            mem_to_reg = 0;
            branch = 0;
            jump = 0;
            imm_sel = 0;
        end
        'b0010011: begin
            reg_write = 1;
            mem_read = 0;
            mem_write = 0;
            mem_to_reg = 0;
            branch = 0;
            jump = 0;
            case(opcode[2:0])
                3'b000: imm_sel = 1; // ADD
                3'b001: imm_sel = 2; // SLL
                3'b010: imm_sel = 1; // SLT
                3'b011: imm_sel = 2; // SLTU
                3'b100: imm_sel = 2; // XOR
                3'b101: imm_sel = (i_type_imm[11] == 1) ? 1 : 2; // SRL or SRA
                3'b110: imm_sel = 2; // OR
                3'b111: imm_sel = 2; // AND
            endcase
        end

    endcase
end


endmodule
