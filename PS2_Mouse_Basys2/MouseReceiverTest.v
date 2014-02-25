`timescale 1ns/1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:59:35 19/02/2014
// Design Name:   MouseReceiver
// Module Name:   /afs/inf.ed.ac.uk/user/s10/s1008380/Desktop/PS2_Mouse_Verilog/PS2_Mouse_Basys2/MouseReceiverTest.v
// Project Name:  PS2_Mouse_Basys2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MouseReceiver
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MouseReceiverTest;

	// Inputs
	reg RESET;
	reg CLK;
	reg CLK_MOUSE_IN;
	reg DATA_MOUSE_IN;
	reg READ_ENABLE;

	// Outputs
	wire [7:0] BYTE_READ;
	wire [1:0] BYTE_ERROR_CODE;
	wire BYTE_READY;

	// Instantiate the Unit Under Test (UUT)
	MouseReceiver uut (
		.RESET(RESET), 
		.CLK(CLK), 
		.CLK_MOUSE_IN(CLK_MOUSE_IN), 
		.DATA_MOUSE_IN(DATA_MOUSE_IN), 
		.READ_ENABLE(READ_ENABLE), 
		.BYTE_READ(BYTE_READ), 
		.BYTE_ERROR_CODE(BYTE_ERROR_CODE), 
		.BYTE_READY(BYTE_READY)
	);

	initial 
		begin
			// Initialize Inputs
			RESET = 0;
			CLK = 0;
			CLK_MOUSE_IN = 1;
			DATA_MOUSE_IN = 1;
			READ_ENABLE = 1;

			$display("Testbench Start");
			
			#40000;	// 12kHz period -> 40us half cycle
			
			// Send out 0xFA


			$display("Start Bit");			
			// Start Bit		
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			CLK_MOUSE_IN = 1;
			#20000;

			$display("Bit 1 = %b", DATA_MOUSE_IN);	
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 2 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;

			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 3 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 4 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 5 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 6 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 7 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;

			DATA_MOUSE_IN = 1;
			#20000
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 8 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Parity Bit = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;	

			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Stop Bit = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;	

			#50000;
			
			// Send out 0xF4

			$display("Start Bit");			
			// Start Bit		
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			CLK_MOUSE_IN = 1;
			#20000;

			$display("Bit 1 = %b", DATA_MOUSE_IN);	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 2 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;

			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 3 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 4 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 5 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 6 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 7 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;

			DATA_MOUSE_IN = 0;
			#20000
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 8 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Parity Bit = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;	

			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Stop Bit = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;	

			#50000;
			
						// Send out 0xF5

			$display("Start Bit");			
			// Start Bit		
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			CLK_MOUSE_IN = 1;
			#20000;

			$display("Bit 1 = %b", DATA_MOUSE_IN);	
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 2 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;

			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 3 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 0;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 4 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
	
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 5 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 6 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 7 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;

			DATA_MOUSE_IN = 1;
			#20000
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Bit 8 = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;
			
			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Parity Bit = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;	

			DATA_MOUSE_IN = 1;
			#20000;
			CLK_MOUSE_IN = 0;
			#40000;
			$display("Stop Bit = %b", DATA_MOUSE_IN);
			CLK_MOUSE_IN = 1;
			#20000;	

			#50000;
			
			$display("Testbench Stop");
			
			
		end
	
	initial
		begin
		$monitor("%d,\t%b,\t%b,\t%b",$time,BYTE_READ,BYTE_ERROR_CODE,BYTE_READY);
		end
		
	always
		#10 CLK = !CLK;
      
endmodule

