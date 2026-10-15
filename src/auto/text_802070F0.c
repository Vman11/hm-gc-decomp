/* Functions from 0x802070F0 to 0x80207144, found by decomp-toolkit. */
#include "common.h"

void fn_802070F0(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    f32 x0 = arg1[0];
    f32 x1 = arg1[1];
    f32 x2 = arg1[2];
    f32 x3 = arg1[3];
    f32 y0 = arg2[0];
    f32 y1 = arg2[1];
    f32 y2 = arg2[2];
    f32 y3 = arg2[3];
    arg0[0] = x0 + arg3 * (y0 - x0);
    arg0[1] = x1 + arg3 * (y1 - x1);
    arg0[2] = x2 + arg3 * (y2 - x2);
    arg0[3] = x3 + arg3 * (y3 - x3);
}
