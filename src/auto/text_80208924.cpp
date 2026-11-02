/* Functions from 0x80208924 to 0x802089D4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

#pragma scheduling off
#pragma scheduling reset
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

extern u8 lbl_802EF934[]; // keep
extern u8 lbl_802EFC40[]; // keep
extern u8 lbl_802EF920[]; // keep
struct B80208924_0 { void *vt; B80208924_0() { vt = lbl_802EF934; } ~B80208924_0(); };
struct B80208924_1 : B80208924_0 { B80208924_1() { vt = lbl_802EFC40; } };
struct C80208924 : B80208924_1 { s32 a, b, c, d, e; C80208924(); };
C80208924::C80208924() { vt = lbl_802EF920; a = 0; b = 0; c = 0; d = 0; e = 0; }

} /* extern "C" */
