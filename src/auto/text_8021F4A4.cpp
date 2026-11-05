#include "common.h"
extern "C" {
typedef struct { f32 x, y, z; } V3_8021F4A4;
typedef struct { V3_8021F4A4 *v[3]; u8 padc[3]; u8 axis; } T_8021F4A4;
extern f32 lbl_803659A0;
extern f64 lbl_803659B0;
extern f64 lbl_803659B8;

static inline f32 Sq(f32 x) {
    if (x > lbl_803659A0) {
        const f64 _half = lbl_803659B0;
        const f64 _three = lbl_803659B8;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline f32 Abs(f32 x) { f32 r = __fabs(x); return r; }
static inline void Sub(V3_8021F4A4 *d, const V3_8021F4A4 *a, const V3_8021F4A4 *b) {
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}
static inline void Cross(V3_8021F4A4 *d, const V3_8021F4A4 *a, const V3_8021F4A4 *b) {
    f32 x = a->y * b->z - a->z * b->y;
    f32 y = a->z * b->x - a->x * b->z;
    f32 z = a->x * b->y - a->y * b->x;
    d->x = x;
    d->y = y;
    d->z = z;
}

void fn_8021F4A4(T_8021F4A4 *t) {
    V3_8021F4A4 u, v, n;
    f32 nx, ny, nz, len;
    Sub(&u, t->v[0], t->v[1]);
    Sub(&v, t->v[2], t->v[1]);
    Cross(&n, &u, &v);
    nx = Abs(n.x);
    nz = Abs(n.z);
    ny = Abs(n.y);
    len = Sq(nx * nx + ny * ny + nz * nz);
    if (lbl_803659A0 == len) {
        t->axis = 3;
    } else if (nx > ny) {
        if (nz > nx) {
            t->axis = 0;
        } else {
            t->axis = 1;
        }
    } else {
        if (nz > ny) {
            t->axis = 0;
        } else {
            t->axis = 2;
        }
    }
}
}
