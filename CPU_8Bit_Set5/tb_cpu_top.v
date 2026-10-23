`timescale 1ns / 1ps

module tb_cpu_top;

    // Inputs
    reg clk;
    reg reset;

    // Outputs
    wire [7:0] Q;
    wire Z;
    wire [3:0] PC;

    // Instantiate Unit Under Test (UUT)
    cpu_top uut (
        .clk(clk),
        .reset(reset),
        .Q(Q),
        .Z(Z),
        .PC(PC)
    );

    // Clock Generation (10ns period: 5ns LOW, 5ns HIGH)
    always #5 clk = ~clk;

    initial begin
        // Initialize Signals
        clk = 0;
        reset = 1;

        // Apply synchronous active-high RESET for one rising edge
        #10;
        reset = 0;

        // Run for 8 clock cycles (80ns total) to complete all Set 5 instructions
        #80;

        $stop;
    end

    // Monitor Output in ISim Console
    initial begin
        $display("Time\t\tPC\tRESET\tACC(Hex)\tZ\tACC(Binary)");
        $monitor("%d ns\t%d\t%b\t0x%h\t\t%b\t%b", $time, PC, reset, Q, Z, Q);
    end

endmodule