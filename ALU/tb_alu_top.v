`timescale 1ns / 1ps

module tb_alu_top;

    // Inputs
    reg [3:0] A;
    reg [3:0] B;
    reg [2:0] ALU_Sel;

    // Outputs
    wire [3:0] ALU_Out;
    wire CarryOut;

    // Instantiate Unit Under Test (UUT)
    alu_top uut (
        .A(A), 
        .B(B), 
        .ALU_Sel(ALU_Sel), 
        .ALU_Out(ALU_Out), 
        .CarryOut(CarryOut)
    );

    initial begin
        // Default values
        A = 4'b0000; B = 4'b0000; ALU_Sel = 3'b000; #20;

        // --- Test 1: ADD (A = 8, B = 5 -> Out = 13 [1101], Carry = 0) ---
        A = 4'b1000; B = 4'b0101; ALU_Sel = 3'b000; #20;

        // --- Test 2: SUB (A = 12, B = 4 -> Out = 8 [1000], Carry = 0) ---
        A = 4'b1100; B = 4'b0100; ALU_Sel = 3'b001; #20;

        // --- Test 3: AND (A = 1010, B = 1100 -> Out = 1000) ---
        A = 4'b1010; B = 4'b1100; ALU_Sel = 3'b010; #20;

        // --- Test 4: OR (A = 1010, B = 0101 -> Out = 1111) ---
        A = 4'b1010; B = 4'b0101; ALU_Sel = 3'b011; #20;

        // --- Test 5: XOR (A = 1010, B = 1100 -> Out = 0110) ---
        A = 4'b1010; B = 4'b1100; ALU_Sel = 3'b100; #20;

        // --- Test 6: NOT (A = 1010 -> Out = 0101) ---
        A = 4'b1010; B = 4'b0000; ALU_Sel = 3'b101; #20;

        $finish;
    end
      
endmodule