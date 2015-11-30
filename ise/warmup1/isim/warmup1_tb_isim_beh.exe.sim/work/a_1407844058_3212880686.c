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
static const char *ng0 = "C:/Users/Mahircan/Ders/embedded_systems_lab/lt16lab/soc/core/core2wb.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_1537780098;
extern char *WORK_P_3778902183;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_313326228_503743352(char *, unsigned char , unsigned char );
char *work_p_1537780098_sub_3712368508_3209126847(char *, char *, char *, char *, char *);
char *work_p_1537780098_sub_4222136751_3209126847(char *, char *, char *, char *);
char *work_p_1537780098_sub_584848194_3209126847(char *, char *, char *, char *);


static void work_a_1407844058_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4928);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 4992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_delta(t5, 0U, 32U, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4928);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t10 = (0 + 32U);
    t1 = (t2 + t10);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t12 = (0 + 63U);
    t5 = (t6 + t12);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = (0 + 0U);
    t7 = (t8 + t13);
    t9 = work_p_1537780098_sub_4222136751_3209126847(WORK_P_1537780098, t11, t5, t7);
    t14 = (t11 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t17 = (t0 + 4992);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 32U);
    xsi_driver_first_trans_delta(t17, 0U, 32U, 0LL);
    goto LAB8;

LAB10:    xsi_size_not_matching(32U, t15, 0);
    goto LAB11;

}

static void work_a_1407844058_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4800);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t7 = (0 + 101U);
    t5 = (t6 + t7);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB9;

LAB10:    t4 = (unsigned char)0;

LAB11:    if (t4 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5056);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t7 = (0 + 32U);
    t1 = (t2 + t7);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5056);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB5:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t7 = (0 + 32U);
    t1 = (t2 + t7);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5056);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);
    t15 = (t0 + 5056);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t15);
    goto LAB7;

LAB9:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = (0 + 66U);
    t10 = (t11 + t12);
    t13 = *((unsigned char *)t10);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB11;

LAB12:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 5056);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

LAB15:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 5056);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t5);
    goto LAB16;

}

static void work_a_1407844058_3212880686_p_2(char *t0)
{
    char t19[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    static char *nl0[] = {&&LAB3, &&LAB5, &&LAB4};

LAB0:    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 5120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_delta(t3, 30U, 32U, 0LL);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4816);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t9 = (0 + 66U);
    t3 = (t4 + t9);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB6;

LAB8:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (0 + 101U);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB15;

LAB16:    t8 = (unsigned char)0;

LAB17:    if (t8 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(90, ng0);
    t1 = ((WORK_P_1537780098) + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5120);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 80U);
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 62U, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 67U, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 68U, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_3778902183) + 1168U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 - 1);
    t9 = (31 - t15);
    t16 = (t9 * 1U);
    t17 = (0 + 67U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t4 = (t0 + 5120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 30U);
    xsi_driver_first_trans_delta(t4, 0U, 30U, 0LL);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (31 - 1);
    t16 = (t9 * 1U);
    t17 = (0 + 67U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t20 = (0 + 99U);
    t3 = (t4 + t20);
    t5 = work_p_1537780098_sub_584848194_3209126847(WORK_P_1537780098, t19, t1, t3);
    t6 = (t19 + 12U);
    t21 = *((unsigned int *)t6);
    t21 = (t21 * 1U);
    t8 = (4U != t21);
    if (t8 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 5120);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t22 = (t13 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t5, 4U);
    xsi_driver_first_trans_delta(t7, 63U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 62U, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 67U, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 68U, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_3778902183) + 1168U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 - 1);
    t9 = (31 - t15);
    t16 = (t9 * 1U);
    t17 = (0 + 32U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t4 = (t0 + 5120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 30U);
    xsi_driver_first_trans_delta(t4, 0U, 30U, 0LL);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (31 - 1);
    t16 = (t9 * 1U);
    t17 = (0 + 32U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t20 = (0 + 64U);
    t3 = (t4 + t20);
    t5 = work_p_1537780098_sub_584848194_3209126847(WORK_P_1537780098, t19, t1, t3);
    t6 = (t19 + 12U);
    t21 = *((unsigned int *)t6);
    t21 = (t21 * 1U);
    t8 = (4U != t21);
    if (t8 == 1)
        goto LAB22;

LAB23:    t7 = (t0 + 5120);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t22 = (t13 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t5, 4U);
    xsi_driver_first_trans_delta(t7, 63U, 4U, 0LL);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (31 - 1);
    t16 = (t9 * 1U);
    t17 = (0 + 32U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t20 = (0 + 64U);
    t3 = (t4 + t20);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t21 = (0 + 0U);
    t5 = (t6 + t21);
    t7 = work_p_1537780098_sub_3712368508_3209126847(WORK_P_1537780098, t19, t1, t3, t5);
    t12 = (t19 + 12U);
    t24 = *((unsigned int *)t12);
    t24 = (t24 * 1U);
    t8 = (32U != t24);
    if (t8 == 1)
        goto LAB24;

LAB25:    t13 = (t0 + 5120);
    t22 = (t13 + 56U);
    t23 = *((char **)t22);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 32U);
    xsi_driver_first_trans_delta(t13, 30U, 32U, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 5120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 62U, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 67U, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 68U, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_3778902183) + 1168U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 - 1);
    t9 = (31 - t15);
    t16 = (t9 * 1U);
    t17 = (0 + 32U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t4 = (t0 + 5120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 30U);
    xsi_driver_first_trans_delta(t4, 0U, 30U, 0LL);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (31 - 1);
    t16 = (t9 * 1U);
    t17 = (0 + 32U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t20 = (0 + 64U);
    t3 = (t4 + t20);
    t5 = work_p_1537780098_sub_584848194_3209126847(WORK_P_1537780098, t19, t1, t3);
    t6 = (t19 + 12U);
    t21 = *((unsigned int *)t6);
    t21 = (t21 * 1U);
    t8 = (4U != t21);
    if (t8 == 1)
        goto LAB9;

LAB10:    t7 = (t0 + 5120);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t22 = (t13 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t5, 4U);
    xsi_driver_first_trans_delta(t7, 63U, 4U, 0LL);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (31 - 1);
    t16 = (t9 * 1U);
    t17 = (0 + 32U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t20 = (0 + 64U);
    t3 = (t4 + t20);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t21 = (0 + 0U);
    t5 = (t6 + t21);
    t7 = work_p_1537780098_sub_3712368508_3209126847(WORK_P_1537780098, t19, t1, t3, t5);
    t12 = (t19 + 12U);
    t24 = *((unsigned int *)t12);
    t24 = (t24 * 1U);
    t8 = (32U != t24);
    if (t8 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 5120);
    t22 = (t13 + 56U);
    t23 = *((char **)t22);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 32U);
    xsi_driver_first_trans_delta(t13, 30U, 32U, 0LL);
    goto LAB7;

LAB9:    xsi_size_not_matching(4U, t21, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(32U, t24, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 5120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_delta(t5, 62U, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 67U, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 68U, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_3778902183) + 1168U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 - 1);
    t9 = (31 - t15);
    t16 = (t9 * 1U);
    t17 = (0 + 67U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t4 = (t0 + 5120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 30U);
    xsi_driver_first_trans_delta(t4, 0U, 30U, 0LL);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (31 - 1);
    t16 = (t9 * 1U);
    t17 = (0 + 67U);
    t18 = (t17 + t16);
    t1 = (t2 + t18);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t20 = (0 + 99U);
    t3 = (t4 + t20);
    t5 = work_p_1537780098_sub_584848194_3209126847(WORK_P_1537780098, t19, t1, t3);
    t6 = (t19 + 12U);
    t21 = *((unsigned int *)t6);
    t21 = (t21 * 1U);
    t8 = (4U != t21);
    if (t8 == 1)
        goto LAB18;

LAB19:    t7 = (t0 + 5120);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t22 = (t13 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t5, 4U);
    xsi_driver_first_trans_delta(t7, 63U, 4U, 0LL);
    goto LAB7;

LAB15:    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t16 = (0 + 66U);
    t3 = (t4 + t16);
    t27 = *((unsigned char *)t3);
    t28 = (t27 == (unsigned char)2);
    t8 = t28;
    goto LAB17;

LAB18:    xsi_size_not_matching(4U, t21, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(4U, t21, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(4U, t21, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(32U, t24, 0);
    goto LAB25;

}

static void work_a_1407844058_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 80U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4832);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1407844058_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)1);
    if (t7 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)0);
    if (t7 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4848);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5248);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t9 = (0 + 32U);
    t1 = (t3 + t9);
    t10 = *((unsigned char *)t1);
    t4 = (t0 + 5248);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t10;
    xsi_driver_first_trans_delta(t4, 32U, 1, 0LL);
    goto LAB3;

LAB7:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t9 = (0 + 66U);
    t1 = (t3 + t9);
    t10 = *((unsigned char *)t1);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t13 = (0 + 101U);
    t4 = (t5 + t13);
    t14 = *((unsigned char *)t4);
    t15 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t10, t14);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = (0 + 66U);
    t1 = (t2 + t9);
    t6 = *((unsigned char *)t1);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t13 = (0 + 101U);
    t3 = (t4 + t13);
    t7 = *((unsigned char *)t3);
    t10 = ieee_p_2592010699_sub_313326228_503743352(IEEE_P_2592010699, t6, t7);
    t5 = (t0 + 5248);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    *((unsigned char *)t19) = t10;
    xsi_driver_first_trans_delta(t5, 32U, 1, 0LL);

LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(121, ng0);
    t8 = (t0 + 1672U);
    t11 = *((char **)t8);
    t17 = (0 + 32U);
    t8 = (t11 + t17);
    t18 = *((unsigned char *)t8);
    t12 = (t0 + 5248);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t18;
    xsi_driver_first_trans_delta(t12, 32U, 1, 0LL);
    goto LAB10;

}


extern void work_a_1407844058_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1407844058_3212880686_p_0,(void *)work_a_1407844058_3212880686_p_1,(void *)work_a_1407844058_3212880686_p_2,(void *)work_a_1407844058_3212880686_p_3,(void *)work_a_1407844058_3212880686_p_4};
	xsi_register_didat("work_a_1407844058_3212880686", "isim/warmup1_tb_isim_beh.exe.sim/work/a_1407844058_3212880686.didat");
	xsi_register_executes(pe);
}
