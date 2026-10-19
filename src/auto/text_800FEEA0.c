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

    dx = pos[0] - box[0];
    dy = pos[1] - box[1];
    dz = pos[2] - box[2];
    ax = fabsf(dir[0]);
    if (fabsf(dx) > t * ax + box[3]) {
        return 0;
    }
    ay = fabsf(dir[1]);
    if (fabsf(dy) > t * ay + box[4]) {
        return 0;
    }
    az = fabsf(dir[2]);
    if (fabsf(dz) > t * az + box[5]) {
        return 0;
    }
    if (fabsf(dy * dir[2] - dz * dir[1]) > box[4] * az + box[5] * ay) {
        return 0;
    }
    if (fabsf(dz * dir[0] - dx * dir[2]) > box[3] * az + box[5] * ax) {
        return 0;
    }
    if (fabsf(dx * dir[1] - dy * dir[0]) > box[3] * ay + box[4] * ax) {
        return 0;
    }
    return 1;
}

s32 fn_800FEFC8(f32 *box, f32 *sphere) {
    f32 dx, dy, dz;

    dx = (f32)__fabs(sphere[0]) - box[3];
    dy = (f32)__fabs(sphere[1]) - box[4];
    dz = (f32)__fabs(sphere[2]) - box[5];
    if (dx <= 0.0f) {
        if (dy <= 0.0f) {
            if (dz <= 0.0f) {
                return 1;
            }
            return dz <= sphere[3];
        }
        if (dz <= 0.0f) {
            return dy <= sphere[3];
        }
        return dy * dy + dz * dz <= sphere[3] * sphere[3];
    }
    if (dy <= 0.0f) {
        if (dz <= 0.0f) {
            return dx <= sphere[3];
        }
        return dx * dx + dz * dz <= sphere[3] * sphere[3];
    }
    if (dz <= 0.0f) {
        return dx * dx + dy * dy <= sphere[3] * sphere[3];
    }
    return dx * dx + dy * dy + dz * dz <= sphere[3] * sphere[3];
}

