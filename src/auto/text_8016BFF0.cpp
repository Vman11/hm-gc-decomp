#include "common.h"

struct Ent { u8 p0[16]; f32 f16; void *f20; u8 f24, f25, f26, f27; void *f28; u16 f32; u16 f34; u32 f36; };
struct Lt { u32 w[8]; u8 f32, f33, f34, f35; };
struct R {
    u8 p0[10884]; void *f10884; u8 p1[24]; void **f10912; u8 p2[4120]; void *tab[8477];
    Ent ents[2000]; u8 *f128944_x; u8 *buf; u8 p3[4]; Lt lts[512]; u32 n0; u32 n1; u32 n2; u8 p4[14852]; u8 lst[4];
};
struct Gx { u8 p0[6444]; u32 f6444; u8 p1[128]; u8 f6576, f6577, f6578; u8 p2[225]; u32 f6804; u32 f6808[8]; };
struct Mt { u8 p[16]; u32 f16; };
struct Mx { Mt *f0; u8 p[38]; u16 f42; union { u8 b[4]; u8 *p; } f44; };
struct Xs { u8 p[16]; u32 ids[8]; u32 f48; };
struct Ex { u8 p0[8]; u8 f8, f9, f10, f11; u8 p1[8]; Xs *f20; u8 p2[16]; f32 f40; u32 f44; u8 p3[12]; f32 f60; };
struct FT { void (*f0)(u8 *, void *); void (*f4)(u8 *); u8 pad[388]; f32 (*f396)(void *, u32); };
extern "C" {
extern FT lbl_803286D0;
void fn_800F9BEC(u8 *, Ent *);
}
inline int Lit(Mt *p) {
    if (!p) return false;
    if (p->f16 & 0x800) return true;
    return (u8)(((p->f16 >> 13) & 1) ^ 1);
}
inline u8 *Alloc(R *r, Ent *t, u32 n) {
    u8 *q;
    if (r->n1 + n > 4000) r->n1 = 0;
    t->f32 = r->n1;
    q = r->buf + r->n1 * 64;
    r->n1 += n;
    return q;
}
inline Lt *NewLt(R *r, Ent *t) {
    if (r->n2 >= 512) r->n2 = 0;
    t->f34 = r->n2;
    return &r->lts[r->n2++];
}
inline void SetLt(Lt *l, Gx *g) {
    u32 c = g->f6804;
    u32 k;
    l->f32 = c;
    l->f33 = g->f6576; l->f34 = g->f6577; l->f35 = g->f6578;
    for (k = 0; k < c; k++) l->w[k] = g->f6808[k];
}
inline u32 Hdr(Lt *l, Gx *g) {
    u32 c = g->f6804;
    l->f32 = c;
    l->f33 = g->f6576; l->f34 = g->f6577; l->f35 = g->f6578;
    return c;
}
extern "C" void fn_8016BFF0(R *r, Mx *m, Ex *e, Gx *g) {
    Ent *t;
    f32 f;
    Xs *s;
    u32 i;
    u8 *q;
    Lt *l;
    u32 c;
    u32 k;
    f = lbl_803286D0.f396(r->f10884, g->f6444);
    if ((e->f44 & 0x200) && e->f40 < f) return;
    if (r->n0 >= 2000) r->n0 = 0;
    t = &r->ents[r->n0++];
    t->f20 = e;
    t->f24 = e->f8; t->f25 = e->f9; t->f26 = e->f10; t->f27 = e->f11;
    t->f28 = m;
    if (Lit(m->f0) && !(e->f44 & 0x4000)) {
        l = NewLt(r, t);
        c = Hdr(l, g);
        for (k = 0; k < c; k++) l->w[k] = g->f6808[k];
    }
    s = e->f20;
    if (s && s->f48) {
        t->f36 = s->f48;
        q = Alloc(r, t, t->f36 + m->f42);
        for (i = 0; i < t->f36; s = (Xs *)((u8 *)s + 4), i++, q += 64) {
            void *v = r->tab[s->ids[0]];
            if (v) lbl_803286D0.f0(q, v);
            else lbl_803286D0.f4(q);
        }
    } else {
        t->f36 = 0;
        q = Alloc(r, t, m->f42);
    }
    if (m->f42) {
        for (i = 0; i < m->f42; q += 64, i++) {
            u32 ix;
            if (m->f42 <= 4) ix = m->f44.b[i]; else ix = m->f44.p[i];
            lbl_803286D0.f0(q, r->f10912[ix]);
        }
    }
    t->f16 = f + e->f60;
    fn_800F9BEC(r->lst, t);
}
