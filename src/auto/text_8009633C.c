/* Functions from 0x8009633C to 0x8009651C, found by decomp-toolkit. */
#include "common.h"

void fn_8009633C(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    extern f32 lbl_803610A0;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f4;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;

    var_f1 = farg0;
    if (var_f1 < lbl_803610A0) {
        var_f1 = lbl_803610A0;
    }
    if (arg1 != 0) {
        if (arg2 != 0) {
            var_f1_2 = *M2C_FIELD(arg0, f32 **, 0x134);
        } else {
            var_f1_2 = M2C_FIELD(arg0, f32 *, 0x15C);
        }
        if (arg2 != 0) {
            var_f4 = *M2C_FIELD(arg0, f32 **, 0x138);
        } else {
            var_f4 = M2C_FIELD(arg0, f32 *, 0x160);
        }
        if (arg2 != 0) {
            var_f5 = *M2C_FIELD(arg0, f32 **, 0x13C);
        } else {
            var_f5 = M2C_FIELD(arg0, f32 *, 0x164);
        }
        if (arg2 != 0) {
            var_f6 = *M2C_FIELD(arg0, f32 **, 0x140);
        } else {
            var_f6 = M2C_FIELD(arg0, f32 *, 0x168);
        }
        if (arg2 != 0) {
            var_f7 = *M2C_FIELD(arg0, f32 **, 0x144);
        } else {
            var_f7 = M2C_FIELD(arg0, f32 *, 0x16C);
        }
        if (arg2 != 0) {
            var_f0 = *M2C_FIELD(arg0, f32 **, 0x148);
        } else {
            var_f0 = M2C_FIELD(arg0, f32 *, 0x170);
        }
    } else {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x15C);
        temp_f3 = *M2C_FIELD(arg0, f32 **, 0x11C);
        var_f0 = -((var_f1 * (temp_f2 - temp_f3)) - temp_f2);
        var_f1_2 = var_f0;
        if (((var_f0 < temp_f3) && (temp_f3 < temp_f2)) || ((var_f1_2 > temp_f3) && (temp_f3 > temp_f2))) {
            var_f1_2 = temp_f3;
        }
        var_f4 = var_f0;
        if (((var_f0 < temp_f3) && (temp_f3 < temp_f2)) || ((var_f0 > temp_f3) && (temp_f3 > temp_f2))) {
            var_f4 = temp_f3;
        }
        var_f5 = var_f0;
        if (((var_f0 < temp_f3) && (temp_f3 < temp_f2)) || ((var_f0 > temp_f3) && (temp_f3 > temp_f2))) {
            var_f5 = temp_f3;
        }
        var_f6 = var_f0;
        if (((var_f0 < temp_f3) && (temp_f3 < temp_f2)) || ((var_f0 > temp_f3) && (temp_f3 > temp_f2))) {
            var_f6 = temp_f3;
        }
        var_f7 = var_f0;
        if (((var_f0 < temp_f3) && (temp_f3 < temp_f2)) || ((var_f0 > temp_f3) && (temp_f3 > temp_f2))) {
            var_f7 = temp_f3;
        }
        if (((var_f0 < temp_f3) && (temp_f3 < temp_f2)) || ((var_f0 > temp_f3) && (temp_f3 > temp_f2))) {
            var_f0 = temp_f3;
        }
    }
    *M2C_FIELD(arg0, f32 **, 0x11C) = var_f1_2;
    *M2C_FIELD(arg0, f32 **, 0x120) = var_f4;
    *M2C_FIELD(arg0, f32 **, 0x124) = var_f5;
    *M2C_FIELD(arg0, f32 **, 0x128) = var_f6;
    *M2C_FIELD(arg0, f32 **, 0x12C) = var_f7;
    *M2C_FIELD(arg0, f32 **, 0x130) = var_f0;
}
