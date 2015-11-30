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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Mahircan/Ders/embedded_systems_lab/lt16lab/soc/core/decoder_shadow.vhd";
extern char *WORK_P_1507036401;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );
char *work_p_1507036401_sub_1068650375_3868518172(char *);
char *work_p_1507036401_sub_1068651497_3868518172(char *);
char *work_p_1507036401_sub_1068652619_3868518172(char *);


static void work_a_3173248183_1516540902_p_0(char *t0)
{
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    int t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t28;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = work_p_1507036401_sub_1068650375_3868518172(WORK_P_1507036401);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 9U, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = work_p_1507036401_sub_1068651497_3868518172(WORK_P_1507036401);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 16U);
    xsi_driver_first_trans_delta(t2, 9U, 16U, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = work_p_1507036401_sub_1068652619_3868518172(WORK_P_1507036401);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 16U);
    xsi_driver_first_trans_delta(t2, 25U, 13U, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 38U, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = (31 - 31);
    t8 = (t7 * 1U);
    t9 = (0 + 0U);
    t10 = (t9 + t8);
    t1 = (t2 + t10);
    t3 = ((WORK_P_1507036401) + 3808U);
    t4 = *((char **)t3);
    t11 = xsi_mem_cmp(t4, t1, 4U);
    if (t11 == 1)
        goto LAB3;

LAB8:    t3 = ((WORK_P_1507036401) + 3928U);
    t5 = *((char **)t3);
    t12 = xsi_mem_cmp(t5, t1, 4U);
    if (t12 == 1)
        goto LAB4;

LAB9:    t3 = ((WORK_P_1507036401) + 4048U);
    t6 = *((char **)t3);
    t13 = xsi_mem_cmp(t6, t1, 4U);
    if (t13 == 1)
        goto LAB5;

LAB10:    t3 = (t0 + 4624);
    t15 = xsi_mem_cmp(t3, t1, 4U);
    if (t15 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 38U, 1, 0LL);
    xsi_set_current_line(69, ng0);
    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:
LAB2:    t1 = (t0 + 2672);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(35, ng0);
    t16 = (t0 + 1032U);
    t17 = *((char **)t16);
    t18 = (31 - 3);
    t19 = (t18 * 1U);
    t20 = (0 + 0U);
    t21 = (t20 + t19);
    t16 = (t17 + t21);
    t22 = (t0 + 2752);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t16, 4U);
    xsi_driver_first_trans_delta(t22, 4U, 4U, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 37U, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 36U, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_delta(t1, 25U, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((WORK_P_1507036401) + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 2752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 0U, 4U, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_delta(t1, 19U, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_delta(t1, 18U, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t27, 4, 8);
    t28 = (8U != 8U);
    if (t28 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 8U);
    xsi_driver_first_trans_delta(t2, 9U, 8U, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((WORK_P_1507036401) + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 2752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 27U, 4U, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 26U, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = ((WORK_P_1507036401) + 2008U);
    t2 = *((char **)t1);
    t1 = (t0 + 2752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 27U, 4U, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = (31 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + 0U);
    t10 = (t9 + t8);
    t1 = (t2 + t10);
    t3 = (t0 + 2752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t14 = *((char **)t6);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_delta(t3, 9U, 8U, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_delta(t1, 22U, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_delta(t1, 23U, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_delta(t1, 24U, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 2752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t14 = *((char **)t6);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_delta(t3, 9U, 8U, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    goto LAB2;

LAB12:;
LAB13:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB14;

LAB15:    t1 = (t0 + 4628);
    xsi_report(t1, 40U, (unsigned char)2);
    goto LAB16;

}


extern void work_a_3173248183_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3173248183_1516540902_p_0};
	xsi_register_didat("work_a_3173248183_1516540902", "isim/warmup1_tb_isim_beh.exe.sim/work/a_3173248183_1516540902.didat");
	xsi_register_executes(pe);
}
