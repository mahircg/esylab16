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
static const char *ng0 = "C:/Users/Mahircan/Ders/embedded_systems_lab/lt16lab/soc/core/decoder_32bit.vhd";
extern char *WORK_P_1507036401;

char *work_p_1507036401_sub_1068650375_3868518172(char *);
char *work_p_1507036401_sub_1068651497_3868518172(char *);
char *work_p_1507036401_sub_1068652619_3868518172(char *);


static void work_a_3470203097_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = work_p_1507036401_sub_1068650375_3868518172(WORK_P_1507036401);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3470203097_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(24, ng0);

LAB3:    t1 = work_p_1507036401_sub_1068651497_3868518172(WORK_P_1507036401);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 16U);
    xsi_driver_first_trans_delta(t2, 9U, 16U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3470203097_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(25, ng0);

LAB3:    t1 = work_p_1507036401_sub_1068652619_3868518172(WORK_P_1507036401);
    t2 = (t0 + 3608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 16U);
    xsi_driver_first_trans_delta(t2, 25U, 13U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3470203097_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (t0 + 3672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 38U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3470203097_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3470203097_1516540902_p_0,(void *)work_a_3470203097_1516540902_p_1,(void *)work_a_3470203097_1516540902_p_2,(void *)work_a_3470203097_1516540902_p_3};
	xsi_register_didat("work_a_3470203097_1516540902", "isim/warmup1_tb_isim_beh.exe.sim/work/a_3470203097_1516540902.didat");
	xsi_register_executes(pe);
}
