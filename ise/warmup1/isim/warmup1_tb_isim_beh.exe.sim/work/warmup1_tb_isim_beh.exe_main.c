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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *WORK_P_3778902183;
char *WORK_P_1507036401;
char *IEEE_P_3972351953;
char *WORK_P_1537780098;
char *WORK_P_3004263874;
char *STD_TEXTIO;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *WORK_P_3700778394;
char *WORK_P_0138167788;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_p_3778902183_init();
    ieee_p_3972351953_init();
    work_p_1537780098_init();
    work_p_3004263874_init();
    work_p_1507036401_init();
    work_p_0138167788_init();
    work_p_3700778394_init();
    work_a_2166523021_1516540902_init();
    work_a_0832606739_1516540902_init();
    work_a_2399776393_1516540902_init();
    work_a_4010499798_1516540902_init();
    work_a_0439375357_1516540902_init();
    work_a_0141136467_1516540902_init();
    work_a_2911737581_1516540902_init();
    work_a_3470203097_1516540902_init();
    work_a_3173248183_1516540902_init();
    work_a_2263464102_1516540902_init();
    work_a_1007874614_1516540902_init();
    work_a_2408988162_1516540902_init();
    work_a_1407844058_3212880686_init();
    work_a_0504670981_1516540902_init();
    work_a_0800541564_1516540902_init();
    work_a_2271919443_1516540902_init();
    std_textio_init();
    work_a_1922882147_1516540902_init();
    work_a_0579625254_3212880686_init();
    work_a_0030369584_1516540902_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_2832130928_0000452272_init();
    work_a_4226555797_3212880686_init();
    work_a_0911930442_3212880686_init();
    work_a_2537233267_3212880686_init();
    work_a_0319004741_2762913819_init();
    work_a_0994777585_1516540902_init();
    work_a_0689837685_3553469787_init();


    xsi_register_tops("work_a_0689837685_3553469787");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_3778902183 = xsi_get_engine_memory("work_p_3778902183");
    WORK_P_1507036401 = xsi_get_engine_memory("work_p_1507036401");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    WORK_P_1537780098 = xsi_get_engine_memory("work_p_1537780098");
    WORK_P_3004263874 = xsi_get_engine_memory("work_p_3004263874");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_3700778394 = xsi_get_engine_memory("work_p_3700778394");
    WORK_P_0138167788 = xsi_get_engine_memory("work_p_0138167788");

    return xsi_run_simulation(argc, argv);

}
