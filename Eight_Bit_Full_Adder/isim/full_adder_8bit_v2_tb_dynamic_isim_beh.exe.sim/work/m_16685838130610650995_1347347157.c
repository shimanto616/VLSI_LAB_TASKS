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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Xilinx_project/computer/Eight_Bit_Full_Adder/full_adder_8bit_v2_tb_dynamic.v";
static int ng1[] = {0, 0};
static int ng2[] = {15, 0};
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "Test %0d: PASS | A=%0d B=%0d Cin=%b | Expected=%0d Actual=%0d";
static int ng5[] = {1, 0};
static const char *ng6 = "Test %0d: FAIL | A=%0d B=%0d Cin=%b | Expected=%0d Actual=%0d";
static const char *ng7 = "-----------------------------------";
static const char *ng8 = "Total Tests = %0d";
static const char *ng9 = "PASS = %0d";
static const char *ng10 = "FAIL = %0d";



static void Initial_43_0(char *t0)
{
    char t6[8];
    char t13[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 7320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6408);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t14, 32);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)119, t6, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(114, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(49, ng0);

LAB8:    xsi_set_current_line(52, ng0);
    *((int *)t13) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t14 = (t13 + 4);
    *((int *)t14) = 0;
    t15 = (t0 + 5448);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t4, 1, 0, 1);
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t4, 2, 0, 1);
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t4, 3, 0, 1);
    t16 = (t0 + 3368);
    xsi_vlogvar_assign_value(t16, t4, 4, 0, 1);
    t17 = (t0 + 3528);
    xsi_vlogvar_assign_value(t17, t4, 5, 0, 1);
    t18 = (t0 + 3688);
    xsi_vlogvar_assign_value(t18, t4, 6, 0, 1);
    t19 = (t0 + 3848);
    xsi_vlogvar_assign_value(t19, t4, 7, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t4, 1, 0, 1);
    t14 = (t0 + 4328);
    xsi_vlogvar_assign_value(t14, t4, 2, 0, 1);
    t15 = (t0 + 4488);
    xsi_vlogvar_assign_value(t15, t4, 3, 0, 1);
    t16 = (t0 + 4648);
    xsi_vlogvar_assign_value(t16, t4, 4, 0, 1);
    t17 = (t0 + 4808);
    xsi_vlogvar_assign_value(t17, t4, 5, 0, 1);
    t18 = (t0 + 4968);
    xsi_vlogvar_assign_value(t18, t4, 6, 0, 1);
    t19 = (t0 + 5128);
    xsi_vlogvar_assign_value(t19, t4, 7, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 7128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    xsi_vlogtype_concat(t6, 9, 9, 2U, t5, 1, t4, 8);
    t7 = (t0 + 5608);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    xsi_vlogtype_concat(t13, 9, 9, 2U, t16, 1, t15, 8);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 9, t6, 9, t13, 9);
    t17 = (t0 + 5288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 9, t20, 9, t19, 1);
    t22 = (t0 + 5768);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 9);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1528U);
    t7 = *((char **)t2);
    t2 = (t0 + 1688U);
    t14 = *((char **)t2);
    t2 = (t0 + 1848U);
    t15 = *((char **)t2);
    t2 = (t0 + 2008U);
    t16 = *((char **)t2);
    t2 = (t0 + 2168U);
    t17 = *((char **)t2);
    t2 = (t0 + 2328U);
    t18 = *((char **)t2);
    xsi_vlogtype_concat(t6, 9, 9, 9U, t18, 1, t17, 1, t16, 1, t15, 1, t14, 1, t7, 1, t5, 1, t4, 1, t3, 1);
    t2 = (t0 + 5928);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 9);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t14))
        goto LAB12;

LAB10:    t15 = (t4 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB12;

LAB11:    *((unsigned int *)t6) = 1;

LAB12:    t17 = (t6 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(89, ng0);

LAB17:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5448);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5608);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5288);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 5768);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 5928);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng6, 7, t0, (char)119, t6, 32, (char)118, t15, 8, (char)118, t18, 8, (char)118, t23, 1, (char)118, t26, 9, (char)118, t29, 9);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 6408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB15:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 6088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB13:    xsi_set_current_line(74, ng0);

LAB16:    xsi_set_current_line(76, ng0);
    t18 = (t0 + 6088);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t22, 32, t23, 32);
    t24 = (t0 + 5448);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 5608);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 5288);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 5768);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t0 + 5928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlogfile_write(1, 0, 0, ng4, 7, t0, (char)119, t13, 32, (char)118, t26, 8, (char)118, t29, 8, (char)118, t32, 1, (char)118, t35, 9, (char)118, t38, 9);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 6248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

}


extern void work_m_16685838130610650995_1347347157_init()
{
	static char *pe[] = {(void *)Initial_43_0};
	xsi_register_didat("work_m_16685838130610650995_1347347157", "isim/full_adder_8bit_v2_tb_dynamic_isim_beh.exe.sim/work/m_16685838130610650995_1347347157.didat");
	xsi_register_executes(pe);
}
