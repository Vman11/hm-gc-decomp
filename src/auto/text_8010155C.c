/* Functions from 0x8010155C to 0x80101590, found by decomp-toolkit. */
#include "common.h"

f32 fn_8010155C(f32 *arg0, f32 *arg1) {
    f32 dx = arg1[0] - arg0[0];
    f32 dy = arg1[1] - arg0[1];
    f32 dz = arg1[2] - arg0[2];
    return dx * dx + dy * dy + dz * dz;
}
