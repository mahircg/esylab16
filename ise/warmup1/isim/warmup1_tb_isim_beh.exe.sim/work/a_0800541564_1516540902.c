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
extern char *IEEE_P_1242562249;
static const char *ng1 = "/import/lab/esylab/esylab_01/Desktop/lt16lab/soc/core/irq_controller.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_3778902183;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434220770698190313_1035706684(char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


char *work_a_0800541564_1516540902_sub_5543936144753238915_2134189630(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t11[16];
    char t16[8];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 3;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 3);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((IEEE_P_1242562249) + 2976);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, t11);
    t18 = (t12 + 64U);
    *((char **)t18) = t11;
    t19 = (t12 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t5 + 4U);
    t21 = (t3 != 0);
    if (t21 == 1)
        goto LAB3;

LAB2:    t22 = (t5 + 12U);
    *((char **)t22) = t6;
    t23 = (t6 + 0U);
    t24 = *((int *)t23);
    t25 = (t11 + 0U);
    t26 = *((int *)t25);
    t10 = (t26 - t24);
    t27 = (t11 + 8U);
    t28 = *((int *)t27);
    t29 = (t10 * t28);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t32 = (t3 + t31);
    t33 = (t12 + 56U);
    t34 = *((char **)t33);
    t33 = (t34 + 0);
    t35 = (t11 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (1U * t36);
    memcpy(t33, t32, t37);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t7 = (t11 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t8, t10);
    t14 = (t11 + 0U);
    t9 = *((int *)t14);
    t15 = (t11 + 4U);
    t13 = *((int *)t15);
    t17 = (t11 + 8U);
    t24 = *((int *)t17);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t9;
    t19 = (t18 + 4U);
    *((int *)t19) = t13;
    t19 = (t18 + 8U);
    *((int *)t19) = t24;
    t26 = (t13 - t9);
    t29 = (t26 * t24);
    t29 = (t29 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t29;

LAB1:    return t0;
LAB3:    *((char **)t20) = t3;
    goto LAB2;

LAB4:;
}

static void work_a_0800541564_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(54, ng1);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5704);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB2:    t8 = (t0 + 5544);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0800541564_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(55, ng1);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 0U, 4U, 0LL);

LAB2:    t7 = (t0 + 5560);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0800541564_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(56, ng1);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5832);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 9U, 1, 0LL);

LAB2:    t8 = (t0 + 5576);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0800541564_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(57, ng1);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5896);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 4U, 4U, 0LL);

LAB2:    t7 = (t0 + 5592);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0800541564_1516540902_p_4(char *t0)
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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    xsi_set_current_line(63, ng1);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5608);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng1);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(69, ng1);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 2768U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 16U);
    xsi_set_current_line(72, ng1);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(77, ng1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t13 = (0 + 5U);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(82, ng1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t4 = t1;
    if (-1 == -1)
        goto LAB20;

LAB21:    t13 = 0;

LAB22:    t16 = (t13 - 15);
    t18 = (t16 * -1);
    t19 = (1U * t18);
    t7 = (t4 + t19);
    t20 = (1U * 16U);
    memset(t7, (unsigned char)2, t20);
    t2 = 1;
    if (16U == 16U)
        goto LAB23;

LAB24:    t2 = 0;

LAB25:    if ((!(t2)) != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(87, ng1);
    t1 = (t0 + 2768U);
    t3 = *((char **)t1);
    t1 = (t0 + 5960);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(66, ng1);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t7 = t3;
    memset(t7, (unsigned char)2, 16U);
    t8 = (t0 + 5960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(73, ng1);
    t7 = (t0 + 2768U);
    t8 = *((char **)t7);
    t7 = (t0 + 1832U);
    t9 = *((char **)t7);
    t7 = (t0 + 9280U);
    t16 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t9, t7);
    t17 = (t16 - 15);
    t18 = (t17 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t16);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t10 = (t8 + t20);
    *((unsigned char *)t10) = (unsigned char)2;
    goto LAB9;

LAB11:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t13 = (0 + 0U);
    t1 = (t4 + t13);
    t14 = *((unsigned char *)t1);
    t15 = (t14 == (unsigned char)3);
    t2 = t15;
    goto LAB13;

LAB14:    xsi_set_current_line(78, ng1);
    t4 = (t0 + 2768U);
    t7 = *((char **)t4);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t18 = (0 + 1U);
    t4 = (t8 + t18);
    t9 = ((WORK_P_3778902183) + 4536);
    t10 = xsi_record_get_element_type(t9, 1);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t16 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t12);
    t17 = (t16 - 15);
    t19 = (t17 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t16);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t22 = (t7 + t21);
    *((unsigned char *)t22) = (unsigned char)3;
    goto LAB15;

LAB17:    xsi_set_current_line(83, ng1);
    t10 = (t0 + 2768U);
    t11 = *((char **)t10);
    t10 = (t0 + 9328U);
    t12 = (t0 + 1672U);
    t22 = *((char **)t12);
    t12 = (t0 + 9264U);
    t24 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t23, t11, t10, t22, t12);
    t25 = (t0 + 2768U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t23 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (1U * t28);
    memcpy(t25, t24, t29);
    goto LAB18;

LAB20:    t13 = 15;
    goto LAB22;

LAB23:    t21 = 0;

LAB26:    if (t21 < 16U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t8 = (t3 + t21);
    t9 = (t1 + t21);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB24;

LAB28:    t21 = (t21 + 1);
    goto LAB26;

}

static void work_a_0800541564_1516540902_p_5(char *t0)
{
    char t32[16];
    char t39[16];
    char t41[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned char t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    int t40;
    int t42;

LAB0:    xsi_set_current_line(100, ng1);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(128, ng1);
    t2 = ((WORK_P_3778902183) + 1288U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 1, t10);
    t1 = (4U != 4U);
    if (t1 == 1)
        goto LAB43;

LAB44:    t7 = (t0 + 6024);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(129, ng1);
    t2 = ((WORK_P_3778902183) + 1408U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 2, t10);
    t7 = (t32 + 12U);
    t9 = *((unsigned int *)t7);
    t9 = (t9 * 1U);
    t1 = (4U != t9);
    if (t1 == 1)
        goto LAB45;

LAB46:    t8 = (t0 + 6088);
    t13 = (t8 + 56U);
    t17 = *((char **)t13);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(130, ng1);
    t2 = (t0 + 6152);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng1);
    t2 = (t0 + 6216);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB3:    t2 = (t0 + 5624);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(104, ng1);
    t33 = ((WORK_P_3778902183) + 1408U);
    t34 = *((char **)t33);
    t35 = *((int *)t34);
    t33 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 0, t35);
    t36 = (t0 + 2888U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    memcpy(t36, t33, 4U);
    xsi_set_current_line(105, ng1);
    t2 = ((WORK_P_3778902183) + 1288U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 0, t10);
    t7 = (t0 + 3008U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t13 = (t32 + 12U);
    t9 = *((unsigned int *)t13);
    t9 = (t9 * 1U);
    memcpy(t7, t2, t9);
    xsi_set_current_line(108, ng1);
    t2 = (t0 + 9466);
    *((int *)t2) = 15;
    t3 = (t0 + 9470);
    *((int *)t3) = 0;
    t10 = 15;
    t23 = 0;

LAB29:    if (t10 >= t23)
        goto LAB30;

LAB32:    xsi_set_current_line(116, ng1);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t2 = (t0 + 6024);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng1);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t0 + 6088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng1);
    t2 = (t0 + 6152);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng1);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t2 = (t0 + 9360U);
    t7 = ((WORK_P_3778902183) + 1288U);
    t8 = *((char **)t7);
    t10 = *((int *)t8);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 2, t10);
    t1 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t2, t7, t32);
    if (t1 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(124, ng1);
    t2 = (t0 + 6216);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB41:    goto LAB3;

LAB5:    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t8 = t2;
    if (-1 == -1)
        goto LAB11;

LAB12:    t9 = 0;

LAB13:    t10 = (t9 - 15);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (t8 + t12);
    t14 = (1U * 16U);
    memset(t13, (unsigned char)2, t14);
    t15 = 1;
    if (16U == 16U)
        goto LAB14;

LAB15:    t15 = 0;

LAB16:    if ((!(t15)) == 1)
        goto LAB8;

LAB9:    t6 = (unsigned char)0;

LAB10:    t1 = t6;
    goto LAB7;

LAB8:    t19 = (t0 + 2472U);
    t20 = *((char **)t19);
    t19 = xsi_get_transient_memory(16U);
    memset(t19, 0, 16U);
    t21 = t19;
    if (-1 == -1)
        goto LAB20;

LAB21:    t22 = 0;

LAB22:    t23 = (t22 - 15);
    t24 = (t23 * -1);
    t25 = (1U * t24);
    t26 = (t21 + t25);
    t27 = (1U * 16U);
    memset(t26, (unsigned char)0, t27);
    t28 = 1;
    if (16U == 16U)
        goto LAB23;

LAB24:    t28 = 0;

LAB25:    t6 = (!(t28));
    goto LAB10;

LAB11:    t9 = 15;
    goto LAB13;

LAB14:    t16 = 0;

LAB17:    if (t16 < 16U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t17 = (t7 + t16);
    t18 = (t2 + t16);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB15;

LAB19:    t16 = (t16 + 1);
    goto LAB17;

LAB20:    t22 = 15;
    goto LAB22;

LAB23:    t29 = 0;

LAB26:    if (t29 < 16U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t30 = (t20 + t29);
    t31 = (t19 + t29);
    if (*((unsigned char *)t30) != *((unsigned char *)t31))
        goto LAB24;

LAB28:    t29 = (t29 + 1);
    goto LAB26;

LAB30:    xsi_set_current_line(109, ng1);
    t7 = (t0 + 2472U);
    t8 = *((char **)t7);
    t7 = (t0 + 9466);
    t35 = *((int *)t7);
    t38 = (t35 - 15);
    t9 = (t38 * -1);
    t11 = (1U * t9);
    t12 = (0 + t11);
    t13 = (t8 + t12);
    t4 = *((unsigned char *)t13);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB36;

LAB37:    t1 = (unsigned char)0;

LAB38:    if (t1 != 0)
        goto LAB33;

LAB35:
LAB34:
LAB31:    t2 = (t0 + 9466);
    t10 = *((int *)t2);
    t3 = (t0 + 9470);
    t23 = *((int *)t3);
    if (t10 == t23)
        goto LAB32;

LAB39:    t35 = (t10 + -1);
    t10 = t35;
    t7 = (t0 + 9466);
    *((int *)t7) = t10;
    goto LAB29;

LAB33:    xsi_set_current_line(110, ng1);
    t30 = (t0 + 9466);
    t31 = ((WORK_P_3778902183) + 1288U);
    t33 = *((char **)t31);
    t42 = *((int *)t33);
    t31 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t41, *((int *)t30), t42);
    t34 = (t0 + 3008U);
    t36 = *((char **)t34);
    t34 = (t36 + 0);
    t37 = (t41 + 12U);
    t14 = *((unsigned int *)t37);
    t14 = (t14 * 1U);
    memcpy(t34, t31, t14);
    xsi_set_current_line(111, ng1);
    t2 = (t0 + 9466);
    t3 = ((WORK_P_3778902183) + 1288U);
    t7 = *((char **)t3);
    t35 = *((int *)t7);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t39, *((int *)t2), t35);
    t8 = work_a_0800541564_1516540902_sub_5543936144753238915_2134189630(t0, t32, t3);
    t13 = (t0 + 2888U);
    t17 = *((char **)t13);
    t13 = (t17 + 0);
    t18 = (t32 + 12U);
    t9 = *((unsigned int *)t18);
    t9 = (t9 * 1U);
    memcpy(t13, t8, t9);
    goto LAB34;

LAB36:    t17 = (t0 + 9466);
    t18 = ((WORK_P_3778902183) + 1288U);
    t19 = *((char **)t18);
    t40 = *((int *)t19);
    t18 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t39, *((int *)t17), t40);
    t20 = work_a_0800541564_1516540902_sub_5543936144753238915_2134189630(t0, t32, t18);
    t21 = (t0 + 2888U);
    t26 = *((char **)t21);
    t21 = (t0 + 9344U);
    t6 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t20, t32, t26, t21);
    t1 = t6;
    goto LAB38;

LAB40:    xsi_set_current_line(122, ng1);
    t13 = (t0 + 6216);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB41;

LAB43:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(4U, t9, 0);
    goto LAB46;

}


extern void work_a_0800541564_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0800541564_1516540902_p_0,(void *)work_a_0800541564_1516540902_p_1,(void *)work_a_0800541564_1516540902_p_2,(void *)work_a_0800541564_1516540902_p_3,(void *)work_a_0800541564_1516540902_p_4,(void *)work_a_0800541564_1516540902_p_5};
	static char *se[] = {(void *)work_a_0800541564_1516540902_sub_5543936144753238915_2134189630};
	xsi_register_didat("work_a_0800541564_1516540902", "isim/warmup1_tb_isim_beh.exe.sim/work/a_0800541564_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
