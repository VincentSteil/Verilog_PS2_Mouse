/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xb4d1ced7 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%d,\tBYTE_TO_SEND: %b,\tDATA_MOUSE_OUT: %b,\tDATA_MOUSE_OUT_EN: %b,\tBYTE_SENT:%b";
static const char *ng1 = "/afs/inf.ed.ac.uk/user/s10/s1008380/Desktop/PS2_Mouse_Verilog/PS2_Mouse_Basys2/TransmitterTest.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "Testbench Stop";
static unsigned int ng5[] = {244U, 0U};
static const char *ng6 = "Acknowledge: DATA_MOUSE_IN = %b";
static const char *ng7 = "Acknowledge: CLK_MOUSE_IN = %b";

void Monitor_95_2(char *);
void Monitor_95_2(char *);


static void Monitor_95_2_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = (t0 + 1368U);
    t8 = *((char **)t6);
    t6 = (t0 + 1528U);
    t9 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t1, 64, (char)118, t5, 8, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1);

LAB1:    return;
}

static void Initial_55_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng1);

LAB4:    xsi_set_current_line(59, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(66, ng1);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(69, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(73, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 890000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(74, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(75, ng1);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(76, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(77, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(78, ng1);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(79, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 40000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(80, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(81, ng1);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(82, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(83, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(84, ng1);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(86, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 50000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(88, ng1);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB1;

}

static void Initial_93_1(char *t0)
{

LAB0:    xsi_set_current_line(94, ng1);

LAB2:    xsi_set_current_line(95, ng1);
    Monitor_95_2(t0);

LAB1:    return;
}

static void Always_98_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng1);
    t2 = (t0 + 3944);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng1);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

void Monitor_95_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4192);
    t2 = (t0 + 4704);
    xsi_vlogfile_monitor((void *)Monitor_95_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_12857705706265060361_1215057182_init()
{
	static char *pe[] = {(void *)Initial_55_0,(void *)Initial_93_1,(void *)Always_98_3,(void *)Monitor_95_2};
	xsi_register_didat("work_m_12857705706265060361_1215057182", "isim/TransmitterTest_isim_beh.exe.sim/work/m_12857705706265060361_1215057182.didat");
	xsi_register_executes(pe);
}
