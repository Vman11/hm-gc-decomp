/* Functions from 0x80100060 to 0x80100104, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct Quaternion {
    f32 x, y, z, w;
} Quaternion;

extern f32 lbl_803637A4;

typedef struct { f32 x, y, z, w; } Q80100060;


void fn_80100060(Q80100060 *out, Q80100060 *a, Q80100060 *b, f32 t) {
    f32 ay, by, az, bz, bw, aw, ax, bx;
    ax = a->x;
    ay = a->y;
    az = a->z;
    aw = a->w;
    bx = b->x;
    by = b->y;
    bz = b->z;
    bw = b->w;
    if (ax * bx + ay * by + az * bz + aw * bw > lbl_803637A4) {
        out->x = t * (bx - ax) + ax;
        out->y = t * (by - ay) + ay;
        out->z = t * (bz - az) + az;
        out->w = t * (bw - aw) + aw;
    } else {
        out->x = ax - t * (bx + ax);
        out->y = ay - t * (by + ay);
        out->z = az - t * (bz + az);
        out->w = aw - t * (bw + aw);
    }
}

} /* extern "C" */
