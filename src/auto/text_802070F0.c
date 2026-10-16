/* Functions from 0x802070F0 to 0x80207144, found by decomp-toolkit. */
#include "common.h"

void fn_802070F0(f32 *out, f32 *a, f32 *b, f32 t) {
    f32 x = a[0];
    f32 ry, rz, rw;
    f32 y = a[1], z = a[2], w = a[3];
    x = t * (b[0] - x) + x;
    ry = t * (b[1] - y) + y;
    rz = t * (b[2] - z) + z;
    rw = t * (b[3] - w) + w;
    out[0] = x;
    out[1] = ry;
    out[2] = rz;
    out[3] = rw;
}
