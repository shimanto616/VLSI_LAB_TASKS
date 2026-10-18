`timescale 1ns / 1ps

module tb_register_acc_z;

    // Inputs
    reg clk;
    reg reset;
    reg load_acc;
    reg [7:0] alu_result;

    // Outputs
    wire [7:0] acc;
    wire z_flag;

    // Instantiate Unit Under Test (UUT)
    register_acc_z uut (
        .clk(clk),
        .reset(reset),
        .load_acc(load_acc),
        .alu_result(alu_result),
        .acc(acc),
        .z_flag(z_flag)
    );

    // Clock Generation (10ns period)
    always #5 clk = ~clk;

    initial begin
        // Initialize Inputs
        clk = 0;
        reset = 1;
        load_acc = 0;
        alu_result = 8'h00;

        // Apply Reset for 15ns (ACC should be 0x00, Z should be 1)
        #15;
        reset = 0;

        // Load non-zero value (0xA5) -> Z should become 0
        #10;
        alu_result = 8'hA5;
        load_acc = 1;

        // Disable load -> ACC and Z should remain unchanged
        #10;
        load_acc = 0;
        alu_result = 8'hFF;

        // Load zero value (0x00) -> Z should become 1
        #10;
        alu_result = 8'h00;
        load_acc = 1;

        #10;
        load_acc = 0;

        #20;
        $stop;
    end

endmodule