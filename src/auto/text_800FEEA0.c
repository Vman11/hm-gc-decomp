/* Functions from 0x800FEEA0 to 0x800FF140, found by decomp-toolkit. */
#include "common.h"

static inline f32 fabsf(f32 x) {
    return (f32)__fabs((f64)x);
}

s32 fn_800FEEA0(f32 *box, f32 *dir, f32 *pos, f32 t) {
    f32 dx, dy, dz;
    f32 ax, ay, az;

    dx = pos[0] - box[0];
    dy = pos[1] - box[1];
    dz = pos[2] - box[2];
    if ((f32)__fabs(dx) > t * (ax = (f32)__fabs(dir[0])) + box[3]) {
        return 0;
    }
    if ((f32)__fabs(dy) > t * (ay = (f32)__fabs(dir[1])) + box[4]) {
        return 0;
    }
    if ((f32)__fabs(dz) > t * (az = (f32)__fabs(dir[2])) + box[5]) {
        return 0;
    }
    if ((f32)__fabs(dy * dir[2] - dz * dir[1]) > box[4] * az + box[5] * ay) {
        return 0;
    }
    if ((f32)__fabs(dz * dir[0] - dx * dir[2]) > box[3] * az + box[5] * ax) {
        return 0;
    }
    if ((f32)__fabs(dx * dir[1] - dy * dir[0]) > box[3] * ay + box[4] * ax) {
        return 0;
    }
    return 1;
}
