/* Functions from 0x800FEEA0 to 0x800FF140, found by decomp-toolkit. */
#include "common.h"

static inline f64 fabs(f64 x) {
    return __fabs(x);
}

static inline f32 fabsf(f32 x) {
    return (f32)fabs((f64)x);
}

s32 fn_800FEEA0(f32 *box, f32 *dir, f32 *pos, f32 t) {
    f32 dx, dy, dz;
    f32 ax, ay, az;
    f32 ex, ey, ez;
    f32 vx, vy, vz;

    dx = pos[0] - box[0];
    dy = pos[1] - box[1];
    dz = pos[2] - box[2];
    vx = dir[0];
    ex = box[3];
    ax = fabsf(vx);
    if (fabsf(dx) > t * ax + ex) {
        return 0;
    }
    vy = dir[1];
    ey = box[4];
    ay = fabsf(vy);
    if (fabsf(dy) > t * ay + ey) {
        return 0;
    }
    vz = dir[2];
    ez = box[5];
    az = fabsf(vz);
    if (fabsf(dz) > t * az + ez) {
        return 0;
    }
    if (fabsf(dy * vz - dz * vy) > ey * az + ez * ay) {
        return 0;
    }
    if (fabsf(dz * vx - dx * vz) > ex * az + ez * ax) {
        return 0;
    }
    if (fabsf(dx * vy - dy * vx) > ex * ay + ey * ax) {
        return 0;
    }
    return 1;
}
