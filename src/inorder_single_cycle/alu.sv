module ALU #(
    parameter DATA_WIDTH = 32,
    parameter OPCODE_WIDTH = 7,
    parameter FUNCT3_WIDTH = 3,
    parameter FUNCT7_WIDTH = 7,
    parameter NUM_OPS = 64 //TODO fix 
) (
    input logic [DATA_WIDTH-1:0] operand1,
    input logic [DATA_WIDTH-1:0] operand2,
    input logic [OPCODE_WIDTH - 1: 0] opcode,
    input logic [FUNCT3_WIDTH - 1: 0] funct3,
    input logic [FUNCT7_WIDTH - 1: 0] funct7,

    output logic [DATA_WIDTH-1:0] result,
    output logic zero
);

/**
0x0 = ADD
0x1 = SUB
0x2 = XOR
*/
typedef enum logic [$clog2(NUM_OPS)-1:0] {
    ADD,
    SUB,
    XOR,
    OR,
    AND,
    SLL,
    SRL,
    SRA,
    SLT,
    SLTU
} E_ALU_OPS;

E_ALU_OPS alu_op;

always_comb begin : decode_op
    case (opcode)
        7'b0110011: begin
            case(funct3)
                3'h0: alu_op = ((funct7 == 7'b0100000) ? SUB : ADD);
                3'h4: alu_op = XOR;
                3'h6: alu_op = OR;
                3'h7: alu_op = AND;
                3'h1: alu_op = SLL;
                3'h5: alu_op = ((funct7 == 7'b0100000) ? SRA : SRL);
                3'h2: alu_op = SLT;
                3'h3: alu_op = SLTU;
                default: alu_op = ADD;
            endcase
        end 
        7'b0010011: begin
            case(funct3)
                3'h0: alu_op = ADD;
                3'h4: alu_op = XOR;
                3'h6: alu_op = OR;
                3'h7: alu_op = AND;
                3'h1: alu_op = SLL;
                3'h5: alu_op = (operand2[11:5] == 7'b0100000) ? SRA : SRL;
                3'h2: alu_op = SLT;
                3'h3: alu_op = SLTU;
                default: alu_op = ADD;
            endcase
        end 
        default: alu_op = ADD;
    endcase
end

always_comb begin : execute_op
    case(alu_op)
        ADD: result = operand1 + operand2;
        SUB: result = operand1 - operand2;
        XOR: result = operand1 ^ operand2;
        OR: result = operand1 | operand2;
        AND: result = operand1 & operand2;
        SLL: result = operand1 << operand2[4:0];
        SRL: result = operand1 >> operand2[4:0];
        //sign extension requires signed operands
        SRA: result = $signed(operand1) >>> operand2[4:0];
        SLT: result = ($signed(operand1) < $signed(operand2)) ? 1 : 0;
        SLTU: result = (operand1 < operand2) ? 1 : 0; // TODO FIX
        default: result = 0;
    endcase
end

endmodule
