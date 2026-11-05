#include "common.h"
extern "C" {
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct P0 { u8 pad_[208]; virtual void s0(); virtual void s1(); virtual void s2(); virtual int v3(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern f32 lbl_80363A78;
extern volatile f32 lbl_80363A7C, lbl_80363A80, lbl_80363A68;
void *memset(void *, int, unsigned long);
void fn_800FAEF8(R *);
u32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void fn_80118694(void *, u32, int);
struct ST { u32 a, b, c; f32 d, e; };
int fn_8011F5C0(void *, ST *);
struct DD { u32 a; int b; u32 c; u32 d; f32 e, f, g, h, i; };
void fn_80118B5C(void *, DD *);
struct E8 { u32 a, b; };
struct E64 { u8 b[64]; };
struct P { u32 n0, n1, n2; u8 pad[0x18 - 12]; u32 v18; u8 pad2[0x50 - 0x1c]; E8 *e80; u8 pad3[0xa8 - 0x54]; u32 tot, sub; u8 pad4[0xd0 - 0xb0]; u32 vp_; E64 *e212; u8 b216[4]; };
static inline void upd(P *p) { p->tot = p->n0 + p->n1 + p->n2; }
static inline void upd2(P *p) { p->sub = p->n1 + p->n2; }
static inline void fill(P *p, ST *st, u32 i) {
    for (; i < p->n1; i++) {
        DD d;
        memset(&d, 0, sizeof(DD));
        *(volatile u32 *)&d.c = p->e80[i].a;
        *(volatile int *)&d.b = 1;
        *(volatile u32 *)&d.a = p->v18;
        u32 n = i + p->n0;
        *(volatile f32 *)&d.h = st->d;
        *(volatile u32 *)&d.d = n;
        *(volatile f32 *)&d.i = st->e;
        *(volatile f32 *)&d.e = lbl_80363A7C;
        *(volatile f32 *)&d.f = lbl_80363A80;
        *(volatile f32 *)&d.g = lbl_80363A68;
        fn_80118B5C(&p->e212[i], &d);
    }
}
int fn_80117434(P *p, void *u, R *r) {
    ST st;
    u32 t;
    int res;
    memset(&st, 0, sizeof(ST));
    memset(&st, 0, sizeof(ST));
    st.e = lbl_80363A78;
    fn_800FAEF8(r);
    while ((t = r->v5()) != 6) {
        switch (t) {
        case 59: p->n0 = fn_800FB33C(r); upd(p); break;
        case 60: p->n1 = fn_800FB33C(r); upd(p); upd2(p); break;
        case 61: p->n2 = fn_800FB33C(r); upd(p); upd2(p); break;
        case 62: st.c = fn_800FB33C(r); break;
        case 63: st.d = fn_800FB2E0(r); break;
        case 64: st.e = fn_800FB2E0(r); break;
        default: r->v4(30); break;
        }
    }
    fn_80118694(p->b216, p->tot * 2, 255);
    res = fn_8011F5C0(p, &st);
    if (!res) {
        res = ((P0 *)p)->v3();
        if (!res) {
            fill(p, &st, 0);
        }
    }
    return res;
}
}
