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
static const char *ng0 = "/import/lab/esylab/esylab_01/Desktop/lt16lab/soc/mem/memwrapper.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *WORK_P_3778902183;
extern char *WORK_P_3004263874;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1255944720_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(128, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (0 + 0U);
    t1 = (t2 + t3);
    t4 = (t0 + 4784);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_delta(t4, 0U, 32U, 0LL);

LAB2:    t9 = (t0 + 4688);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1255944720_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    unsigned int t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4704);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 4848);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t10 = (0 + 101U);
    t2 = (t5 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t18 = (t0 + 2312U);
    t23 = *((char **)t18);
    t24 = (0 + 66U);
    t18 = (t23 + t24);
    t25 = *((unsigned char *)t18);
    t26 = (t25 == (unsigned char)3);
    if (t26 == 1)
        goto LAB16;

LAB17:    t22 = (unsigned char)0;

LAB18:    t4 = t22;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t10 = (0 + 32U);
    t1 = (t2 + t10);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 32U, 1, 0LL);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(139, ng0);
    t35 = (t0 + 4848);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = (unsigned char)2;
    xsi_driver_first_trans_delta(t35, 32U, 1, 0LL);
    goto LAB8;

LAB10:    t4 = (unsigned char)1;
    goto LAB12;

LAB13:    t6 = (t0 + 2312U);
    t7 = *((char **)t6);
    t13 = (0 + 67U);
    t6 = (t7 + t13);
    t8 = ((WORK_P_3778902183) + 3976);
    t14 = xsi_record_get_element_type(t8, 4);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t6, t16);
    t18 = ((WORK_P_3004263874) + 1288U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t17 <= t20);
    t9 = t21;
    goto LAB15;

LAB16:    t27 = (t0 + 2312U);
    t28 = *((char **)t27);
    t29 = (0 + 32U);
    t27 = (t28 + t29);
    t30 = ((WORK_P_3778902183) + 3976);
    t31 = xsi_record_get_element_type(t30, 1);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t27, t33);
    t35 = ((WORK_P_3004263874) + 1288U);
    t36 = *((char **)t35);
    t37 = *((int *)t36);
    t38 = (t34 <= t37);
    t22 = t38;
    goto LAB18;

}


extern void work_a_1255944720_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1255944720_1516540902_p_0,(void *)work_a_1255944720_1516540902_p_1};
	xsi_register_didat("work_a_1255944720_1516540902", "isim/warmup1_tb_isim_beh.exe.sim/work/a_1255944720_1516540902.didat");
	xsi_register_executes(pe);
}
