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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_15504050820636261896_3260569530_init();
    work_m_06872334895459982200_3346275593_init();
    work_m_10764087207863065690_2073120511_init();


    xsi_register_tops("work_m_06872334895459982200_3346275593");
    xsi_register_tops("work_m_10764087207863065690_2073120511");


    return xsi_run_simulation(argc, argv);

}
