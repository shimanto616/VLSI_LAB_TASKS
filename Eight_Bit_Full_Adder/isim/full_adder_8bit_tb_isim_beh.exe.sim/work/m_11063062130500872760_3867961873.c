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
static const char *ng0 = "/home/ise/Xilinx_project/computer/Eight_Bit_Full_Adder/full_adder_8bit_tb.v";
static const char *ng1 = "==============================================";
static const char *ng2 = "      8-BIT FULL ADDER DYNAMIC TESTING";
static int ng3[] = {0, 0};
static int ng4[] = {100, 0};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "PASS | A=%b B=%b Cin=%b | Sum=%b Cout=%b";
static const char *ng7 = "ERROR | A=%b B=%b Cin=%b | Expected=%b | Actual=%b";
static int ng8[] = {1, 0};
static const char *ng9 = "       DYNAMIC TESTING COMPLETED";



static void Initial_39_0(char *t0)
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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

LAB7:    xsi_set_current_line(85, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(86, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(87, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(89, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(46, ng0);

LAB8:    xsi_set_current_line(49, ng0);
    *((int *)t13) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t14 = (t13 + 4);
    *((int *)t14) = 0;
    t15 = (t0 + 5448);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(54, ng0);
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
    xsi_set_current_line(55, ng0);
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
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6648);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    xsi_vlogtype_concat(t6, 9, 9, 2U, t5, 1, t4, 8);
    t7 = (t0 + 5608);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng5)));
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
    xsi_set_current_line(63, ng0);
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
    t2 = (t0 + 5768);
    t19 = (t2 + 56U);
    t22 = *((char **)t19);
    memset(t13, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t22))
        goto LAB12;

LAB10:    t23 = (t6 + 4);
    t24 = (t22 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB12:    t25 = (t13 + 4);
    t8 = *((unsigned int *)t25);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(72, ng0);

LAB17:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    t15 = (t0 + 5288);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 5768);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = (t0 + 1208U);
    t25 = *((char **)t23);
    t23 = (t0 + 1368U);
    t26 = *((char **)t23);
    t23 = (t0 + 1528U);
    t27 = *((char **)t23);
    t23 = (t0 + 1688U);
    t28 = *((char **)t23);
    t23 = (t0 + 1848U);
    t29 = *((char **)t23);
    t23 = (t0 + 2008U);
    t30 = *((char **)t23);
    t23 = (t0 + 2168U);
    t31 = *((char **)t23);
    t23 = (t0 + 2328U);
    t32 = *((char **)t23);
    xsi_vlogtype_concat(t6, 9, 9, 9U, t32, 1, t31, 1, t30, 1, t29, 1, t28, 1, t27, 1, t26, 1, t25, 1, t24, 1);
    xsi_vlogfile_write(1, 0, 0, ng7, 6, t0, (char)118, t4, 8, (char)118, t14, 8, (char)118, t17, 1, (char)118, t22, 9, (char)118, t6, 9);

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB13:    xsi_set_current_line(63, ng0);

LAB16:    xsi_set_current_line(65, ng0);
    t26 = (t0 + 5448);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 5608);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 5288);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    t35 = (t0 + 1208U);
    t37 = *((char **)t35);
    t35 = (t0 + 1368U);
    t38 = *((char **)t35);
    t35 = (t0 + 1528U);
    t39 = *((char **)t35);
    t35 = (t0 + 1688U);
    t40 = *((char **)t35);
    t35 = (t0 + 1848U);
    t41 = *((char **)t35);
    t35 = (t0 + 2008U);
    t42 = *((char **)t35);
    t35 = (t0 + 2168U);
    t43 = *((char **)t35);
    xsi_vlogtype_concat(t20, 8, 8, 8U, t43, 1, t42, 1, t41, 1, t40, 1, t39, 1, t38, 1, t37, 1, t36, 1);
    t35 = (t0 + 2328U);
    t44 = *((char **)t35);
    xsi_vlogfile_write(1, 0, 0, ng6, 6, t0, (char)118, t28, 8, (char)118, t31, 8, (char)118, t34, 1, (char)118, t20, 8, (char)118, t44, 1);
    goto LAB15;

}


extern void work_m_11063062130500872760_3867961873_init()
{
	static char *pe[] = {(void *)Initial_39_0};
	xsi_register_didat("work_m_11063062130500872760_3867961873", "isim/full_adder_8bit_tb_isim_beh.exe.sim/work/m_11063062130500872760_3867961873.didat");
	xsi_register_executes(pe);
}
