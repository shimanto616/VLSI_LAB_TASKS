`timescale 1ns / 1ps

module tb_full_adder;

    // Inputs
    reg a;
    reg b;
    reg cin;

    // Outputs
    wire sum;
    wire cout;

    // Instantiate Unit Under Test (UUT)
    full_adder uut (
        .a(a), 
        .b(b), 
        .cin(cin), 
        .sum(sum), 
        .cout(cout)
    );

    initial begin
        // Initialize Inputs
        a = 0; b = 0; cin = 0; #20;
        a = 0; b = 0; cin = 1; #20;
        a = 0; b = 1; cin = 0; #20;
        a = 0; b = 1; cin = 1; #20;
        a = 1; b = 0; cin = 0; #20;
        a = 1; b = 0; cin = 1; #20;
        a = 1; b = 1; cin = 0; #20;
        a = 1; b = 1; cin = 1; #20;
        
        $finish;
    end
      
endmodule