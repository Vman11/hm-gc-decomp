#include "common.h"
extern "C" {
typedef struct V3_09DC { f32 x, y, z; } V3_09DC;
typedef struct S_09DC { f32 x, y, z, r; } S_09DC;
extern f32 lbl_803637F4;
extern f64 lbl_803637F8;
extern f64 lbl_80363800;
void fn_80101624(V3_09DC *, const V3_09DC *, const V3_09DC *, f32);
static inline f32 Sq_09DC(f32 x) {
    if (x > lbl_803637F4) {
        volatile f32 y;
        f64 g = __frsqrte(x);
        g = lbl_803637F8 * g * (lbl_80363800 - g * g * x);
        g = lbl_803637F8 * g * (lbl_80363800 - g * g * x);
        g = lbl_803637F8 * g * (lbl_80363800 - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
int fn_801009DC(const S_09DC *s, const V3_09DC *o, const V3_09DC *e, const f32 *len, const V3_09DC *d, V3_09DC *out, f32 *t, int inside) {
    f32 dx = s->x - o->x;
    f32 dy = s->y - o->y;
    f32 dz = s->z - o->z;
    f32 r2 = s->r * s->r;
    f32 dist2 = dx * dx + dy * dy + dz * dz;
    f32 proj, disc, tt;
    if (dist2 < r2) return inside;
    proj = d->x * dx + d->y * dy + d->z * dz;
    disc = proj * proj + (r2 - dist2);
    if (disc <= *(f32 *)&lbl_803637F4) return 0;
    tt = proj - Sq_09DC(disc);
    if (tt < lbl_803637F4 || tt > *len) return 0;
    *t = tt / *len;
    fn_80101624(out, o, e, *t);
    return 1;
}
}
