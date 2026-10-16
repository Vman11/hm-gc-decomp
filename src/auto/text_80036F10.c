/* Functions from 0x80036F10 to 0x80037060, found by decomp-toolkit. */
#include "common.h"

void fn_80036FF8(f32 *arg0, f32 *arg1, f32 arg2) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 x;
    a = arg1[0];
    b = arg0[0];
    c = arg1[1];
    x = b - arg2 * a;
    d = arg1[2];
    arg0[0] = x;
    arg0[1] = arg0[1] - arg2 * c;
    arg0[2] = arg0[2] - arg2 * d;
}

void fn_8003702C(f32 *arg0, f32 *arg1, f32 *arg2) {
    f32 x1 = arg1[0];
    f32 x2 = arg2[0];
    f32 y1 = arg1[1];
    f32 y2 = arg2[1];
    f32 z1 = arg1[2];
    f32 z2 = arg2[2];
    arg0[0] = x1 - x2;
    arg0[1] = y1 - y2;
    arg0[2] = z1 - z2;
}

