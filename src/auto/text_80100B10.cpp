#include "common.h"
extern "C" {
extern f32 lbl_803637F4;
extern f64 lbl_803637F8;
extern f64 lbl_80363800;

typedef struct V3_80100B10 { f32 x, y, z; } V3_80100B10;
typedef struct Sph_80100B10 { f32 x, y, z, r; } Sph_80100B10;
typedef struct Seg_80100B10 {
    u32 flags;
    V3_80100B10 p0;
    V3_80100B10 p1;
    u8 pad1C[0x3C - 0x1C];
    V3_80100B10 a;
    V3_80100B10 b;
    V3_80100B10 *pa;
    V3_80100B10 *pb;
    f32 len;
    V3_80100B10 dir;
} Seg_80100B10;

f32 fn_80101590(V3_80100B10 *, V3_80100B10 *);
void fn_80101820(V3_80100B10 *);
void fn_80101624(V3_80100B10 *, V3_80100B10 *, V3_80100B10 *, f32);

int fn_80100B10(Sph_80100B10 *s, Seg_80100B10 *o) {
    V3_80100B10 out;
    volatile f32 y;
    f64 guess;
    V3_80100B10 *pa;
    V3_80100B10 *pb;
    f32 len;
    f32 r2, d2, proj, disc, t;
    f32 dx, dy, dz;

    pa = o->pa;
    pb = o->pb;
    if (o->flags & 4) {
        o->len = fn_80101590(&o->p0, &o->p1);
        o->flags &= ~4;
    }
    len = o->len;
    if (o->flags & 1) {
        o->dir.x = o->b.x - o->a.x;
        o->dir.y = o->b.y - o->a.y;
        o->dir.z = o->b.z - o->a.z;
        fn_80101820(&o->dir);
        o->flags &= ~1;
    }
    dx = s->x - pa->x;
    dy = s->y - pa->y;
    dz = s->z - pa->z;
    r2 = s->r * s->r;
    d2 = dx * dx + dy * dy + dz * dz;
    if (d2 < r2) {
        return 1;
    }
    proj = o->dir.x * dx + o->dir.y * dy + o->dir.z * dz;
    d2 = r2 - d2;
    disc = proj * proj + d2;
    if (disc <= *(f32 *)&lbl_803637F4) {
        return 0;
    }
    if (disc > lbl_803637F4) {
        guess = __frsqrte((f64)disc);
        guess = lbl_803637F8 * guess * (lbl_80363800 - guess * guess * disc);
        guess = lbl_803637F8 * guess * (lbl_80363800 - guess * guess * disc);
        guess = lbl_803637F8 * guess * (lbl_80363800 - guess * guess * disc);
        y = (f32)(disc * guess);
        disc = y;
    }
    t = proj - disc;
    if (t < lbl_803637F4 || t > len) {
        return 0;
    }
    fn_80101624(&out, pa, pb, t / len);
    return 1;
}
}
