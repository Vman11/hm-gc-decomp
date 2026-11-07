#include "common.h"
extern "C" {
struct V4 { f32 x, y, z, w; };
typedef void (*F30)(void *a, f32 *b, f32 *c, f32 *d, f32 e, f32 f);
struct T30 { u8 pad[0x1a0]; F30 f1a0; F30 f1a4; };
extern T30 lbl_8032C110;
extern f32 lbl_80363E60;
struct P30 { u8 pad[0x30]; void *f30; f32 f34, f38, f3c, f40, f44, f48, f4c, f50, f54[2], f5c[2]; s32 f64; };
void fn_80103C44(P30 *p, V4 *v);
f64 fn_800F03E4(f64 x);
static inline void Set2(f32 *d, f32 b, f32 a) { d[0] = a; d[1] = b; }
void fn_80129404(P30 *p, V4 *v) {
    fn_80103C44(p, v);
    if (p->f64 == 0) {
        f32 a0 = v->y; f32 a1 = v->x; p->f34 = a0;
        f32 a2 = v->z; p->f38 = a1;
        f32 a3 = v->w; p->f4c = a2; p->f50 = a3;
        p->f64 = 0;
        f32 t = fn_800F03E4(lbl_80363E60 * p->f34);
        f32 b, a;
        a = t * p->f4c;
        b = p->f38 * a;
        p->f3c = -b;
        p->f44 = b;
        p->f40 = -a;
        p->f48 = a;
        if (p->f64 != 0) lbl_8032C110.f1a4(p->f30, &p->f3c, p->f54, p->f5c, p->f4c, p->f50);
        else lbl_8032C110.f1a0(p->f30, &p->f3c, p->f54, p->f5c, p->f4c, p->f50);
    }
}
}
