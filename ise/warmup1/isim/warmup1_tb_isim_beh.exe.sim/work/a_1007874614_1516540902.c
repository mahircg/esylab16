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
static const char *ng0 = "/import/lab/esylab/esylab_01/Desktop/lt16lab/soc/core/programcounter.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1007874614_1516540902_p_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_1242562249) + 2976);
    t5 = (t0 + 9840U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)97, t2, t5, (char)99, (unsigned char)2, (char)101);
    t6 = (31U + 1U);
    t7 = (32U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 6208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t8, 0U, 32U, 0LL);

LAB2:    t13 = (t0 + 6032);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t6, 0);
    goto LAB6;

}

static void work_a_1007874614_1516540902_p_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_1242562249) + 2976);
    t5 = (t0 + 9840U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)97, t2, t5, (char)99, (unsigned char)2, (char)101);
    t6 = (31U + 1U);
    t7 = (32U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 6272);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t8, 0U, 32U, 0LL);

LAB2:    t13 = (t0 + 6048);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t6, 0);
    goto LAB6;

}

static void work_a_1007874614_1516540902_p_2(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB5, &&LAB6};

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (0 + 2U);
    t2 = (t3 + t4);
    t5 = *((unsigned char *)t2);
    t6 = (char *)((nl0) + t5);
    goto **((char **)t6);

LAB4:    xsi_set_current_line(55, ng0);

LAB13:    t2 = (t0 + 6064);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng0);
    t8 = (t0 + 3248U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t7, 1, t10);
    t11 = (31U != 31U);
    if (t11 == 1)
        goto LAB7;

LAB8:    t12 = (t0 + 6336);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 31U);
    xsi_driver_first_trans_fast(t12);
    goto LAB4;

LAB6:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t7, 2, t10);
    t6 = (t7 + 12U);
    t4 = *((unsigned int *)t6);
    t4 = (t4 * 1U);
    t5 = (31U != t4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t8 = (t0 + 6336);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 31U);
    xsi_driver_first_trans_fast(t8);
    goto LAB4;

LAB7:    xsi_size_not_matching(31U, 31U, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(31U, t4, 0);
    goto LAB10;

LAB11:    t3 = (t0 + 6064);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}

static void work_a_1007874614_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    static char *nl0[] = {&&LAB5, &&LAB6, &&LAB7};

LAB0:    t1 = (t0 + 4968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (0 + 0U);
    t2 = (t3 + t4);
    t5 = *((unsigned char *)t2);
    t6 = (char *)((nl0) + t5);
    goto **((char **)t6);

LAB4:    xsi_set_current_line(60, ng0);

LAB10:    t2 = (t0 + 6080);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 6400);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 31U);
    xsi_driver_first_trans_fast(t7);
    goto LAB4;

LAB6:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = (30 - 30);
    t13 = (t4 * -1);
    t14 = (t13 * 1U);
    t15 = (0 + 0U);
    t16 = (t15 + t14);
    t2 = (t3 + t16);
    t6 = (t0 + 6400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 31U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB7:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = (30 - 30);
    t13 = (t4 * -1);
    t14 = (t13 * 1U);
    t15 = (0 + 31U);
    t16 = (t15 + t14);
    t2 = (t3 + t16);
    t6 = (t0 + 6400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 31U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB8:    t3 = (t0 + 6080);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1007874614_1516540902_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = (0 + 0U);
    t2 = (t3 + t4);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (0 + 1U);
    t2 = (t3 + t4);
    t1 = *((unsigned char *)t2);
    t7 = (char *)((nl0) + t1);
    goto **((char **)t7);

LAB2:    xsi_set_current_line(70, ng0);
    t7 = (t0 + 2952U);
    t11 = *((char **)t7);
    t7 = (t0 + 6464);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 31U);
    xsi_driver_first_trans_fast(t7);

LAB3:    t2 = (t0 + 6096);
    *((int *)t2) = 1;

LAB1:    return;
LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 2632U);
    t11 = *((char **)t8);
    t8 = (t0 + 6464);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 31U);
    xsi_driver_first_trans_fast(t8);
    goto LAB8;

LAB10:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6464);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 31U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

}

static void work_a_1007874614_1516540902_p_5(char *t0)
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
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9856U);
    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t4 = (t0 + 9808U);
    t6 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t0 + 6528);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 31U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 6112);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1007874614_1516540902_p_6(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6592);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 31U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 3248U);
    t8 = *((char **)t3);
    t9 = *((int *)t8);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, 0, t9);
    t10 = (31U != 31U);
    if (t10 == 1)
        goto LAB8;

LAB9:    t11 = (t0 + 6592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 31U);
    xsi_driver_first_trans_fast(t11);
    goto LAB6;

LAB8:    xsi_size_not_matching(31U, 31U, 0);
    goto LAB9;

}


extern void work_a_1007874614_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1007874614_1516540902_p_0,(void *)work_a_1007874614_1516540902_p_1,(void *)work_a_1007874614_1516540902_p_2,(void *)work_a_1007874614_1516540902_p_3,(void *)work_a_1007874614_1516540902_p_4,(void *)work_a_1007874614_1516540902_p_5,(void *)work_a_1007874614_1516540902_p_6};
	xsi_register_didat("work_a_1007874614_1516540902", "isim/warmup1_tb_isim_beh.exe.sim/work/a_1007874614_1516540902.didat");
	xsi_register_executes(pe);
}
