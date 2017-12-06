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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/s/c/scbhatia/Desktop/KitchenTimer/Clock_Sub.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {50U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {6U, 0U};



static void Always_47_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5488);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 8, t7, 32);
    t9 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 8, 0LL);
    goto LAB2;

}

static void Always_52_1(char *t0)
{
    char t13[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5504);
    *((int *)t2) = 1;
    t3 = (t0 + 5200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 4000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB22:    xsi_set_current_line(57, ng0);
    t9 = (t0 + 3200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB26;

LAB23:    if (t25 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t13) = 1;

LAB26:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB21;

LAB9:    xsi_set_current_line(62, ng0);

LAB30:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB32;

LAB31:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB33;

LAB34:    t12 = (t13 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(69, ng0);

LAB40:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB38:    goto LAB21;

LAB11:    xsi_set_current_line(75, ng0);

LAB41:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 3520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB43;

LAB42:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB44;

LAB45:    t12 = (t13 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(83, ng0);

LAB51:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB49:    goto LAB21;

LAB13:    xsi_set_current_line(89, ng0);

LAB52:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB54;

LAB53:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB55;

LAB56:    t12 = (t13 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(98, ng0);

LAB62:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB60:    goto LAB21;

LAB15:    xsi_set_current_line(104, ng0);

LAB63:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 3840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB65;

LAB64:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB66;

LAB67:    t12 = (t13 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(112, ng0);

LAB73:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB71:    goto LAB21;

LAB17:    xsi_set_current_line(118, ng0);

LAB74:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(125, ng0);

LAB75:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB21;

LAB25:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(58, ng0);
    t35 = ((char*)((ng4)));
    t36 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 3, 0LL);
    goto LAB29;

LAB32:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(64, ng0);

LAB39:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 3360);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 8, t29, 32);
    t35 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t35, t37, 0, 0, 8, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB38;

LAB43:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(77, ng0);

LAB50:    xsi_set_current_line(78, ng0);
    t14 = (t0 + 3520);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 8, t29, 32);
    t35 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t35, t37, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB49;

LAB54:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB58:    xsi_set_current_line(91, ng0);

LAB61:    xsi_set_current_line(92, ng0);
    t14 = (t0 + 3680);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 8, t29, 32);
    t35 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t35, t37, 0, 0, 8, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB60;

LAB65:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t13) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(106, ng0);

LAB72:    xsi_set_current_line(107, ng0);
    t14 = (t0 + 3840);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 8, t29, 32);
    t35 = (t0 + 3840);
    xsi_vlogvar_wait_assign_value(t35, t37, 0, 0, 8, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB71;

LAB76:    xsi_set_current_line(127, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 3, 0LL);
    goto LAB78;

}


extern void work_m_00000000001793094249_3722721555_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000001793094249_3722721555", "isim/Clock_Test_isim_beh.exe.sim/work/m_00000000001793094249_3722721555.didat");
	xsi_register_executes(pe);
}
