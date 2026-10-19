/* Functions from 0x801003A8 to 0x80100754, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z, w; } Quat_;
extern f32 lbl_803637D8;

void fn_801003A8(Quat_ *out, Quat_ *a, Quat_ *b) {
    f32 bw, ax, aw, bx, bz, ay, by, az;
    ax = a->x;
    bw = b->w;
    ay = a->y;
    bx = b->x;
    aw = a->w;
    by = b->y;
    az = a->z;
    bz = b->z;
    out->x = -((az * by) - ((ay * bz) + ((bx * aw) + (ax * bw))));
    out->y = -((ax * bz) - ((az * bx) + ((by * aw) + (ay * bw))));
    out->z = -((ay * bx) - ((ax * by) + ((bz * aw) + (az * bw))));
    out->w = (bw * aw) - ((bz * az) + ((bx * ax) + (by * ay)));
}

void fn_8010041C(Quat_ *a, Quat_ *b) {
    f32 bw, bx, bz, by, ax, ay, az, aw;
    ax = a->x;
    bw = b->w;
    ay = a->y;
    aw = a->w;
    bx = b->x;
    by = b->y;
    az = a->z;
    bz = b->z;
    a->x = -((az * by) - ((ay * bz) + ((bx * aw) + (ax * bw))));
    a->y = -((ax * bz) - ((az * bx) + ((by * aw) + (ay * bw))));
    a->z = -((ay * bx) - ((ax * by) + ((bz * aw) + (az * bw))));
    a->w = (bw * aw) - ((bz * az) + ((bx * ax) + (by * ay)));
}

void fn_80100490(Quat_ *a, Quat_ *b) {
    f32 bx, bw, by, bz, ax, ay, az, aw;
    aw = a->w;
    bx = b->x;
    by = b->y;
    ax = a->x;
    bw = b->w;
    ay = a->y;
    bz = b->z;
    az = a->z;
    a->x = -((bz * ay) - ((by * az) + ((ax * bw) + (bx * aw))));
    a->y = -((bx * az) - ((bz * ax) + ((ay * bw) + (by * aw))));
    a->z = -((by * ax) - ((bx * ay) + ((az * bw) + (bz * aw))));
    a->w = (aw * bw) - ((az * bz) + ((ax * bx) + (ay * by)));
}

static inline void fn_80100504_adjustUV(Quat_ *uv, Quat_ *out, Quat_ *b, u32 flags) {
    f32 w, h, t;

    w = uv->z - uv->x;
    if (flags & 4) {
        t = (out->z - b->x) / (b->z - b->x);
        uv->z = uv->x + t * w;
    }
    if (flags & 1) {
        t = (out->x - b->x) / (b->z - b->x);
        uv->x = uv->x + t * w;
    }
    h = uv->w - uv->y;
    if (flags & 8) {
        t = (out->w - b->y) / (b->w - b->y);
        uv->w = uv->y + t * h;
    }
    if (flags & 2) {
        t = (out->y - b->y) / (b->w - b->y);
        uv->y = uv->y + t * h;
    }
}

s32 fn_80100504(Quat_ *out, Quat_ *a, Quat_ *b, Quat_ *uv) {
    extern u32 lbl_803637C8;
    extern u32 lbl_803637CC;
    extern u32 lbl_803637D0;
    extern u32 lbl_803637D4;
    u32 flags = 0;

    if (a->x > b->x) {
        out->x = a->x;
        flags = lbl_803637C8;
    } else {
        out->x = b->x;
    }
    if (a->z < b->z) {
        out->z = a->z;
        flags |= lbl_803637CC;
    } else {
        out->z = b->z;
    }
    if (out->z <= out->x) {
        return 0;
    }
    if (a->y > b->y) {
        out->y = a->y;
        flags |= lbl_803637D0;
    } else {
        out->y = b->y;
    }
    if (a->w < b->w) {
        out->w = a->w;
        flags |= lbl_803637D4;
    } else {
        out->w = b->w;
    }
    if (out->w <= out->y) {
        return 0;
    }

    if (flags != 0) {
        fn_80100504_adjustUV(uv, out, b, flags);
    }
    return 1;
}

s32 fn_8010069C(Quat_ *a, Quat_ *b) {
    if (b->x > a->x) {
        a->x = b->x;
    }
    if (b->z < a->z) {
        a->z = b->z;
    }
    if (a->z <= a->x) {
        a->z = a->x = a->y = a->w = lbl_803637D8;
        return 0;
    }
    if (b->y > a->y) {
        a->y = b->y;
    }
    if (b->w < a->w) {
        a->w = b->w;
    }
    if (a->w <= a->y) {
        a->z = a->x = a->y = a->w = lbl_803637D8;
        return 0;
    }
    return 1;
}

} /* extern "C" */
