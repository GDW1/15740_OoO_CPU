`include "memory.sv"
`include "decode.sv"
`include "control.sv"
`include "alu.sv"
`include "rf.sv"
`include "scoreboard.sv"
`include "branch_memory_masks.sv"
`include "cross_dep_logic.sv"

module SuperScalarCPU #(
    parameter INSN_WIDTH = 32,
    parameter OPCODE_WIDTH = 7,
    parameter FUNCT3_WIDTH = 3,
    parameter FUNCT7_WIDTH = 7,
    parameter RD_WIDTH = 5,
    parameter RS_WIDTH = 5,
    parameter NUMBER_EXECUTION_WIDTH = 4,

    parameter NUM_REGS = 1 << RD_WIDTH,
    parameter ADDR_WIDTH = $clog2(NUM_REGS),
    parameter I_TYPE_IMM_WIDTH = 12,
    parameter S_TYPE_IMM_WIDTH = 12,
    parameter B_TYPE_IMM_WIDTH = 13
) (
    input logic clk,
    input logic rst
);


/**** BEGIN FETCH STAGE ****/
logic stall_fetch;
logic [31:0] nop = 32'h00000013;
logic [31:0] basePC;
logic [31:0] PC_vector [NUMBER_EXECUTION_WIDTH];

// generate the PC vector
genvar gen_i;
generate
    for (gen_i = 0; gen_i < NUMBER_EXECUTION_WIDTH; gen_i++) begin : pc_gen
        assign PC_vector[gen_i] = basePC + gen_i;
    end
endgenerate

// instruction memory
logic [INSN_WIDTH-1:0] instruction_vector [NUMBER_EXECUTION_WIDTH];
logic read_enable_vector [NUMBER_EXECUTION_WIDTH-1:0];
generate
    for (gen_i = 0; gen_i < NUMBER_EXECUTION_WIDTH; gen_i++) begin : read_enable_gen
        assign read_enable_vector[gen_i] = 1;
    end
endgenerate

Memory #(
    .DATA_WIDTH(INSN_WIDTH),
    .ADDR_WIDTH(32),
    .MEM_SIZE(1024),
    .NUM_READ_PORTS(NUMBER_EXECUTION_WIDTH),
    .NUM_WRITE_PORTS(0),
    .NAME("Instruction Memory")
) instruction_memory (
    .clk(clk),
    .reset(rst),
    .write_data(),
    .write_addr(),
    .read_addr(PC_vector),
    .read_enable(read_enable_vector),
    .write_enable(),
    .read_data(instruction_vector)
);


// PC logic
// logic [31:0] btype_imm_sign_extended = { {19{decode_execute_b_type_imm[B_TYPE_IMM_WIDTH - 1]}}, decode_execute_b_type_imm };
logic [31:0] btype_imm_sign_extended;
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        basePC <= 0;
    end else begin
        int branch_i = -1;
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            if (branch_vector_preg[i]) begin
                branch_i = i;
                break;
            end
        end
        if (branch_i != -1) begin
            btype_imm_sign_extended = { {19{decode_execute_b_type_imm_vector_preg[branch_i][B_TYPE_IMM_WIDTH - 1]}}, decode_execute_b_type_imm_vector_preg[branch_i] };

            if (zero_vector[branch_i]) begin
                basePC <= basePC + $signed(btype_imm_sign_extended) + PC_increment;
            end
        end else begin
            if (~stall_fetch) begin
                basePC <= basePC + 32'(PC_increment);
            end else begin
                basePC <= basePC;
            end
        end
    end
end
/**** END FETCH STAGE ****/

// pipeline registers
logic [INSN_WIDTH-1:0] instruction_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [32-1:0] PC_vector_preg [NUMBER_EXECUTION_WIDTH];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            instruction_vector_preg[i] <= 0;
            PC_vector_preg[i] <= 0;
        end
    end else begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            if (~stall_fetch) begin
                instruction_vector_preg[i] <= instruction_vector[i];
                PC_vector_preg[i] <= PC_vector[i];
            end else begin
                instruction_vector_preg[i] <= nop;
                PC_vector_preg[i] <= nop;
            end
        end
    end
end

/**** DECODE STAGE ****/
// In the decode stage, were going to take each of the instructions and decode them and determine their control signals
logic [OPCODE_WIDTH-1:0] opcode_vector [NUMBER_EXECUTION_WIDTH];
logic [FUNCT3_WIDTH-1:0] funct3_vector [NUMBER_EXECUTION_WIDTH];
logic [FUNCT7_WIDTH-1:0] funct7_vector [NUMBER_EXECUTION_WIDTH];
logic [RD_WIDTH-1:0] rd_vector [NUMBER_EXECUTION_WIDTH];
logic [RS_WIDTH-1:0] rs1_vector [NUMBER_EXECUTION_WIDTH];
logic [RS_WIDTH-1:0] rs2_vector [NUMBER_EXECUTION_WIDTH];
logic [I_TYPE_IMM_WIDTH-1:0] i_type_imm_vector [NUMBER_EXECUTION_WIDTH];
logic [S_TYPE_IMM_WIDTH-1:0] s_type_imm_vector [NUMBER_EXECUTION_WIDTH];
logic [B_TYPE_IMM_WIDTH-1:0] b_type_imm_vector [NUMBER_EXECUTION_WIDTH];
logic reg_write_vector  [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_read_vector   [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_write_vector  [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_to_reg_vector [NUMBER_EXECUTION_WIDTH-1:0];
logic branch_vector     [NUMBER_EXECUTION_WIDTH-1:0];
logic jump_vector       [NUMBER_EXECUTION_WIDTH-1:0];
logic [3:0] imm_sel_vector [NUMBER_EXECUTION_WIDTH];


logic [INSN_WIDTH-1:0] instruction_vector_preg_temp [NUMBER_EXECUTION_WIDTH];

// logic [RD_WIDTH-1:0] masked_rd_vector [NUMBER_EXECUTION_WIDTH];

generate
    for (gen_i = 0; gen_i < NUMBER_EXECUTION_WIDTH; gen_i++) begin : decode_gen
        Decode #(
            .INSN_WIDTH(INSN_WIDTH),
            .OPCODE_WIDTH(OPCODE_WIDTH),
            .FUNCT3_WIDTH(FUNCT3_WIDTH),
            .FUNCT7_WIDTH(FUNCT7_WIDTH),
            .RD_WIDTH(RD_WIDTH),
            .RS_WIDTH(RS_WIDTH),
            .I_TYPE_IMM_WIDTH(I_TYPE_IMM_WIDTH),
            .S_TYPE_IMM_WIDTH(S_TYPE_IMM_WIDTH),
            .B_TYPE_IMM_WIDTH(B_TYPE_IMM_WIDTH)
        ) decode (
            .instruction(instruction_vector_preg_temp[gen_i]),
            .opcode(opcode_vector[gen_i]),
            .funct3(funct3_vector[gen_i]),
            .funct7(funct7_vector[gen_i]),
            .rd(rd_vector[gen_i]),
            .rs1(rs1_vector[gen_i]),
            .rs2(rs2_vector[gen_i]),
            .i_type_imm(i_type_imm_vector[gen_i]),
            .s_type_imm(s_type_imm_vector[gen_i]),
            .b_type_imm(b_type_imm_vector[gen_i])
        );

        Control #(
            .FUNCT3_WIDTH(FUNCT3_WIDTH)
        ) control (
            .opcode(opcode_vector[gen_i]),
            .funct3(funct3_vector[gen_i]),
            .reg_write(reg_write_vector[gen_i]),
            .mem_read(mem_read_vector[gen_i]),
            .mem_write(mem_write_vector[gen_i]),
            .mem_to_reg(mem_to_reg_vector[gen_i]),
            .branch(branch_vector[gen_i]),
            .jump(jump_vector[gen_i]),
            .imm_sel(imm_sel_vector[gen_i])
        );
        // always_comb begin
        //     // if the instruction is a branch, we need to set the rd vector to 0
        //     if (reg_write_vector[gen_i]) begin
        //         masked_rd_vector[gen_i] = 0;
        //     end else begin
        //         masked_rd_vector[gen_i] = rd_vector[gen_i];
        //     end
        // end
    end
endgenerate

logic [32-1:0] rs1_vector_data [NUMBER_EXECUTION_WIDTH];
logic [32-1:0] rs2_vector_data [NUMBER_EXECUTION_WIDTH];


RF #(
    .DATA_WIDTH(32),
    .NUM_REGS(NUM_REGS),
    .ADDR_WIDTH(ADDR_WIDTH),
    .READ_PORTS(NUMBER_EXECUTION_WIDTH),
    .WRITE_PORTS(NUMBER_EXECUTION_WIDTH)
) rf (
    .clk(clk),
    .rst(rst),
    .rs1s(rs1_vector),
    .rs2s(rs2_vector),
    .write_addrs(execute_memory_rd_vector_writeback_preg),
    .write_data(write_back_result_vector),
    .write_reg_enable(register_write_vector_writeback_preg),
    .read_data_rs1(rs1_vector_data),
    .read_data_rs2(rs2_vector_data)
);

logic scoreboard_mask_vector [NUMBER_EXECUTION_WIDTH-1:0];
logic branch_mask_vector [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_mask_vector [NUMBER_EXECUTION_WIDTH-1:0];
logic cross_dep_mask_vector [NUMBER_EXECUTION_WIDTH-1:0];

Scoreboard #(
    .NUM_PIPELINE_STAGES(3),
    .NUM_WIDTH(NUMBER_EXECUTION_WIDTH),
    .RD_WIDTH(RD_WIDTH)
) scoreboard (
    .clk(clk),
    .rst(rst),
    .rd(rd_vector),
    .branch(branch_vector),
    .rd_valid(final_mask_vector),
    .rs1(rs1_vector),
    .rs2(rs2_vector),
    .source_rds(rd_vector),
    .can_issue(scoreboard_mask_vector)
);

Memory_branch_mask_logic #(
    .NUM_WIDTH(NUMBER_EXECUTION_WIDTH)
) memory_branch_mask_logic (
    .branch(branch_vector),
    .mem_read(mem_read_vector),
    .mem_write(mem_write_vector),
    .branch_mask(branch_mask_vector),
    .mem_mask(mem_mask_vector)
);

Cross_dep_check #(
    .RS_WIDTH(RS_WIDTH),
    .RD_WIDTH(RD_WIDTH),
    .NUM_WIDTH(NUMBER_EXECUTION_WIDTH)
) cross_dep_check (
    .rd(rd_vector),
    .rs1(rs1_vector),
    .rs2(rs2_vector),
    .can_issue(cross_dep_mask_vector)
);

logic final_mask_vector [NUMBER_EXECUTION_WIDTH-1:0];
always_comb begin : final_mask_logic
    for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
        final_mask_vector[i] = scoreboard_mask_vector[i] & branch_mask_vector[i] & mem_mask_vector[i] & cross_dep_mask_vector[i];
    end
end

always_comb begin
    stall_fetch = 0;
    for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
        if (branch_vector[i] || branch_vector_preg[i]) begin
            stall_fetch = 1;
            break;
        end
    end
end

/* Logic to determine how what to incremend the PC by */
logic [31:0] PC_increment;
logic [31:0] pointer_bound;

// equal to the number of 1s in the final mask vector
always_comb begin
    PC_increment = 0;
    for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
        PC_increment += 32'(final_mask_vector[i]);
    end
    pointer_bound = NUMBER_EXECUTION_WIDTH - PC_increment;
end

// Now we take all the instructions that could not run and shift them to the top
// logic [$clog2(NUMBER_EXECUTION_WIDTH)-1:0] pointer;
// logic [$clog2(NUMBER_EXECUTION_WIDTH)-1:0] pointer2;
logic branch;
always_ff @(posedge clk) begin : instruction_vector_preg_temp_logic
    branch = 0;
    for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
        if (branch_vector[i]) begin
            branch = 1;
            break;
        end
    end
    for (int pointer = 0; pointer < NUMBER_EXECUTION_WIDTH; pointer++) begin
        if (pointer < (pointer_bound)) begin
            if (~branch) begin
                instruction_vector_preg_temp[pointer] <= instruction_vector_preg[pointer + 32'(PC_increment)];
            end else begin
                instruction_vector_preg_temp[pointer] <= nop;
            end
        end else begin

            if (~branch) begin
                instruction_vector_preg_temp[pointer] <= instruction_vector_preg[pointer - 32'(PC_increment)];
            end else begin
                instruction_vector_preg_temp[pointer] <= nop;
            end
        end
    end
end



/**** END DECODE STAGE ****/

// pipeline registers
logic [OPCODE_WIDTH-1:0] decode_execute_opcode_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [FUNCT3_WIDTH-1:0] decode_execute_funct3_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [FUNCT7_WIDTH-1:0] decode_execute_funct7_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [RD_WIDTH-1:0] decode_execute_rd_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [I_TYPE_IMM_WIDTH-1:0] decode_execute_i_type_imm_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [S_TYPE_IMM_WIDTH-1:0] decode_execute_s_type_imm_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [B_TYPE_IMM_WIDTH-1:0] decode_execute_b_type_imm_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [32-1: 0] decode_execute_rs1_vector_data_preg [NUMBER_EXECUTION_WIDTH];
logic [32-1: 0] decode_execute_rs2_vector_data_preg [NUMBER_EXECUTION_WIDTH];
logic reg_write_vector_preg  [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_read_vector_preg   [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_write_vector_preg  [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_to_reg_vector_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic branch_vector_preg     [NUMBER_EXECUTION_WIDTH-1:0];
logic jump_vector_preg       [NUMBER_EXECUTION_WIDTH-1:0];
logic [3:0] imm_sel_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [ADDR_WIDTH-1:0] decode_execute_PC_vector_preg [NUMBER_EXECUTION_WIDTH];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            decode_execute_opcode_vector_preg[i] <= 0;
            decode_execute_funct3_vector_preg[i] <= 0;
            decode_execute_funct7_vector_preg[i] <= 0;
            decode_execute_rd_vector_preg[i] <= 0;
            decode_execute_i_type_imm_vector_preg[i] <= 0;
            decode_execute_s_type_imm_vector_preg[i] <= 0;
            decode_execute_b_type_imm_vector_preg[i] <= 0;
            decode_execute_rs1_vector_data_preg[i] <= 0;
            decode_execute_rs2_vector_data_preg[i] <= 0;
            reg_write_vector_preg[i] <= 0;
            mem_read_vector_preg[i] <= 0;
            mem_write_vector_preg[i] <= 0;
            mem_to_reg_vector_preg[i] <= 0;
            branch_vector_preg[i] <= 0;
            jump_vector_preg[i] <= 0;
            imm_sel_vector_preg[i] <= 0;
        end
    end else begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            if (~final_mask_vector[i]) begin
                decode_execute_opcode_vector_preg[i] <= 0;
                decode_execute_funct3_vector_preg[i] <= 0;
                decode_execute_funct7_vector_preg[i] <= 0;
                decode_execute_rd_vector_preg[i] <= 0;
                decode_execute_i_type_imm_vector_preg[i] <= 0;
                decode_execute_s_type_imm_vector_preg[i] <= 0;
                decode_execute_b_type_imm_vector_preg[i] <= 0;
                decode_execute_rs1_vector_data_preg[i] <= 0;
                decode_execute_rs2_vector_data_preg[i] <= 0;
                reg_write_vector_preg[i] <= 0;
                mem_read_vector_preg[i] <= 0;
                mem_write_vector_preg[i] <= 0;
                mem_to_reg_vector_preg[i] <= 0;
                branch_vector_preg[i] <= 0;
                jump_vector_preg[i] <= 0;
                imm_sel_vector_preg[i] <= 0;
            end else begin 
                decode_execute_opcode_vector_preg[i] <= opcode_vector[i];
                decode_execute_funct3_vector_preg[i] <= funct3_vector[i];
                decode_execute_funct7_vector_preg[i] <= funct7_vector[i];
                decode_execute_rd_vector_preg[i] <= rd_vector[i];
                decode_execute_i_type_imm_vector_preg[i] <= i_type_imm_vector[i];
                decode_execute_s_type_imm_vector_preg[i] <= s_type_imm_vector[i];
                decode_execute_b_type_imm_vector_preg[i] <= b_type_imm_vector[i];
                decode_execute_rs1_vector_data_preg[i] <= rs1_vector_data[i];
                decode_execute_rs2_vector_data_preg[i] <= rs2_vector_data[i];
                reg_write_vector_preg[i] <= reg_write_vector[i];
                mem_read_vector_preg[i] <= mem_read_vector[i];
                mem_write_vector_preg[i] <= mem_write_vector[i];
                mem_to_reg_vector_preg[i] <= mem_to_reg_vector[i];
                branch_vector_preg[i] <= branch_vector[i];
                jump_vector_preg[i] <= jump_vector[i];
                imm_sel_vector_preg[i] <= imm_sel_vector[i];
            end
        end
    end
end

/**** EXECUTE STAGE ****/
logic [32-1:0] alu_result_vector [NUMBER_EXECUTION_WIDTH];
logic zero_vector [NUMBER_EXECUTION_WIDTH];


generate
    for (gen_i = 0; gen_i < NUMBER_EXECUTION_WIDTH; gen_i++) begin : alu_gen
        logic [32-1:0] operand1;
        logic [32-1:0] operand2;

        // ALU operand selection use the imm_sel vector to determine which operand to use
        assign operand1 = decode_execute_rs1_vector_data_preg[gen_i];
        always_comb begin
            case (imm_sel_vector_preg[gen_i])
                0: begin
                    operand2 = decode_execute_rs2_vector_data_preg[gen_i];
                end
                1: begin
                    operand2 = { {20{decode_execute_i_type_imm_vector_preg[gen_i][I_TYPE_IMM_WIDTH - 1]}}, decode_execute_i_type_imm_vector_preg[gen_i] };
                end
                2: begin
                    operand2 = { {20{1'b0}}, decode_execute_i_type_imm_vector_preg[gen_i] };
                end
                default: begin
                    operand2 = decode_execute_rs1_vector_data_preg[gen_i];
                end
            endcase
        end

        ALU #(
            .DATA_WIDTH(32)
        ) alu (
            .opcode(decode_execute_opcode_vector_preg[gen_i]),
            .funct3(decode_execute_funct3_vector_preg[gen_i]),
            .funct7(decode_execute_funct7_vector_preg[gen_i]),
            .operand1(operand1),
            .operand2(operand2),
            .result(alu_result_vector[gen_i]),
            .zero(zero_vector[gen_i])
        );
    end
endgenerate

/**** END EXECUTE STAGE ****/

// pipeline registers
logic [32-1:0] execute_memory_alu_result_vector_preg [NUMBER_EXECUTION_WIDTH];
logic zero_vector_preg [NUMBER_EXECUTION_WIDTH];
logic reg_write_vector_memory_preg  [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_read_vector_memory_preg   [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_write_vector_memory_preg  [NUMBER_EXECUTION_WIDTH-1:0];
logic mem_to_reg_vector_memory_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic branch_vector_memory_preg     [NUMBER_EXECUTION_WIDTH-1:0];
logic jump_vector_memory_preg       [NUMBER_EXECUTION_WIDTH-1:0];
logic [ADDR_WIDTH-1:0] execute_memory_PC_vector_preg [NUMBER_EXECUTION_WIDTH];
logic [RD_WIDTH-1:0] execute_memory_rd_vector_preg [NUMBER_EXECUTION_WIDTH];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            execute_memory_rd_vector_preg[i] <= 0;
        end
    end else begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            execute_memory_rd_vector_preg[i] <= decode_execute_rd_vector_preg[i];
        end
    end
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            execute_memory_alu_result_vector_preg[i] <= 0;
            zero_vector_preg[i] <= 0;
            reg_write_vector_memory_preg[i] <= 0;
            mem_read_vector_memory_preg[i] <= 0;
            mem_write_vector_memory_preg[i] <= 0;
            mem_to_reg_vector_memory_preg[i] <= 0;
            branch_vector_memory_preg[i] <= 0;
            jump_vector_memory_preg[i] <= 0;
        end
    end else begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            execute_memory_alu_result_vector_preg[i] <= alu_result_vector[i];
            zero_vector_preg[i] <= zero_vector[i];
            reg_write_vector_memory_preg[i] <= reg_write_vector_preg[i];
            mem_read_vector_memory_preg[i] <= mem_read_vector_preg[i];
            mem_write_vector_memory_preg[i] <= mem_write_vector_preg[i];
            mem_to_reg_vector_memory_preg[i] <= mem_to_reg_vector_preg[i];
            branch_vector_memory_preg[i] <= branch_vector_preg[i];
            jump_vector_memory_preg[i] <= jump_vector_preg[i];
        end
    end
end

/**** MEMORY STAGE ****/
logic [32-1:0] memory_result_vector [NUMBER_EXECUTION_WIDTH];
logic [32-1:0] memory_address_vector [NUMBER_EXECUTION_WIDTH];
logic [32-1:0] memory_write_data_vector [NUMBER_EXECUTION_WIDTH];
logic memory_read_enable_vector [NUMBER_EXECUTION_WIDTH-1:0];
logic memory_write_enable_vector [NUMBER_EXECUTION_WIDTH-1:0];

generate
    for (gen_i = 0; gen_i < NUMBER_EXECUTION_WIDTH; gen_i++) begin : memory_gen
        assign memory_address_vector[gen_i] = execute_memory_alu_result_vector_preg[gen_i];
        assign memory_write_data_vector[gen_i] = decode_execute_rs2_vector_data_preg[gen_i];
        assign memory_read_enable_vector[gen_i] = mem_read_vector_memory_preg[gen_i];
        assign memory_write_enable_vector[gen_i] = mem_write_vector_memory_preg[gen_i];
    end
endgenerate
Memory #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(32),
    .MEM_SIZE(1024),
    .NUM_READ_PORTS(NUMBER_EXECUTION_WIDTH),
    .NUM_WRITE_PORTS(NUMBER_EXECUTION_WIDTH),
    .NAME("Data Memory")
) data_memory (
    .clk(clk),
    .reset(rst),
    .write_data(memory_write_data_vector),
    .write_addr(memory_address_vector),
    .read_addr(memory_address_vector),
    .read_enable(memory_read_enable_vector),
    .write_enable(memory_write_enable_vector),
    .read_data(memory_result_vector)
);

/**** END MEMORY STAGE ****/

// pipeline registers
logic [32-1:0] memory_write_data_vector_writeback_preg [NUMBER_EXECUTION_WIDTH];
logic memory_read_enable_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic memory_write_enable_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic [32-1:0] memory_result_vector_writeback_preg [NUMBER_EXECUTION_WIDTH];
logic [ADDR_WIDTH-1:0] memory_PC_vector_writeback_preg [NUMBER_EXECUTION_WIDTH];
logic mem_to_reg_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic branch_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic jump_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic zero_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic register_write_vector_writeback_preg [NUMBER_EXECUTION_WIDTH-1:0];
logic [31:0] alu_result_vector_writeback_preg [NUMBER_EXECUTION_WIDTH];
logic [RD_WIDTH-1:0] execute_memory_rd_vector_writeback_preg [NUMBER_EXECUTION_WIDTH];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            memory_write_data_vector_writeback_preg[i] <= 0;
            memory_read_enable_vector_writeback_preg[i] <= 0;
            memory_write_enable_vector_writeback_preg[i] <= 0;
            memory_result_vector_writeback_preg[i] <= 0;
            memory_PC_vector_writeback_preg[i] <= 0;
            mem_to_reg_vector_writeback_preg[i] <= 0;
            branch_vector_writeback_preg[i] <= 0;
            jump_vector_writeback_preg[i] <= 0;
            zero_vector_writeback_preg[i] <= 0;
            register_write_vector_writeback_preg[i] <= 0;
            alu_result_vector_writeback_preg[i] <= 0;
            execute_memory_rd_vector_writeback_preg[i] <= 0;
        end
    end else begin
        for (int i = 0; i < NUMBER_EXECUTION_WIDTH; i++) begin
            memory_write_data_vector_writeback_preg[i] <= memory_write_data_vector[i];
            memory_read_enable_vector_writeback_preg[i] <= memory_read_enable_vector[i];
            memory_write_enable_vector_writeback_preg[i] <= memory_write_enable_vector[i];
            memory_result_vector_writeback_preg[i] <= memory_result_vector[i];
            memory_PC_vector_writeback_preg[i] <= execute_memory_PC_vector_preg[i];
            mem_to_reg_vector_writeback_preg[i] <= mem_to_reg_vector_memory_preg[i];
            branch_vector_writeback_preg[i] <= branch_vector_memory_preg[i];
            jump_vector_writeback_preg[i] <= jump_vector_memory_preg[i];
            register_write_vector_writeback_preg[i] <= reg_write_vector_memory_preg[i];
            // zero_vector_writeback_preg[i] <= zero_vector_preg[i];
            alu_result_vector_writeback_preg[i] <= execute_memory_alu_result_vector_preg[i];
            execute_memory_rd_vector_writeback_preg[i] <= execute_memory_rd_vector_preg[i];
        end
    end
end

/**** WRITE BACK STAGE ****/
logic [32-1:0] write_back_result_vector [NUMBER_EXECUTION_WIDTH];
generate
    for (gen_i = 0; gen_i < NUMBER_EXECUTION_WIDTH; gen_i++) begin : write_back_gen
        always_comb begin
            if (mem_to_reg_vector_writeback_preg[gen_i]) begin
                write_back_result_vector[gen_i] = memory_result_vector_writeback_preg[gen_i];
            end else begin
                write_back_result_vector[gen_i] = alu_result_vector_writeback_preg[gen_i];
            end
        end
    end
endgenerate

endmodule