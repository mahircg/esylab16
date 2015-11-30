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
static const char *ng0 = "C:/Users/Mahircan/Ders/embedded_systems_lab/lt16lab/soc/peripheral/switches.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_1537780098;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *work_p_1537780098_sub_3096033564_3209126847(char *, char *, int , int );


static void work_a_2537233267_3212880686_p_0(char *t0)
{
    char t23[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4864);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t11 = (0 + 67U);
    t1 = (t3 + t11);
    t5 = *((unsigned char *)t1);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 4976);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 8317);
    t4 = (t0 + 5040);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(41, ng0);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t15 = (0 + 62U);
    t8 = (t9 + t15);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    if (t17 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB9;

LAB11:    t4 = (t0 + 1672U);
    t7 = *((char **)t4);
    t12 = (0 + 68U);
    t4 = (t7 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(42, ng0);
    t10 = (t0 + 1512U);
    t18 = *((char **)t10);
    t10 = (t0 + 5040);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 8U);
    xsi_driver_first_trans_delta(t10, 0U, 8U, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 8132U);
    t1 = xsi_base_array_concat(t1, t23, t4, (char)99, (unsigned char)2, (char)97, t3, t7, (char)101);
    t11 = (1U + 7U);
    t2 = (8U != t11);
    if (t2 == 1)
        goto LAB17;

LAB18:    t8 = (t0 + 5040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_delta(t8, 8U, 8U, 0LL);
    goto LAB15;

LAB17:    xsi_size_not_matching(8U, t11, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4976);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

}

static void work_a_2537233267_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);

LAB2:    t7 = (t0 + 4880);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2537233267_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t3 = (t0 + 5168);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_delta(t3, 16U, 16U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2537233267_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5232);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);

LAB2:    t8 = (t0 + 4896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2537233267_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t2 = work_p_1537780098_sub_3096033564_3209126847(WORK_P_1537780098, t1, 983044, 4194300);
    t3 = (64U != 64U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 5296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 64U);
    xsi_driver_first_trans_delta(t4, 33U, 64U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(64U, 64U, 0);
    goto LAB6;

}


extern void work_a_2537233267_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2537233267_3212880686_p_0,(void *)work_a_2537233267_3212880686_p_1,(void *)work_a_2537233267_3212880686_p_2,(void *)work_a_2537233267_3212880686_p_3,(void *)work_a_2537233267_3212880686_p_4};
	xsi_register_didat("work_a_2537233267_3212880686", "isim/warmup1_tb_isim_beh.exe.sim/work/a_2537233267_3212880686.didat");
	xsi_register_executes(pe);
}
