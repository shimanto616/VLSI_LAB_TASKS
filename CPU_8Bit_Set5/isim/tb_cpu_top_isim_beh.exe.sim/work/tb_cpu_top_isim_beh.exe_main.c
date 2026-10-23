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
    work_m_01410848251429132227_3383896982_init();
    work_m_13216178855435747787_2220189930_init();
    work_m_03240873606451626347_1351276808_init();
    work_m_03301016654329643006_2725559894_init();
    work_m_10394303148217047701_1084470642_init();
    work_m_18219645078299670622_0924832676_init();
    work_m_00385165536325192618_3836416073_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_00385165536325192618_3836416073");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
