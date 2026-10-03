`timescale 1ns / 1ps

module tb_subtractor_4bit;

    // Inputs
    reg [3:0] A;
    reg [3:0] B;

    // Outputs
    wire [3:0] Diff;
    wire Bout;

    // Instantiate Unit Under Test (UUT)
    subtractor_4bit uut (
        .A(A), 
        .B(B), 
        .Diff(Diff), 
        .Bout(Bout)
    );

    initial begin
        // Initialize Inputs
        A = 0; B = 0; #20;

        // Test 1: 10 - 4 = 6 (Diff = 0110, Bout = 0)
        A = 4'b1010; B = 4'b0100; #20;

        // Test 2: 7 - 7 = 0 (Diff = 0000, Bout = 0)
        A = 4'b0111; B = 4'b0111; #20;

        // Test 3: 3 - 8 = -5 (Diff = 1011 in 2's complement, Bout = 1)
        A = 4'b0011; B = 4'b1000; #20;

        $finish;
    end
      
endmodule