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
static const char *ng0 = "C:/developer/svn_projects/hound/SW/cpld/HoundCPLD/bootloader.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {3, 0};



static void Cont_72_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8576);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_74_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8592);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_75_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8608);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_77_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8624);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_79_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8640);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_82_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 8656);
    *((int *)t2) = 1;
    t3 = (t0 + 7544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 4072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4232);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB2;

}

static void Always_88_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8672);
    *((int *)t2) = 1;
    t3 = (t0 + 7792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_94_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8688);
    *((int *)t2) = 1;
    t3 = (t0 + 8040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_100_8(char *t0)
{
    char t6[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;

LAB0:    t1 = (t0 + 8256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8704);
    *((int *)t2) = 1;
    t3 = (t0 + 8288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 4072);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(102, ng0);

LAB13:    xsi_set_current_line(103, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4072);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(106, ng0);

LAB21:    xsi_set_current_line(108, ng0);
    t28 = (t0 + 4872);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB25;

LAB22:    if (t44 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t32) = 1;

LAB25:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t7, 32, t5, 32);
    memset(t32, 0, 8);
    t8 = (t4 + 4);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t32) = 1;

LAB41:    t28 = (t32 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB36:
LAB28:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t5) == 0)
        goto LAB46;

LAB48:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB49:    t8 = (t0 + 3912);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 11, t5, 32);
    t7 = (t0 + 4712);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 11);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 4872);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t6) = 1;

LAB53:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(127, ng0);

LAB58:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB56:    goto LAB20;

LAB24:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(108, ng0);

LAB29:    xsi_set_current_line(109, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 4392);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t0 + 2512U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 5032);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t21, 3, 2);
    t22 = (t0 + 4552);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 3, t5, 32);
    t7 = (t0 + 5032);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB28;

LAB32:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(112, ng0);

LAB37:    xsi_set_current_line(113, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4392);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB36;

LAB40:    t22 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(114, ng0);

LAB45:    xsi_set_current_line(115, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 4392);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB44;

LAB46:    *((unsigned int *)t6) = 1;
    goto LAB49;

LAB52:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(122, ng0);

LAB57:    xsi_set_current_line(123, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3912);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB56;

LAB61:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(133, ng0);

LAB66:    goto LAB65;

}


extern void work_m_00000000002370364494_1586962187_init()
{
	static char *pe[] = {(void *)Cont_72_0,(void *)Cont_74_1,(void *)Cont_75_2,(void *)Cont_77_3,(void *)Cont_79_4,(void *)Always_82_5,(void *)Always_88_6,(void *)Always_94_7,(void *)Always_100_8};
	xsi_register_didat("work_m_00000000002370364494_1586962187", "isim/sim_isim_beh.exe.sim/work/m_00000000002370364494_1586962187.didat");
	xsi_register_executes(pe);
}
