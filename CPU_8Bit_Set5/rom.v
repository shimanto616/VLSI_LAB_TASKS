`timescale 1ns / 1ps

module rom (
    input wire [3:0] addr,
    output reg [11:0] instruction
);

    always @(*) begin
        case (addr)
            4'h0: instruction = 12'h10F; // LDI 0x0F
            4'h1: instruction = 12'h5A0; // OR  0xA0
            4'h2: instruction = 12'h700; // NOT
            4'h3: instruction = 12'h900; // SHR
            4'h4: instruction = 12'h2D8; // ADD 0xD8
            4'h5: instruction = 12'h581; // OR  0x81
            4'h6: instruction = 12'h900; // SHR
            default: instruction = 12'h000; // NOP for unused memory
        endcase
    end

endmodule
