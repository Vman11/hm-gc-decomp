/* Functions from 0x80037118 to 0x8003714C, found by decomp-toolkit. */
#include "common.h"

void fn_80037118(f32 *arg0, f32 *arg1, f32 arg2) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 x;
    a = arg1[0];
    b = arg0[0];
    c = arg1[1];
    x = arg2 * a + b;
    d = arg1[2];
    arg0[0] = x;
    arg0[1] = arg2 * c + arg0[1];
    arg0[2] = arg2 * d + arg0[2];
}
