/* Functions from 0x80101624 to 0x80101664, found by decomp-toolkit. */
#include "common.h"

static inline f32 lerp(f32 a, f32 b, f32 t) {
    return t * (b - a) + a;
}

void fn_80101624(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    f32 a0 = arg1[0];
    f32 a1 = arg1[1];
    f32 a2 = arg1[2];
    f32 d0 = arg2[0] - a0;
    f32 d1 = arg2[1] - a1;
    f32 d2 = arg2[2] - a2;
    f32 x = arg3 * d0 + a0;
    f32 y = arg3 * d1 + a1;
    f32 z = arg3 * d2 + a2;
    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = z;
}
