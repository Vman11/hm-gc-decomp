/* Functions from 0x801958A4 to 0x8019598C, found by decomp-toolkit. */
#include "common.h"

extern float lbl_80364BF0;
void fn_801958A4(float *arg0, float *arg1, float *arg2, float *arg3, float farg0, float farg1) {
    float f, e, d, c, b, a, z, y, x;
    x = arg1[0];
    y = arg1[1];
    arg0[7] = x;
    z = arg1[2];
    arg0[8] = y;
    a = arg2[0];
    arg0[9] = z;
    b = arg2[1];
    arg0[10] = a;
    c = arg2[2];
    arg0[11] = b;
    d = arg3[0];
    arg0[12] = c;
    e = arg3[1];
    arg0[13] = d;
    f = arg3[2];
    arg0[14] = e;
    arg0[15] = f;
    arg0[2] = farg1;
    *(int *)arg0 = 0;
    arg0[3] = farg0;
    arg0[4] = x;
    arg0[5] = y;
    arg0[6] = z;
}

void fn_8019590C(float *arg0) {
    arg0[7] = lbl_80364BF0;
    arg0[8] = lbl_80364BF0;
    arg0[9] = lbl_80364BF0;
    arg0[10] = lbl_80364BF0;
    arg0[11] = lbl_80364BF0;
    arg0[12] = lbl_80364BF0;
    arg0[13] = lbl_80364BF0;
    arg0[14] = lbl_80364BF0;
    arg0[15] = lbl_80364BF0;
    arg0[2] = lbl_80364BF0;
    *(int *)arg0 = 0;
    arg0[3] = lbl_80364BF0;
    arg0[4] = lbl_80364BF0;
    arg0[5] = lbl_80364BF0;
    arg0[6] = lbl_80364BF0;
    ((int *)arg0)[1] = 0;
}

