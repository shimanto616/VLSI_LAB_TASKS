`timescale 1ns / 1ps

module tb_mux8to1_4bit;

    // Inputs
    reg [3:0] in0, in1, in2, in3, in4, in5, in6, in7;
    reg [2:0] sel;

    // Output
    wire [3:0] out;

    // Instantiate Unit Under Test (UUT)
    mux8to1_4bit uut (
        .in0(in0), .in1(in1), .in2(in2), .in3(in3),
        .in4(in4), .in5(in5), .in6(in6), .in7(in7),
        .sel(sel),
        .out(out)
    );

    initial begin
        // Assign unique 4-bit values to inputs
        in0 = 4'h0; // 0000 (ADD)
        in1 = 4'h1; // 0001 (SUB)
        in2 = 4'h2; // 0010 (AND)
        in3 = 4'h3; // 0011 (OR)
        in4 = 4'h4; // 0100 (XOR)
        in5 = 4'h5; // 0101 (NOT)
        in6 = 4'h0;
        in7 = 4'h0;
        sel = 3'b000;
        #20;

        // Cycle through all selection modes
        sel = 3'b000; #20; // Output should be 4'h0
        sel = 3'b001; #20; // Output should be 4'h1
        sel = 3'b010; #20; // Output should be 4'h2
        sel = 3'b011; #20; // Output should be 4'h3
        sel = 3'b100; #20; // Output should be 4'h4
        sel = 3'b101; #20; // Output should be 4'h5

        $finish;
    end

endmodule