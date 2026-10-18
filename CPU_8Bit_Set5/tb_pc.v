`timescale 1ns / 1ps

module tb_pc;

    // Inputs
    reg clk;
    reg reset;

    // Outputs
    wire [3:0] pc_out;

    // Instantiate Unit Under Test (UUT)
    pc uut (
        .clk(clk),
        .reset(reset),
        .pc_out(pc_out)
    );

    // Clock Generation (10ns period)
    always #5 clk = ~clk;

    initial begin
        // Initialize Inputs
        clk = 0;
        reset = 1;

        // Apply Reset for 15ns
        #15;
        reset = 0;

        // Run counter for 5 clock cycles
        #50;

        // Re-apply reset to test synchronous reset
        reset = 1;
        #10;
        reset = 0;

        #20;
        $stop;
    end

endmodule