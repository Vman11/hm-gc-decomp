/* Functions from 0x8012FDD4 to 0x8012FE8C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80363F80;
extern s32 lbl_8035ABF8;
extern f32 lbl_803596E0[];
extern f32 lbl_80363F84;
void fn_8012FDD4(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x2C) &= 0xFFFFFFBF;
}

void fn_8012FDE4(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, u32 *, 0x2C) |= lbl_80363F80;
    M2C_FIELD(arg0, s8 *, 0x36) = arg1;
    M2C_FIELD(arg0, s8 *, 0x37) = arg2;
}

void fn_8012FE00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 20) = 0;
    M2C_FIELD(arg0, s32 *, 24) = 0;
    M2C_FIELD(arg0, s32 *, 28) = 0;
    if (lbl_8035ABF8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0x2000;
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s8 *, 52) = 0;
    M2C_FIELD(arg0, s32 *, 36) = 0;
    M2C_FIELD(arg0, f32 *, 40) = lbl_803596E0[0];
    M2C_FIELD(arg0, s8 *, 48) = 0;
    M2C_FIELD(arg0, s8 *, 53) = 0;
    M2C_FIELD(arg0, s8 *, 54) = 0;
    M2C_FIELD(arg0, s8 *, 55) = 0;
    M2C_FIELD(arg0, s8 *, 49) = 2;
    M2C_FIELD(arg0, s8 *, 56) = 0;
    M2C_FIELD(arg0, s8 *, 57) = 0;
    M2C_FIELD(arg0, s8 *, 58) = 0;
    M2C_FIELD(arg0, s8 *, 59) = 0;
    M2C_FIELD(arg0, s32 *, 32) = -1;
    M2C_FIELD(arg0, f32 *, 16) = M2C_FIELD(arg0, f32 *, 60) = lbl_80363F84;
    M2C_FIELD(arg0, s32 *, 64) = 0;
}

