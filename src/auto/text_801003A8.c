/* Functions from 0x801003A8 to 0x80100754, found by decomp-toolkit. */
#include "common.h"
typedef struct { f32 x, y, z, w; } Quat_;
extern f32 lbl_803637D8;

void fn_801003A8(Quat_ *out, Quat_ *a, Quat_ *b) {
    f32 bw, ax, aw, bx, ay, by, az, bz;
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
    f32 aw = a->w, bx = b->x, by = b->y, ax = a->x, bw = b->w, ay = a->y, bz = b->z, az = a->z;
    a->x = -((bz * ay) - ((by * az) + ((ax * bw) + (bx * aw))));
    a->y = -((bx * az) - ((bz * ax) + ((ay * bw) + (by * aw))));
    a->z = -((by * ax) - ((bx * ay) + ((az * bw) + (bz * aw))));
    a->w = (aw * bw) - ((az * bz) + ((ax * bx) + (ay * by)));
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

