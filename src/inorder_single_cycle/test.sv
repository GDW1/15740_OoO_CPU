module test ();
    reg [32:0] test_memory [0:1]; //1x32 bit memory
    initial begin
        $readmemb("memory_file.mem", test_memory);
        $display("Memory: ", test_memory[0]);
    end
endmodule
