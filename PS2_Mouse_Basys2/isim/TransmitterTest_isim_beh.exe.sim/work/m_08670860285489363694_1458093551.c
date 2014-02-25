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
static const char *ng0 = "/afs/inf.ed.ac.uk/user/s10/s1008380/Desktop/PS2_Mouse_Verilog/PS2_Mouse_Basys2/MouseTransmitter.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {6000, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {7, 0};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};



static void Always_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 7848);
    *((int *)t2) = 1;
    t3 = (t0 + 6072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_55_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 7864);
    *((int *)t2) = 1;
    t3 = (t0 + 6320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(64, ng0);

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

}

static void Always_76_2(char *t0)
{
    char t16[8];
    char t33[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 7880);
    *((int *)t2) = 1;
    t3 = (t0 + 6568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(88, ng0);

LAB30:    xsi_set_current_line(89, ng0);
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB9:    xsi_set_current_line(96, ng0);

LAB35:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 4328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t16) = 1;

LAB39:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 16, t5, 16, t6, 16);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 16);

LAB42:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB11:    xsi_set_current_line(106, ng0);

LAB44:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(111, ng0);

LAB45:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 2888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1368U);
    t14 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t14 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t14);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t7) == 0)
        goto LAB46;

LAB48:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;

LAB49:    t24 = (t16 + 4);
    t25 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB51;

LAB50:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 & 1U);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t16);
    t29 = (t27 & t28);
    *((unsigned int *)t33) = t29;
    t31 = (t6 + 4);
    t32 = (t16 + 4);
    t34 = (t33 + 4);
    t30 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t30 | t35);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB52;

LAB53:
LAB54:    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t33);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB29;

LAB15:    xsi_set_current_line(116, ng0);

LAB58:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1368U);
    t14 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t14 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t14);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB62;

LAB60:    if (*((unsigned int *)t7) == 0)
        goto LAB59;

LAB61:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;

LAB62:    t24 = (t16 + 4);
    t25 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB64;

LAB63:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 & 1U);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t16);
    t29 = (t27 & t28);
    *((unsigned int *)t33) = t29;
    t31 = (t6 + 4);
    t32 = (t16 + 4);
    t34 = (t33 + 4);
    t30 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t30 | t35);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB65;

LAB66:
LAB67:    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t33);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4968);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 4328);
    t24 = (t15 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t16, 1, t5, t14, 2, t25, 16, 2);
    t31 = (t0 + 3848);
    xsi_vlogvar_assign_value(t31, t16, 0, 0, 1);
    goto LAB29;

LAB17:    xsi_set_current_line(128, ng0);

LAB80:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 2888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1368U);
    t14 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t14 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t14);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB84;

LAB82:    if (*((unsigned int *)t7) == 0)
        goto LAB81;

LAB83:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;

LAB84:    t24 = (t16 + 4);
    t25 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB86;

LAB85:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 & 1U);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t16);
    t29 = (t27 & t28);
    *((unsigned int *)t33) = t29;
    t31 = (t6 + 4);
    t32 = (t16 + 4);
    t34 = (t33 + 4);
    t30 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t30 | t35);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB87;

LAB88:
LAB89:    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t33);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB90;

LAB91:
LAB92:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t33, 0, 8);
    t6 = (t33 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 255U);
    memset(t16, 0, 8);
    t14 = (t33 + 4);
    t18 = 1;
    t19 = *((unsigned int *)t33);
    t20 = *((unsigned int *)t33);
    t20 = (t20 & 1);
    if (*((unsigned int *)t14) != 0)
        goto LAB93;

LAB94:    t21 = 0;

LAB96:    t22 = (t21 <= 7);
    if (t22 == 1)
        goto LAB97;

LAB98:    t26 = (!(t20));
    *((unsigned int *)t16) = t26;

LAB95:    t24 = (t0 + 3848);
    xsi_vlogvar_assign_value(t24, t16, 0, 0, 1);
    goto LAB29;

LAB19:    xsi_set_current_line(135, ng0);

LAB103:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB21:    xsi_set_current_line(149, ng0);

LAB104:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB108;

LAB106:    if (*((unsigned int *)t3) == 0)
        goto LAB105;

LAB107:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;

LAB108:    t7 = (t16 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB109;

LAB110:
LAB111:    goto LAB29;

LAB23:    xsi_set_current_line(155, ng0);

LAB112:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB116;

LAB114:    if (*((unsigned int *)t3) == 0)
        goto LAB113;

LAB115:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;

LAB116:    t7 = (t16 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB117;

LAB118:
LAB119:    goto LAB29;

LAB25:    xsi_set_current_line(161, ng0);

LAB120:    xsi_set_current_line(162, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB121;

LAB122:
LAB123:    goto LAB29;

LAB27:    xsi_set_current_line(167, ng0);

LAB124:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB125;

LAB126:
LAB127:    goto LAB29;

LAB31:    xsi_set_current_line(89, ng0);

LAB34:    xsi_set_current_line(90, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB33;

LAB38:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(97, ng0);

LAB43:    xsi_set_current_line(98, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 3208);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 4);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB42;

LAB46:    *((unsigned int *)t16) = 1;
    goto LAB49;

LAB51:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t25);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB50;

LAB52:    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t33) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t16 + 4);
    t43 = *((unsigned int *)t6);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & t53);
    t58 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t58 & t54);
    goto LAB54;

LAB55:    xsi_set_current_line(113, ng0);
    t65 = ((char*)((ng7)));
    t66 = (t0 + 3208);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 4);
    goto LAB57;

LAB59:    *((unsigned int *)t16) = 1;
    goto LAB62;

LAB64:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t25);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB63;

LAB65:    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t33) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t16 + 4);
    t43 = *((unsigned int *)t6);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & t53);
    t58 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t58 & t54);
    goto LAB67;

LAB68:    xsi_set_current_line(117, ng0);

LAB71:    xsi_set_current_line(118, ng0);
    t65 = (t0 + 4328);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng8)));
    memset(t69, 0, 8);
    t70 = (t67 + 4);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = (t74 | t77);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t71);
    t81 = (t79 | t80);
    t82 = (~(t81));
    t83 = (t78 & t82);
    if (t83 != 0)
        goto LAB75;

LAB72:    if (t81 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t69) = 1;

LAB75:    t85 = (t69 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t69);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 16, t5, 16, t6, 16);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 16);

LAB78:    goto LAB70;

LAB74:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(118, ng0);

LAB79:    xsi_set_current_line(119, ng0);
    t91 = ((char*)((ng9)));
    t92 = (t0 + 3208);
    xsi_vlogvar_assign_value(t92, t91, 0, 0, 4);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB78;

LAB81:    *((unsigned int *)t16) = 1;
    goto LAB84;

LAB86:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t25);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB85;

LAB87:    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t33) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t16 + 4);
    t43 = *((unsigned int *)t6);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & t53);
    t58 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t58 & t54);
    goto LAB89;

LAB90:    xsi_set_current_line(130, ng0);
    t65 = ((char*)((ng10)));
    t66 = (t0 + 3208);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 4);
    goto LAB92;

LAB93:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB95;

LAB97:    if (t18 == 1)
        goto LAB100;

LAB101:    t23 = (t19 & 1);
    t20 = (t20 ^ t23);

LAB102:    t19 = (t19 >> 1);

LAB99:    t21 = (t21 + 1);
    goto LAB96;

LAB100:    t18 = 0;
    goto LAB102;

LAB105:    *((unsigned int *)t16) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(151, ng0);
    t14 = ((char*)((ng12)));
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB111;

LAB113:    *((unsigned int *)t16) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(157, ng0);
    t14 = ((char*)((ng13)));
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB119;

LAB121:    xsi_set_current_line(163, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB123;

LAB125:    xsi_set_current_line(169, ng0);

LAB128:    xsi_set_current_line(170, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB127;

}

static void Cont_180_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7896);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_183_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7912);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_184_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7928);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_187_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7944);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_08670860285489363694_1458093551_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_55_1,(void *)Always_76_2,(void *)Cont_180_3,(void *)Cont_183_4,(void *)Cont_184_5,(void *)Cont_187_6};
	xsi_register_didat("work_m_08670860285489363694_1458093551", "isim/TransmitterTest_isim_beh.exe.sim/work/m_08670860285489363694_1458093551.didat");
	xsi_register_executes(pe);
}
