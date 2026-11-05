// fn_8005E354: NonMatching, SDIFF 0 / DIFF 78: FP regs in dist (dx/dy/dz) and l/m r6/r7 swap in the 752/756 loops; see hm-work/wA_80189BA4/STATUS.txt
#include "common.h"

extern "C" {
}
struct V3 { f32 x, y, z; };
struct M { u8 pad[8]; u8 r, g, b; u8 pad2[33]; u32 f44; };
struct L { u32 n; M **arr; };
struct O { u8 pad[108]; L *f108; u8 pad2[32]; u8 *f144; };
struct P { u8 pad[68]; f32 x, y, z; u8 pad2[552]; f32 px, py, pz; u8 pad3[12]; f32 *f656; u8 pad4[80]; O *f740; O *f744;
    u8 pad5[4]; O *f752; O *f756; u8 pad6[84]; f32 f844; u8 pad7[32]; f32 *f880; };
extern "C" {
extern f32 lbl_8035E4A8;
extern f64 lbl_8035E4D0, lbl_8035E4D8;
extern f32 lbl_8035E4E0;
extern f32 lbl_8035E4CC;
extern f32 lbl_8035E4E4;
extern u32 lbl_8035E4BC;
static inline f32 Sq(f32 x) {
    if (x > lbl_8035E4A8) {
        const f64 _half = lbl_8035E4D0;
        const f64 _three = lbl_8035E4D8;
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
static inline f32 nearR(P *p) { return p->f880 ? *p->f880 : (p->f656 ? *p->f656 : lbl_8035E4E0); }
static inline f32 farR(P *p) { return p->f656 ? *p->f656 : lbl_8035E4E0; }
static inline void setA(L *l, u32 a) {
    if (l) {
        M *m;
        u32 i;
        for (i = 0; i < l->n; i++) {
            m = l->arr[i];
            if (m->f44 & 0x10) {
                m->r = a; m->g = a; m->b = a;
                m->f44 |= lbl_8035E4BC;
            }
        }
    }
}
static inline L *getL(O *o) { L *l = o->f108; if (!l) l = (L *)(o->f144 + 28); return l; }
static inline f32 dist(P *p) { f32 dx = p->x - p->px; f32 dy = p->y - p->py; f32 dz = p->z - p->pz; return Sq(dx * dx + dy * dy + dz * dz); }
static inline f32 range(P *p) { return farR(p) - nearR(p); }
static inline void setB(O *o, u32 a) {
    if (o) {
        L *l = o->f108;
        if (l) {
            M *m;
            u32 i;
            for (i = 0; i < l->n; i++) {
                m = l->arr[i];
                if (m->f44 & 0x10) {
                    m->r = a; m->g = a; m->b = a;
                    m->f44 |= lbl_8035E4BC;
                }
            }
        }
    }
}
void fn_8005E354(P *p, f32 dt) {
    f32 d = dist(p);
    if (d > nearR(p)) {
        f32 t;
        p->f844 += dt;
        { f32 n1 = nearR(p); f32 f = farR(p); t = lbl_8035E4CC - (d - n1) / (f - nearR(p)); }
        if (p->f740) { L *l = getL(p->f740); setA(l, (u32)(lbl_8035E4E4 * t)); }
        if (p->f744) { L *l = getL(p->f744); setA(l, (u32)(lbl_8035E4E4 * t)); }
        {
            u32 a = (u32)(lbl_8035E4E4 * t);
            setB(p->f752, a);
            setB(p->f756, a);
        }
    }
}

} /* extern "C" */
