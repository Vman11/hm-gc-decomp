/* Functions from 0x80178048 to 0x80178124, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8032F718[];
void fn_80178048(void *arg0, s32 arg1, volatile f32 *arg2) {
    f32 x = arg2[0];
    s32 offset = arg1 * 16;
    f32 y = arg2[1];
    volatile f32 *dst;
    f32 z = arg2[2];
    f32 w;
    *(f32 *)((u8 *)lbl_8032F718 + offset) = x;
    dst = (f32 *)((u8 *)lbl_8032F718 + offset);
    w = arg2[3];
    dst[1] = y;
    x = arg2[4];
    dst[2] = z;
    y = arg2[5];
    dst[3] = w;
    z = arg2[6];
    dst[4] = x;
    w = arg2[7];
    dst[5] = y;
    x = arg2[8];
    dst[6] = z;
    y = arg2[9];
    dst[7] = w;
    z = arg2[10];
    dst[8] = x;
    w = arg2[11];
    dst[9] = y;
    x = arg2[12];
    dst[10] = z;
    y = arg2[13];
    dst[11] = w;
    z = arg2[14];
    dst[12] = x;
    w = arg2[15];
    dst[13] = y;
    dst[14] = z;
    dst[15] = w;
}

void fn_801780DC(void *arg0, s32 arg1, f32 *__restrict arg2) {
    lbl_8032F718[arg1 * 4 + 0] = arg2[0];
    lbl_8032F718[arg1 * 4 + 1] = arg2[1];
    lbl_8032F718[arg1 * 4 + 2] = arg2[2];
    lbl_8032F718[arg1 * 4 + 3] = arg2[3];
}

void fn_80178110(f32 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    arg0[0] = farg0;
    arg0[1] = farg1;
    arg0[2] = farg2;
    arg0[3] = farg3;
}
