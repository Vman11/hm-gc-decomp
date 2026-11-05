#include "common.h"
struct V3 { f32 x, y, z; };
struct V4 { f32 x, y, z, w; };
struct Ed { V3 *a; V3 *b; };
struct Tri { Ed *e0; Ed *e1; };
struct E { u8 pad[8]; Tri *t; u8 pad2[12]; };
struct S { u8 pad[24]; u32 n; E *arr; };
struct B { u8 pad[104]; virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void *mtx(); };
struct H { V3 *a; V3 *b; V3 *c; u16 f12; u8 f14; u8 pad; V4 pl; u8 pad2[44 - 32]; };
struct Q { u8 pad[28]; V3 *p0; V3 *p1; u8 pad2[120 - 36]; u32 cnt; u8 pad3[4]; H *hits; };
extern "C" {
void fn_80103F08(void *m, V3 *v, V3 *o);
void fn_80104004(void *m, V3 *v, V3 *o);
s32 fn_801A4044(E *e, V3 *a, V3 *b, f32 *t);
s32 fn_800FC4A0(Q *q, f32 t);
void fn_800FF854(V4 *pl, V3 *a, V3 *b, V3 *c);
void fn_8018B500(Q *q, s32 k);

static inline void xf(B *b, V3 *v, V3 *o) {
    void *m = b->mtx();
    if (m) fn_80103F08(m, v, o);
    else { o->x = v->x; o->y = v->y; o->z = v->z; }
}
static inline void xf2(B *b, V3 *v, V3 *o) {
    void *m = b->mtx();
    if (m) fn_80104004(m, v, o);
    else { o->x = v->x; o->y = v->y; o->z = v->z; }
}

#pragma opt_strength_reduction off
void fn_801A3DA8(S *s, B *b, Q *q) {
    V3 a, c;
    E *arr;
    H *h;
    u32 off;
    u32 i;
    u32 n;
    xf(b, q->p0, &a);
    xf(b, q->p1, &c);
    arr = s->arr;
    n = s->n;
    for (i = 0, off = 0; i < n; off += sizeof(E), i++) {
        f32 t;
        if (fn_801A4044((E *)((u8 *)arr + off), &a, &c, &t) && fn_800FC4A0(q, t)) {
            V3 p0, p1, p2;
            V4 pl;
            Tri *tr;
            E *ea = s->arr;
            V3 *va, *vb, *vc;
            h = &q->hits[q->cnt];
            tr = ((E *)((u8 *)ea + off))->t;
            vb = tr->e0->b;
            vc = tr->e1->b;
            va = tr->e0->a;
            h->f14 = 0;
            h->f12 = 0;
            h->a = va;
            h->b = vb;
            h->c = vc;
            xf2(b, ((E *)((u8 *)ea + off))->t->e0->a, &p0);
            xf2(b, ((E *)((u8 *)s->arr + off))->t->e0->b, &p1);
            xf2(b, ((E *)((u8 *)s->arr + off))->t->e1->b, &p2);
            fn_800FF854(&pl, &p1, &p0, &p2);
            h->pl.x = pl.x; h->pl.y = pl.y; h->pl.z = pl.z; h->pl.w = pl.w;
            fn_8018B500(q, 4);
        }
    }
}
}
