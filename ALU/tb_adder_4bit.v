`timescale 1ns / 1ps

module tb_adder_4bit;

    // Inputs
    reg [3:0] A;
    reg [3:0] B;
    reg Cin;

    // Outputs
    wire [3:0] Sum;
    wire Cout;

    // Instantiate Unit Under Test (UUT)
    adder_4bit uut (
        .A(A), 
        .B(B), 
        .Cin(Cin), 
        .Sum(Sum), 
        .Cout(Cout)
    );

    initial begin
        // Initialize Inputs
        A = 0; B = 0; Cin = 0; #20;

        // Test 1: 5 + 3 = 8 (No carry)
        A = 4'b0101; B = 4'b0011; Cin = 0; #20;

        // Test 2: 12 + 5 = 17 -> Sum=1, Cout=1 (Overflow/Carry out)
        A = 4'b1100; B = 4'b0101; Cin = 0; #20;

        // Test 3: 15 + 15 + Cin(1) = 31 -> Sum=15, Cout=1
        A = 4'b1111; B = 4'b1111; Cin = 1; #20;

        $finish;
    end
      
endmodule