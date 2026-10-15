/* Functions from 0x80208924 to 0x802089D4, found by decomp-toolkit. */
#include "common.h"

void fn_80208924(volatile u32 *arg0) {
    extern u8 lbl_802EF934[];
    extern u8 lbl_802EFC40[];
    extern u8 lbl_802EF920[];
    u32 a = (u32)lbl_802EF934;
    u32 b = (u32)lbl_802EFC40;
    u32 c = (u32)lbl_802EF920;
    arg0[0] = a;
    arg0[0] = b;
    arg0[0] = c;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
}

u32 fn_80208964(u32 **arg0, u32 arg1, s32 arg2) {
    u8 var_r6;
    u8 var_r3;
    u32 *temp_r7;
    u32 temp_r8;
    temp_r7 = *arg0;
    if ((temp_r7 != 0) && (temp_r7[2] & 8)) {
        temp_r8 = temp_r7[3];
        var_r6 = 0;
        var_r3 = 0;
        if ((arg1 >= temp_r8) && (arg1 < temp_r8 + temp_r7[4])) var_r3 = 1;
        if ((var_r3 != 0) && ((u32)(arg1 + arg2) <= temp_r8 + temp_r7[4])) var_r6 = 1;
        return var_r6;
    }
    return 0;
}

