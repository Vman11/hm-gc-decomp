#include "common.h"
// NonMatching draft (wNA): SDIFF 0 / DIFF 58, register-only (FP coloring). tgt loaded into locals before a = *cur, const V3 *tgt, c.y before cz.

extern "C" {

struct V3 { f32 x, y, z; };
extern f32 lbl_80366040, lbl_80366024, lbl_80366028, lbl_8036602C, lbl_80366044, lbl_80366020;
void fn_80100F24(V3 *, V3 *);
f32 fn_80101664(V3 *);
f64 fn_800F045C(f32);
f64 fn_800F049C(f32);
void fn_80101414(V3 *, V3 *, f32);
static inline long fpcls(f32 x) {
    switch ((*(s32 *)&x) & 0x7f800000) {
    case 0x7f800000:
        if ((*(s32 *)&x) & 0x007fffff) return 1;
        return 2;
    case 0:
        if ((*(s32 *)&x) & 0x007fffff) return 5;
        return 3;
    }
    return 4;
}
static inline bool isz(f32 x, f32 y, f32 z) {
    return x >= lbl_80366024 && x <= lbl_80366028 && y >= lbl_80366024 && y <= lbl_80366028 && z >= lbl_80366024 && z <= lbl_80366028;
}
void fn_8023BE44(V3 *cur, const V3 *tgt, V3 *up, f32 rate, f32 minAng, f32 dt) {
    V3 a, b;
    f32 cx, cz, dot, ang;
    V3 c;
    f32 bx = tgt->x, by = tgt->y, bz = tgt->z;
    a = *cur;
    b.x = bx; b.y = by; b.z = bz;
    fn_80100F24(&a, up);
    if ((f32)__fabs(fn_80101664(&a)) < lbl_80366040) return;
    fn_80100F24(&b, up);
    if ((f32)__fabs(fn_80101664(&b)) < lbl_80366040) return;
    cx = b.y * a.z - b.z * a.y;
    c.y = b.z * a.x - b.x * a.z;
    cz = b.x * a.y - b.y * a.x;
    if (isz(cx, c.y, cz)) return;
    dot = b.x * a.x + b.y * a.y + b.z * a.z;
    {
    f32 t = (f32)fn_800F045C(dot);
    ang = t;
    if (fpcls(t) == 1) {
        if (dot > lbl_8036602C) ang = lbl_8036602C;
        else ang = lbl_80366044;
    }
    }
    if (cx * up->x + c.y * up->y + cz * up->z < lbl_8036602C) ang = -ang;
    if ((f32)__fabs(ang) < minAng) return;
    if (ang > lbl_8036602C) ang -= minAng;
    else ang += minAng;
    ang *= lbl_80366020 - (f32)fn_800F049C(-rate * dt);
    fn_80101414(cur, up, ang);
}

} /* extern "C" */
