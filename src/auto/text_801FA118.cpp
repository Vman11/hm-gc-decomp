/* Functions from 0x801FA118 to 0x801FA224, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct V3 {
    f32 x, y, z;
} V3;

extern s32 lbl_8035B110;
void fn_801FA118(s32 arg0) {
    lbl_8035B110 = arg0;
}

void fn_801FA120(void *arg0, f32 farg0) {
    extern f32 lbl_80365558;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_80365558) {
        var_f1 = lbl_80365558;
    }
    M2C_FIELD(arg0, f32 *, 0x94) = var_f1;
}

void fn_801FA138(void) {

}

void fn_801FA13C(void) {

}

void fn_801FA140(void *arg0, f32 farg0) {
    extern f32 lbl_8036555C;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 > lbl_8036555C) {
        var_f1 = lbl_8036555C;
    }
    M2C_FIELD(arg0, f32 *, 0x90) = var_f1;
}

void fn_801FA158(void *arg0, f32 farg0) {
    extern f32 lbl_80365558;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_80365558) {
        var_f1 = lbl_80365558;
    }
    M2C_FIELD(arg0, f32 *, 0x8C) = var_f1;
}

void fn_801FA170(void *arg0, f32 farg0) {
    extern f32 lbl_80365558;
    extern f32 lbl_80365560;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_80365558) {
        var_f1 = lbl_80365558;
    }
    if (var_f1 > lbl_80365560) {
        var_f1 = lbl_80365560;
    }
    M2C_FIELD(arg0, f32 *, 0x88) = var_f1;
}

void fn_801FA198(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x80) = farg0;
    M2C_FIELD(arg0, f32 *, 0x84) = farg1;
}

void fn_801FA1A4(u8 *__restrict arg0, f32 *__restrict arg1) {
    ((f32 *)(arg0 + 0x74))[0] = arg1[0];
    ((f32 *)(arg0 + 0x74))[1] = arg1[1];
    ((f32 *)(arg0 + 0x74))[2] = arg1[2];
}

void fn_801FA1C0(s32 *arg0, s32 arg1) {
    extern s32 lbl_80365564;
    if (arg1 == 1) {
        *arg0 |= lbl_80365564;
        return;
    }
    *arg0 &= 0xFFFFFEFF;
}

void fn_801FA1EC(u8 *__restrict arg0, f32 *__restrict arg1) {
    ((f32 *)(arg0 + 0x68))[0] = arg1[0];
    ((f32 *)(arg0 + 0x68))[1] = arg1[1];
    ((f32 *)(arg0 + 0x68))[2] = arg1[2];
}

void fn_801FA208(u8 *__restrict arg0, f32 *__restrict arg1) {
    ((f32 *)(arg0 + 0x5C))[0] = arg1[0];
    ((f32 *)(arg0 + 0x5C))[1] = arg1[1];
    ((f32 *)(arg0 + 0x5C))[2] = arg1[2];
}

} /* extern "C" */
