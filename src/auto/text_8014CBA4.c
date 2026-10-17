/* Functions from 0x8014CBA4 to 0x8014CC80, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[4];
} Quad;

typedef struct {
    Quad q;
    f32 x;
    f32 y;
} QuadXY;

typedef struct {
    f32 x, y, z, w;
} Plane;

extern f32 lbl_803644E0;
extern f32 lbl_803644E4;

void fn_8014CBA4(QuadXY *__restrict dst, QuadXY *__restrict src) {
    dst->q.v[0] = src->q.v[0];
    dst->q.v[2] = src->q.v[2];
    dst->q.v[1] = src->q.v[1];
    dst->q.v[3] = src->q.v[3];
    dst->x = src->x;
    dst->y = src->y;
}

void fn_8014CBD8(QuadXY *p) {
    p->x = lbl_803644E0;
    p->y = lbl_803644E4;
}

s32 fn_8014CBEC(Plane *planes, Plane *s) {
    Plane *end = planes + 6;
    f32 x = s->x;
    f32 y = s->y;
    f32 z = s->z;
    f32 r = s->w;
    s32 mask = 0;
    s32 bit = 1;
    f32 d;

    for (; planes < end; planes++) {
        d = planes->w + (z * planes->z + (x * planes->x + y * planes->y));
        if (d < -r) {
            return 0x40;
        }
        if (d < r) {
            mask |= bit;
        }
        bit <<= 1;
    }
    return mask ? mask : 0;
}

