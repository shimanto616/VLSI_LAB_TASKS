`timescale 1ns / 1ps

module tb_logic_unit;

    // Inputs
    reg [3:0] A;
    reg [3:0] B;

    // Outputs from each logic block
    wire [3:0] and_out;
    wire [3:0] or_out;
    wire [3:0] xor_out;
    wire [3:0] not_out;

    // Instantiate Logic Modules
    and_4bit uut_and (.A(A), .B(B), .Out(and_out));
    or_4bit  uut_or  (.A(A), .B(B), .Out(or_out));
    xor_4bit uut_xor (.A(A), .B(B), .Out(xor_out));
    not_4bit uut_not (.A(A),        .Out(not_out));

    initial begin
        // Initialize Inputs
        A = 4'b0000; B = 4'b0000; #20;

        // Test Case 1: A = 1010, B = 1100
        A = 4'b1010; B = 4'b1100; #20;
        // Expected: AND = 1000, OR = 1110, XOR = 0110, NOT(A) = 0101

        // Test Case 2: A = 1111, B = 0101
        A = 4'b1111; B = 4'b0101; #20;
        // Expected: AND = 0101, OR = 1111, XOR = 1010, NOT(A) = 0000

        $finish;
    end
      
endmodule