// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_common_subs off
extern "C" {
typedef struct { f32 x, y, z; } V3_8021F314;
typedef struct { V3_8021F314 *v[3]; } T_8021F314;
extern f32 lbl_803659A4;
extern f32 lbl_803659A8;

BOOL fn_8021F314(T_8021F314 *t, V3_8021F314 *p) {
    V3_8021F314 *a = t->v[0];
    V3_8021F314 *b = t->v[1];
    V3_8021F314 *c = t->v[2];
    f32 ax = a->x;
    f32 az = a->y;
    f32 bz = b->y;
    f32 bx = b->x;
    f32 cz = c->y;
    f32 cx = c->x;
    f32 mx = lbl_803659A4 * (ax + bx + cx);
    f32 mz = lbl_803659A4 * (az + bz + cz);
    f32 d0;
    f32 d1;
    f32 n0x;
    f32 pz;
    f32 n1x;
    f32 n0z;
    f32 n1z;
    f32 px;
    f32 n2x;
    f32 n2z;
    f32 d2;
    ax -= mx; bx -= mx; az -= mz; bz -= mz; cx -= mx; cz -= mz;
    ax = lbl_803659A8 * ax;
    bx = lbl_803659A8 * bx;
    cx = lbl_803659A8 * cx;
    az = lbl_803659A8 * az;
    bz = lbl_803659A8 * bz;
    cz = lbl_803659A8 * cz;
    px = p->x - mx;
    pz = p->y - mz;
    n0z = ax - cx;
    n1x = az - bz;
    n1z = bx - ax;
    n0x = cz - az;
    d0 = n0x * cx + n0z * cz;
    d1 = n1x * ax + n1z * az;
    if (n0z * n1x < n0x * n1z) {
        if (n0x * px + n0z * pz < d0) return 0;
        if (n1x * px + n1z * pz < d1) return 0;
        n2z = cx - bx;
        n2x = bz - cz;
        d2 = n2x * bx + n2z * bz;
    } else {
        if (n0x * px + n0z * pz > d0) return 0;
        if (n1x * px + n1z * pz > d1) return 0;
        n2z = bx - cx;
        n2x = cz - bz;
        d2 = n2x * bx + n2z * bz;
    }
    if (n2x * px + n2z * pz < d2) return 0;
    return 1;
}
}

} /* extern "C" */
