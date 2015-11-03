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
static const char *ng0 = "/import/lab/esylab/esylab_01/Desktop/lt16lab/soc/core/decoder_pre.vhd";
extern char *WORK_P_1507036401;
extern char *IEEE_P_2592010699;



static void work_a_0439375357_1516540902_p_0(char *t0)
{
    char t25[16];
    char t26[16];
    char t28[16];
    char t29[16];
    char t33[16];
    char t35[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned char t6;
    unsigned char t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t27;
    int t30;
    char *t32;
    char *t34;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    static char *nl0[] = {&&LAB8, &&LAB8, &&LAB6, &&LAB7, &&LAB8, &&LAB8, &&LAB8, &&LAB8, &&LAB8};

LAB0:    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 1488U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 32U);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (0 + 32U);
    t1 = (t2 + t5);
    t6 = *((unsigned char *)t1);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(94, ng0);
    t1 = ((WORK_P_1507036401) + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 1488U);
    t3 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t1 = (t3 + t13);
    memcpy(t1, t2, 16U);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)6;

LAB3:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t1 = (t0 + 3104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_delta(t1, 0U, 32U, 0LL);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 3104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t6;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);
    t1 = (t0 + 3024);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t8 = (0 + 33U);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (char *)((nl0) + t9);
    goto **((char **)t10);

LAB5:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)0);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)1;

LAB21:    goto LAB3;

LAB6:    xsi_set_current_line(39, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = (31 - 31);
    t14 = (t13 * 1U);
    t15 = (0 + 0U);
    t16 = (t15 + t14);
    t11 = (t12 + t16);
    t17 = (t0 + 5202);
    t19 = 1;
    if (4U == 4U)
        goto LAB12;

LAB13:    t19 = 0;

LAB14:    if (t19 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (31 - 31);
    t8 = (t5 * 1U);
    t13 = (0 + 0U);
    t14 = (t13 + t8);
    t1 = (t2 + t14);
    t3 = (t0 + 1488U);
    t4 = *((char **)t3);
    t15 = (31 - 15);
    t16 = (t15 * 1U);
    t20 = (0 + t16);
    t3 = (t4 + t20);
    memcpy(t3, t1, 16U);

LAB10:    goto LAB5;

LAB7:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + 0U);
    t14 = (t13 + t8);
    t1 = (t2 + t14);
    t3 = (t0 + 1488U);
    t4 = *((char **)t3);
    t15 = (31 - 15);
    t16 = (t15 * 1U);
    t20 = (0 + t16);
    t3 = (t4 + t20);
    memcpy(t3, t1, 16U);
    goto LAB5;

LAB8:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(55, ng0);
    t1 = ((WORK_P_1507036401) + 2608U);
    t2 = *((char **)t1);
    t1 = (t0 + 5206);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = ((WORK_P_1507036401) + 21896U);
    t12 = (t26 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 0;
    t17 = (t12 + 4U);
    *((int *)t17) = 3;
    t17 = (t12 + 8U);
    *((int *)t17) = 1;
    t27 = (3 - 0);
    t5 = (t27 * 1);
    t5 = (t5 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t5;
    t4 = xsi_base_array_concat(t4, t25, t10, (char)97, t2, t11, (char)97, t1, t26, (char)101);
    t17 = (t0 + 5210);
    t22 = ((IEEE_P_2592010699) + 4000);
    t23 = (t29 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 3;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t30 = (3 - 0);
    t5 = (t30 * 1);
    t5 = (t5 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t5;
    t21 = xsi_base_array_concat(t21, t28, t22, (char)97, t4, t25, (char)97, t17, t29, (char)101);
    t24 = (t0 + 5214);
    t34 = ((IEEE_P_2592010699) + 4000);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 3;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (3 - 0);
    t5 = (t38 * 1);
    t5 = (t5 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t5;
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t21, t28, (char)97, t24, t35, (char)101);
    t37 = (t0 + 1488U);
    t39 = *((char **)t37);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t37 = (t39 + t13);
    t14 = (4U + 4U);
    t15 = (t14 + 4U);
    t16 = (t15 + 4U);
    memcpy(t37, t32, t16);
    xsi_set_current_line(56, ng0);
    if ((unsigned char)0 == 0)
        goto LAB18;

LAB19:    goto LAB5;

LAB9:    xsi_set_current_line(41, ng0);
    t23 = (t0 + 1608U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    *((unsigned char *)t23) = (unsigned char)1;
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (31 - 31);
    t8 = (t5 * 1U);
    t13 = (0 + 0U);
    t14 = (t13 + t8);
    t1 = (t2 + t14);
    t3 = (t0 + 1488U);
    t4 = *((char **)t3);
    t15 = (31 - 31);
    t16 = (t15 * 1U);
    t20 = (0 + t16);
    t3 = (t4 + t20);
    memcpy(t3, t1, 32U);
    goto LAB10;

LAB12:    t20 = 0;

LAB15:    if (t20 < 4U)
        goto LAB16;
    else
        goto LAB14;

LAB16:    t21 = (t11 + t20);
    t22 = (t17 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB13;

LAB17:    t20 = (t20 + 1);
    goto LAB15;

LAB18:    t1 = (t0 + 5218);
    xsi_report(t1, 49U, (unsigned char)1);
    goto LAB19;

LAB20:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1488U);
    t3 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t1 = (t3 + t13);
    t4 = ((WORK_P_1507036401) + 3688U);
    t10 = *((char **)t4);
    t4 = ((WORK_P_1507036401) + 5488U);
    t11 = *((char **)t4);
    t12 = ((IEEE_P_2592010699) + 4000);
    t17 = ((WORK_P_1507036401) + 22040U);
    t18 = ((WORK_P_1507036401) + 22280U);
    t4 = xsi_base_array_concat(t4, t25, t12, (char)97, t10, t17, (char)97, t11, t18, (char)101);
    t14 = (4U + 2U);
    t9 = 1;
    if (6U == t14)
        goto LAB26;

LAB27:    t9 = 0;

LAB28:    if (t9 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t1 = (t2 + t13);
    t3 = ((WORK_P_1507036401) + 3688U);
    t4 = *((char **)t3);
    t3 = ((WORK_P_1507036401) + 5608U);
    t10 = *((char **)t3);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = ((WORK_P_1507036401) + 22040U);
    t17 = ((WORK_P_1507036401) + 22296U);
    t3 = xsi_base_array_concat(t3, t25, t11, (char)97, t4, t12, (char)97, t10, t17, (char)101);
    t14 = (4U + 2U);
    t6 = 1;
    if (6U == t14)
        goto LAB34;

LAB35:    t6 = 0;

LAB36:    if (t6 != 0)
        goto LAB32;

LAB33:    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t1 = (t2 + t13);
    t3 = ((WORK_P_1507036401) + 3688U);
    t4 = *((char **)t3);
    t3 = ((WORK_P_1507036401) + 5128U);
    t10 = *((char **)t3);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = ((WORK_P_1507036401) + 22040U);
    t17 = ((WORK_P_1507036401) + 22232U);
    t3 = xsi_base_array_concat(t3, t25, t11, (char)97, t4, t12, (char)97, t10, t17, (char)101);
    t14 = (4U + 3U);
    t6 = 1;
    if (7U == t14)
        goto LAB42;

LAB43:    t6 = 0;

LAB44:    if (t6 != 0)
        goto LAB40;

LAB41:    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t1 = (t2 + t13);
    t3 = ((WORK_P_1507036401) + 3688U);
    t4 = *((char **)t3);
    t3 = ((WORK_P_1507036401) + 5368U);
    t10 = *((char **)t3);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = ((WORK_P_1507036401) + 22040U);
    t17 = ((WORK_P_1507036401) + 22264U);
    t3 = xsi_base_array_concat(t3, t25, t11, (char)97, t4, t12, (char)97, t10, t17, (char)101);
    t14 = (4U + 2U);
    t6 = 1;
    if (6U == t14)
        goto LAB50;

LAB51:    t6 = 0;

LAB52:    if (t6 != 0)
        goto LAB48;

LAB49:    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t5 = (31 - 15);
    t8 = (t5 * 1U);
    t13 = (0 + t8);
    t1 = (t2 + t13);
    t3 = ((WORK_P_1507036401) + 3688U);
    t4 = *((char **)t3);
    t3 = ((WORK_P_1507036401) + 5248U);
    t10 = *((char **)t3);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = ((WORK_P_1507036401) + 22040U);
    t17 = ((WORK_P_1507036401) + 22248U);
    t3 = xsi_base_array_concat(t3, t25, t11, (char)97, t4, t12, (char)97, t10, t17, (char)101);
    t14 = (4U + 2U);
    t6 = 1;
    if (6U == t14)
        goto LAB58;

LAB59:    t6 = 0;

LAB60:    if (t6 != 0)
        goto LAB56;

LAB57:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;

LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(65, ng0);
    t23 = (t0 + 1728U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    *((unsigned char *)t23) = (unsigned char)2;
    goto LAB24;

LAB26:    t15 = 0;

LAB29:    if (t15 < 6U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t21 = (t1 + t15);
    t22 = (t4 + t15);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB27;

LAB31:    t15 = (t15 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(69, ng0);
    t22 = (t0 + 1728U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = (unsigned char)3;
    goto LAB24;

LAB34:    t15 = 0;

LAB37:    if (t15 < 6U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t18 = (t1 + t15);
    t21 = (t3 + t15);
    if (*((unsigned char *)t18) != *((unsigned char *)t21))
        goto LAB35;

LAB39:    t15 = (t15 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(73, ng0);
    t22 = (t0 + 1728U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = (unsigned char)5;
    goto LAB24;

LAB42:    t15 = 0;

LAB45:    if (t15 < 7U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t18 = (t1 + t15);
    t21 = (t3 + t15);
    if (*((unsigned char *)t18) != *((unsigned char *)t21))
        goto LAB43;

LAB47:    t15 = (t15 + 1);
    goto LAB45;

LAB48:    xsi_set_current_line(77, ng0);
    t22 = (t0 + 1728U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = (unsigned char)4;
    goto LAB24;

LAB50:    t15 = 0;

LAB53:    if (t15 < 6U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t18 = (t1 + t15);
    t21 = (t3 + t15);
    if (*((unsigned char *)t18) != *((unsigned char *)t21))
        goto LAB51;

LAB55:    t15 = (t15 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(81, ng0);
    t22 = (t0 + 1728U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = (unsigned char)4;
    goto LAB24;

LAB58:    t15 = 0;

LAB61:    if (t15 < 6U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t18 = (t1 + t15);
    t21 = (t3 + t15);
    if (*((unsigned char *)t18) != *((unsigned char *)t21))
        goto LAB59;

LAB63:    t15 = (t15 + 1);
    goto LAB61;

}


extern void work_a_0439375357_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0439375357_1516540902_p_0};
	xsi_register_didat("work_a_0439375357_1516540902", "isim/warmup1_tb_isim_beh.exe.sim/work/a_0439375357_1516540902.didat");
	xsi_register_executes(pe);
}
