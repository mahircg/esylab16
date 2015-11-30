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
static const char *ng0 = "C:/Users/Mahircan/Ders/embedded_systems_lab/lt16lab/soc/peripheral/LCDController.vhd";
extern char *WORK_P_1537780098;
extern char *IEEE_P_2592010699;

char *work_p_1537780098_sub_3096033564_3209126847(char *, char *, int , int );
char *work_p_1537780098_sub_4222136751_3209126847(char *, char *, char *, char *);


static void work_a_0319004741_2762913819_p_0(char *t0)
{
    char t19[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6176);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t15 = (0 + 67U);
    t2 = (t4 + t15);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6352);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 6352);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(41, ng0);
    t2 = xsi_get_transient_memory(11U);
    memset(t2, 0, 11U);
    t4 = t2;
    memset(t4, (unsigned char)2, 11U);
    t5 = (t0 + 6416);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 11U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 1992U);
    t12 = *((char **)t11);
    t17 = (0 + 62U);
    t11 = (t12 + t17);
    t10 = *((unsigned char *)t11);
    t18 = (t10 == (unsigned char)3);
    if (t18 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6352);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB21:    goto LAB12;

LAB14:    t5 = (t0 + 1992U);
    t8 = *((char **)t5);
    t16 = (0 + 68U);
    t5 = (t8 + t16);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB16;

LAB17:    xsi_set_current_line(46, ng0);
    t13 = (t0 + 1992U);
    t14 = *((char **)t13);
    t20 = (0 + 63U);
    t13 = (t14 + t20);
    t21 = (t0 + 1992U);
    t22 = *((char **)t21);
    t23 = (0 + 30U);
    t21 = (t22 + t23);
    t24 = work_p_1537780098_sub_4222136751_3209126847(WORK_P_1537780098, t19, t13, t21);
    t25 = (t19 + 0U);
    t26 = *((int *)t25);
    t27 = (t26 - 10);
    t28 = (t27 * 1U);
    t29 = (0 + t28);
    t30 = (t24 + t29);
    t31 = (t0 + 6416);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t30, 11U);
    xsi_driver_first_trans_fast(t31);
    goto LAB18;

LAB20:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6352);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

}

static void work_a_0319004741_2762913819_p_1(char *t0)
{
    char t38[16];
    char t40[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (2 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + 0U);
    t7 = (t6 + t5);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 1992U);
    t18 = *((char **)t17);
    t19 = (2 - 31);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + 0U);
    t23 = (t22 + t21);
    t17 = (t18 + t23);
    t24 = *((unsigned char *)t17);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB7;

LAB8:    t16 = (unsigned char)0;

LAB9:    if (t16 != 0)
        goto LAB5;

LAB6:
LAB12:    t51 = xsi_get_transient_memory(11U);
    memset(t51, 0, 11U);
    t52 = t51;
    memset(t52, (unsigned char)2, 11U);
    t53 = (t0 + 6480);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t57, t51, 11U);
    xsi_driver_first_trans_delta(t53, 21U, 11U, 0LL);

LAB2:    t58 = (t0 + 6192);
    *((int *)t58) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 2312U);
    t11 = *((char **)t10);
    t10 = (t0 + 6480);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 11U);
    xsi_driver_first_trans_delta(t10, 21U, 11U, 0LL);
    goto LAB2;

LAB5:    t34 = (t0 + 10552);
    t36 = (t0 + 1352U);
    t37 = *((char **)t36);
    t39 = ((IEEE_P_2592010699) + 4024);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 0;
    t42 = (t41 + 4U);
    *((int *)t42) = 2;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (2 - 0);
    t44 = (t43 * 1);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    t42 = (t0 + 10404U);
    t36 = xsi_base_array_concat(t36, t38, t39, (char)97, t34, t40, (char)97, t37, t42, (char)101);
    t44 = (3U + 8U);
    t45 = (11U != t44);
    if (t45 == 1)
        goto LAB10;

LAB11:    t46 = (t0 + 6480);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t36, 11U);
    xsi_driver_first_trans_delta(t46, 21U, 11U, 0LL);
    goto LAB2;

LAB7:    t26 = (t0 + 2312U);
    t27 = *((char **)t26);
    t28 = (8 - 10);
    t29 = (t28 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t26 = (t27 + t31);
    t32 = *((unsigned char *)t26);
    t33 = (t32 == (unsigned char)3);
    t16 = t33;
    goto LAB9;

LAB10:    xsi_size_not_matching(11U, t44, 0);
    goto LAB11;

LAB13:    goto LAB2;

}

static void work_a_0319004741_2762913819_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = xsi_get_transient_memory(21U);
    memset(t1, 0, 21U);
    t2 = t1;
    memset(t2, (unsigned char)2, 21U);
    t3 = (t0 + 6544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 21U);
    xsi_driver_first_trans_delta(t3, 0U, 21U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0319004741_2762913819_p_3(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t2 = work_p_1537780098_sub_3096033564_3209126847(WORK_P_1537780098, t1, 983048, 4194300);
    t3 = (64U != 64U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 6608);
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

static void work_a_0319004741_2762913819_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 32U, 1, 0LL);

LAB2:    t8 = (t0 + 6208);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0319004741_2762913819_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (10 - 10);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6736);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6224);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0319004741_2762913819_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (9 - 10);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6800);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6240);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0319004741_2762913819_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (8 - 10);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6864);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6256);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0319004741_2762913819_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (8 - 10);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = (t0 + 10555);
    t21 = (t0 + 6928);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 8U);
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 6272);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t11 = (10 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 6928);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_0319004741_2762913819_init()
{
	static char *pe[] = {(void *)work_a_0319004741_2762913819_p_0,(void *)work_a_0319004741_2762913819_p_1,(void *)work_a_0319004741_2762913819_p_2,(void *)work_a_0319004741_2762913819_p_3,(void *)work_a_0319004741_2762913819_p_4,(void *)work_a_0319004741_2762913819_p_5,(void *)work_a_0319004741_2762913819_p_6,(void *)work_a_0319004741_2762913819_p_7,(void *)work_a_0319004741_2762913819_p_8};
	xsi_register_didat("work_a_0319004741_2762913819", "isim/warmup1_tb_isim_beh.exe.sim/work/a_0319004741_2762913819.didat");
	xsi_register_executes(pe);
}
