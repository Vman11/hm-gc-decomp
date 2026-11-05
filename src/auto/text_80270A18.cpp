#include "common.h"
extern "C" {
struct V3 { f32 x, y, z; };
struct P {
    u8 pad0[20];
    V3 a20;
    V3 b32;
    u8 pad44[48];
    V3 c92;
    u8 pad104[72];
    s32 i176;
    u8 pad180[16];
    V3 d196;
    V3 e208;
    V3 f220;
    V3 g232;
    V3 h244;
    V3 k256;
    f32 f268;
    f32 f272;
    u8 pad276[24];
    f32 f300;
    u8 pad304[20];
    f32 f324;
};
extern f32 lbl_80366E9C;
extern f32 lbl_80366EAC;
extern f64 lbl_80366EC0, lbl_80366EC8;
extern f32 lbl_80366ED0, lbl_80366ED4, lbl_80366ED8, lbl_80366EDC;
extern f32 lbl_80366EE0, lbl_80366EE4, lbl_80366EE8, lbl_80366EEC;
void fn_80101820(V3 *);

inline f32 Sqrt(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_80366EC0 * g * (lbl_80366EC8 - g * g * x);
    g = lbl_80366EC0 * g * (lbl_80366EC8 - g * g * x);
    g = lbl_80366EC0 * g * (lbl_80366EC8 - g * g * x);
    y = x * g;
    return y;
}
static inline f32 Len(V3 *v) {
    f32 d = v->x * v->x + v->y * v->y + v->z * v->z;
    if (d > lbl_80366E9C) d = Sqrt(d);
    return d;
}

void fn_80270A18(P *p) {
    p->h244 = p->b32;
    {
        f32 d = p->h244.x * p->h244.x + p->h244.y * p->h244.y + p->h244.z * p->h244.z;
        if (d > lbl_80366E9C) d = Sqrt(d);
        f32 t = lbl_80366EAC - p->f324;
        p->f268 = t * d;
    }
    p->k256 = p->c92;
    {
        f32 d = p->k256.x * p->k256.x + p->k256.y * p->k256.y + p->k256.z * p->k256.z;
        if (d > lbl_80366E9C) d = Sqrt(d);
        p->f272 = p->f324 * d;
    }
    fn_80101820(&p->c92);
    p->d196 = p->a20;
    p->g232.x = __fmadds(lbl_80366EAC, p->c92.x, p->d196.x);
    p->g232.y = __fmadds(lbl_80366EAC, p->c92.y, p->d196.y);
    p->g232.z = __fmadds(lbl_80366EAC, p->c92.z, p->d196.z);
    {
        f32 s5;
        f32 s6;
        s6 = p->f268 * lbl_80366ED0;
        s5 = p->f272 * lbl_80366ED4;
        p->e208.x = __fmadds(s5, p->k256.x, __fmadds(s6, p->h244.x, __fmadds(lbl_80366ED8, p->d196.x, lbl_80366EDC * p->g232.x)));
        p->e208.y = __fmadds(s5, p->k256.y, __fmadds(s6, p->h244.y, __fmadds(lbl_80366ED8, p->d196.y, lbl_80366EDC * p->g232.y)));
        p->e208.z = p->g232.z;
    }
    {
        f32 s5;
        f32 s6;
        s6 = p->f268 * lbl_80366EE0;
        s5 = p->f272 * lbl_80366EE4;
        p->f220.x = __fmadds(s5, p->k256.x, __fmadds(s6, p->h244.x, __fmadds(lbl_80366EE8, p->d196.x, lbl_80366EEC * p->g232.x)));
        p->f220.y = __fmadds(s5, p->k256.y, __fmadds(s6, p->h244.y, __fmadds(lbl_80366EE8, p->d196.y, lbl_80366EEC * p->g232.y)));
        p->f220.z = p->g232.z;
    }
    p->f300 = lbl_80366E9C;
    p->i176 = 1;
}
}
