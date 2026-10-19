`timescale 1ns / 1ps

module tb_rom;

    reg [3:0] addr;
    wire [11:0] instruction;

    rom uut (
        .addr(addr),
        .instruction(instruction)
    );

    initial begin
        addr = 4'h0; #10;
        addr = 4'h1; #10;
        addr = 4'h2; #10;
        addr = 4'h3; #10;
        addr = 4'h4; #10;
        addr = 4'h5; #10;
        addr = 4'h6; #10;
        addr = 4'h7; #10;
        $stop;
    end

endmodule