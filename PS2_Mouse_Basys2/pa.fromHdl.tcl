
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name PS2_Mouse_Basys2 -dir "/afs/inf.ed.ac.uk/user/s10/s1008380/Desktop/PS2_Mouse_Verilog/PS2_Mouse_Basys2/planAhead_run_3" -part xc3s100ecp132-5
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property top MouseTransceiver $srcset
set_param project.paUcfFile  "MouseTransceiver.ucf"
set hdlfile [add_files [list {SevenSegmentDisplay.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MouseTransmitter.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MouseReceiver.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MouseMasterSM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MouseTransceiver.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
add_files "MouseTransceiver.ucf" -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s100ecp132-5
