/* Functions from 0x80178048 to 0x80178124, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f32 lbl_8032F718[];
void fn_80178048(void *arg0, s32 arg1, f32 *__restrict arg2) {
    f32 x, y, z, w;
    x = arg2[0];
    y = arg2[1];
    z = arg2[2];
    lbl_8032F718[arg1 * 4 + 0] = x;
    w = arg2[3];
    lbl_8032F718[arg1 * 4 + 1] = y;
    x = arg2[4];
    lbl_8032F718[arg1 * 4 + 2] = z;
    y = arg2[5];
    lbl_8032F718[arg1 * 4 + 3] = w;
    z = arg2[6];
    lbl_8032F718[arg1 * 4 + 4] = x;
    w = arg2[7];
    lbl_8032F718[arg1 * 4 + 5] = y;
    x = arg2[8];
    lbl_8032F718[arg1 * 4 + 6] = z;
    y = arg2[9];
    lbl_8032F718[arg1 * 4 + 7] = w;
    z = arg2[10];
    lbl_8032F718[arg1 * 4 + 8] = x;
    w = arg2[11];
    lbl_8032F718[arg1 * 4 + 9] = y;
    x = arg2[12];
    lbl_8032F718[arg1 * 4 + 10] = z;
    y = arg2[13];
    lbl_8032F718[arg1 * 4 + 11] = w;
    z = arg2[14];
    lbl_8032F718[arg1 * 4 + 12] = x;
    x = arg2[15];
    lbl_8032F718[arg1 * 4 + 13] = y;
    lbl_8032F718[arg1 * 4 + 14] = z;
    lbl_8032F718[arg1 * 4 + 15] = x;
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

} /* extern "C" */
