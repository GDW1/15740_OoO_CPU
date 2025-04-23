module Memory_branch_mask_logic #(
    parameter NUM_WIDTH = 3
) (
    input logic branch [NUM_WIDTH-1:0],
    input logic mem_write [NUM_WIDTH-1 : 0],
    input logic mem_read [NUM_WIDTH-1 : 0],
    output logic branch_mask [NUM_WIDTH-1:0], // mask for each instruction
    output logic mem_mask    [NUM_WIDTH-1:0]// mask for each instruction
);

logic mem_op [0:NUM_WIDTH-1];
always_comb begin
    for (int i = 0; i < NUM_WIDTH; i++) begin
        mem_op[i] = mem_write[NUM_WIDTH - i] || mem_read[NUM_WIDTH - i];
    end
end
always_comb begin : mem_mask_logic
    // find the first 1 in the mem_op array. Set all operations prior to it to 1, set the rest to 0
    for (int i = 0; i < NUM_WIDTH; i++) begin
        mem_mask[i] = 1;
    end

    for (int i = 0; i < NUM_WIDTH; i++) begin
        if (mem_op[i]) begin
            for (int j = i + 1; j < NUM_WIDTH; j++) begin
                mem_mask[j] = 0;
            end
            break;
        end
    end
end

always_comb begin : branch_mask_logic 
    // find the first 1 in the mem_op array. Set all operations prior to it to 1, set the rest to 0
    for (int i = 0; i < NUM_WIDTH; i++) begin
        branch_mask[i] = 1;
    end

    for (int i = 0; i < NUM_WIDTH; i++) begin
        if (branch[i]) begin
            for (int j = i + 1; j < NUM_WIDTH; j++) begin
                branch_mask[j] = 0;
            end
            break;
        end
    end
end

endmodule // memory_branch_mask_logic