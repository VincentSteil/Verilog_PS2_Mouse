`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:45:59 19/02/2014
// Design Name:   MouseTransmitter
// Module Name:   /afs/inf.ed.ac.uk/user/s10/s1008380/Desktop/PS2_Mouse_Verilog/PS2_Mouse_Basys2/TransmitterTest.v
// Project Name:  PS2_Mouse_Basys2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MouseTransmitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TransmitterTest;

	// Inputs
	reg RESET;
	reg CLK;
	reg CLK_MOUSE_IN;
	reg DATA_MOUSE_IN;
	reg SEND_BYTE;
	reg [7:0] BYTE_TO_SEND;

	// Outputs
	wire CLK_MOUSE_OUT_EN;
	wire DATA_MOUSE_OUT;
	wire DATA_MOUSE_OUT_EN;
	wire BYTE_SENT;

	// Instantiate the Unit Under Test (UUT)
	MouseTransmitter uut (
		.RESET(RESET), 
		.CLK(CLK), 
		.CLK_MOUSE_IN(CLK_MOUSE_IN), 
		.CLK_MOUSE_OUT_EN(CLK_MOUSE_OUT_EN), 
		.DATA_MOUSE_IN(DATA_MOUSE_IN), 
		.DATA_MOUSE_OUT(DATA_MOUSE_OUT), 
		.DATA_MOUSE_OUT_EN(DATA_MOUSE_OUT_EN), 
		.SEND_BYTE(SEND_BYTE), 
		.BYTE_TO_SEND(BYTE_TO_SEND), 
		.BYTE_SENT(BYTE_SENT)
	);

	initial
		begin
			
			// Initialize Inputs
			RESET = 0;
			CLK = 0;
			CLK_MOUSE_IN = 1;
			DATA_MOUSE_IN = 1;
			SEND_BYTE = 0;
			BYTE_TO_SEND = 0;
			
			$display("Testbench Stop");

			// Wait 100 ns for global reset to finish
			#100;
			SEND_BYTE = 1;
			BYTE_TO_SEND = 8'hF4;
			
			#890000
			DATA_MOUSE_IN = 0;
			$display("Acknowledge: DATA_MOUSE_IN = %b", DATA_MOUSE_IN);
			#20000
			CLK_MOUSE_IN = 0;
			$display("Acknowledge: CLK_MOUSE_IN = %b", CLK_MOUSE_IN);
			#40000
			CLK_MOUSE_IN = 1;
			$display("Acknowledge: CLK_MOUSE_IN = %b", CLK_MOUSE_IN);
			#20000
			DATA_MOUSE_IN = 1;
			$display("Acknowledge: DATA_MOUSE_IN = %b", DATA_MOUSE_IN);
			
			#50000;
			
			$display("Testbench Stop");

		end
	
	
	initial
		begin
		$monitor("%d,\tBYTE_TO_SEND: %b,\tDATA_MOUSE_OUT: %b,\tDATA_MOUSE_OUT_EN: %b,\tBYTE_SENT:%b",$time,BYTE_TO_SEND, DATA_MOUSE_OUT,DATA_MOUSE_OUT_EN,BYTE_SENT);
		end
		
	always
		#10 CLK = !CLK;
      
endmodule

