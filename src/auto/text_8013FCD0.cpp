#include "common.h"

extern "C" {

struct O_FCD0 { u8 pad_[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void f(u32, u32, u32, int *, int *, f32 *, f32);
};
struct E_FCD0 { u32 f0; u32 f4; u32 f8; u32 f12; };
struct D_FCD0 { u8 pad[20]; O_FCD0 o; u8 pad2[48 - 20 - sizeof(O_FCD0)]; f32 *f48; u8 pad3[4]; u32 *f56; u8 pad4[4]; E_FCD0 *f64; };
struct P_FCD0 { D_FCD0 *f0; u8 pad[4]; u32 f8; u32 f12; u8 pad2[4]; u32 f20; u32 f24; };
struct Out_FCD0 { u32 f0; f32 f4; };
extern "C" {
extern f32 lbl_80364358;
u32 fn_8013FCD0(P_FCD0 *p, Out_FCD0 *out, u32 max, u32 *remap, u32 nremap, f32 t) {
    O_FCD0 *o = &p->f0->o;
    E_FCD0 *s = p->f0->f64 + p->f8;
    Out_FCD0 *q;
    E_FCD0 *e;
    E_FCD0 *end;
    u32 n = 0;
    for (e = s, q = out, end = s + p->f12; e < end; e++) {
        int a, b;
        f32 fr;
        f32 *tab;
        if (n >= max) break;
        o->f(e->f0, e->f8, p->f20, &a, &b, &fr, t);
        tab = p->f0->f48;
        q->f4 = fr * (tab[b] - tab[a]) + tab[a];
        if (q->f4 > lbl_80364358) {
            u32 k = e->f12;
            u32 idx = k - p->f24;
            if (remap && idx < nremap && remap[idx]) q->f0 = remap[idx];
            else q->f0 = p->f0->f56[k];
            q++;
            n++;
        }
    }
    return n;
}
}

} /* extern "C" */
