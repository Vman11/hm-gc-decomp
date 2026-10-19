/* Functions from 0x80100060 to 0x80100104, found by decomp-toolkit. */
#include "common.h"

typedef struct Quaternion {
    f32 x, y, z, w;
} Quaternion;

extern f32 lbl_803637A4;

void fn_80100060(Quaternion *d, Quaternion *p, Quaternion *q, f32 t) {
    f32 px = p->x, py = p->y, pz = p->z, pw = p->w;
    f32 qx = q->x, qy = q->y, qz = q->z, qw = q->w;

    if (px * qx + py * qy + pz * qz + pw * qw > lbl_803637A4) {
        d->x = px + t * (qx - px);
        d->y = py + t * (qy - py);
        d->z = pz + t * (qz - pz);
        d->w = pw + t * (qw - pw);
    } else {
        d->x = px - t * (qx + px);
        d->y = py - t * (qy + py);
        d->z = pz - t * (qz + pz);
        d->w = pw - t * (qw + pw);
    }
}
