/* Functions from 0x80101624 to 0x80101664, found by decomp-toolkit. */
#include "common.h"

static inline f32 lerp(f32 a, f32 b, f32 t) {
    return t * (b - a) + a;
}

void fn_80101624(f32 *out, f32 *a, f32 *b, f32 t) {
    f32 x = a[0];
    f32 ry, rz;
    f32 y = a[1], z = a[2];
    x = t * (b[0] - x) + x;
    ry = t * (b[1] - y) + y;
    rz = t * (b[2] - z) + z;
    out[0] = x;
    out[1] = ry;
    out[2] = rz;
}
