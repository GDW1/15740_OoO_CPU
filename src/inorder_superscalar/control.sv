module Control #(
    parameter NUM_OPS = 64,
    parameter FUNCT3_WIDTH = 3
) (
    input [6:0] opcode,
    input logic [FUNCT3_WIDTH - 1: 0] funct3,
    output logic reg_write,
    
    output logic mem_read,
    output logic mem_write,
    output logic mem_to_reg,
    output logic branch,
    output logic jump,
    output logic [3:0] imm_sel 
    // 0 -> use the register value
    // I-TYPE
    //  1 -> use the sign extended immediate value
    //  2 -> use unsigned immediate value
    // S-TYPE
    //  3 -> use the sign extended immediate value (S-TYPE is always signed)
    // B-TYPE
    //  4 -> use the sign extended immediate value (B-TYPE is always signed)
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
            case(funct3)
                3'b000: imm_sel = 1; // ADD
                3'b001: imm_sel = 2; // SLL
                3'b010: imm_sel = 1; // SLT
                3'b011: imm_sel = 2; // SLTU
                3'b100: imm_sel = 2; // XOR
                3'b101: imm_sel = 2; // SRL or SRA
                3'b110: imm_sel = 2; // OR
                3'b111: imm_sel = 2; // AND
            endcase
        end
        'b0000011: begin
            reg_write = 0;
            mem_read = 1;
            mem_write = 0;
            mem_to_reg = 1;
            branch = 0;
            jump = 0;
            //offset should always be signed
            imm_sel = 1;
        end
        'b0100011: begin
            reg_write = 0;
            mem_read = 0;
            mem_write = 1;
            mem_to_reg = 0;
            branch = 0;
            jump = 0;
            imm_sel = 3;
        end
        'b1100011: begin
            reg_write = 0;
            mem_read = 0;
            mem_write = 0;
            mem_to_reg = 0;
            branch = 1;
            jump = 0;
            imm_sel = 0;
        end
        default: begin
            //Do nothing
            reg_write = 0;
            mem_read = 0;
            mem_write = 0;
            mem_to_reg = 0;
            branch = 0;
            jump = 0;
            imm_sel = 0;
        end
    endcase
end


endmodule
