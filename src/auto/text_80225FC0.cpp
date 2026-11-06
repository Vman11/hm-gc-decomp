#include "common.h"

extern "C" {
}
struct N;
struct O;
struct X { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void sep(X *, O *); virtual void gone(X *); virtual void touch(N *, O *, void *, void *, int); u8 pad4[552 - 4]; u32 x552; };
struct R { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void pos(void *, int, int, int, int); u8 pad4[524 - 4]; struct S524 { u8 pad[192]; u32 *x192; u8 pad196[216 - 196]; int x216; } *x524; };
extern "C" {
struct V3 { f32 x, y, z; };
struct N { u8 pad[56]; void *x56; X *x60; };
struct Pr { N *a; N *b; };
struct Ent { R *obj; V3 off; };
struct C36 { void *a; void *b; };
struct O { u32 x0; Ent ent[662]; u8 x10596[4]; u32 n; Pr *pairs; u8 pad10608[8]; Pr *prev; Pr *cur; u8 x10624[4]; u32 x10628; u8 pad10632[4]; C36 *x10636; };
extern u8 *lbl_8035B65C;
void *memset(void *, int, u32);
void fn_8017EEE4(void *);
void fn_8019A75C(void *, void *);
void fn_8017B9C8(void *, int);
void fn_80190C48(N *, N *, void *);
void fn_8026079C(u32, V3 *);
static inline u32 Find(Pr *t, Pr *p) {
    u32 h = ((u32)p->a + (u32)p->b) % 331;
    u32 i = h;
    while (t[i].a != p->a || t[i].b != p->b) {
        i++;
        if (i >= 331) i = 0;
        if (i == h) { i = 331; break; }
    }
    return i;
}
static inline void Clear(Pr *t, u32 i) {
    if (i < 331) { t[i].a = 0; t[i].b = 0; }
}
static inline void Ins(Pr *t, Pr *p) {
    u32 h = ((u32)p->a + (u32)p->b) % 331;
    u32 i = h;
    while (t[i].a != 0) {
        i++;
        if (i >= 331) i = 0;
        if (i == h) return;
    }
    if (i < 331) { t[i].a = p->a; t[i].b = p->b; }
}
void fn_80225FC0(O *o) {
    N *na, *nb;
    void *c1, *c2;
    X *xa, *xb;
    u32 off, i, j;
    memset(o->cur, 0, 2648);
    fn_8017EEE4(o->x10596);
    fn_8019A75C(*(void **)(lbl_8035B65C + 12), o->x10596);
    for (i = 0, off = 0; i < o->n; off += 8, i++) {
        na = (*(Pr *)((u8 *)o->pairs + off)).a;
        nb = (*(Pr *)((u8 *)o->pairs + off)).b;
        if (na == nb) continue;
        if (na->x56 && nb->x56) {
            fn_8017B9C8(o->x10624, 1);
            fn_80190C48(na, nb, o->x10624);
            if (!o->x10628) continue;
            c1 = o->x10636->a;
            c2 = o->x10636->b;
        } else {
            c2 = c1 = 0;
        }
        xa = na->x60;
        xb = nb->x60;
        if (xa && xb) {
            u32 k = Find(o->prev, &(*(Pr *)((u8 *)o->pairs + off)));
            if (k >= 331) {
                xa->sep(xb, o);
                xb->sep(xa, o);
            } else {
                Clear(o->prev, k);
            }
            Ins(o->cur, &(*(Pr *)((u8 *)o->pairs + off)));
            if ((xa->x552 & 1) && (xb->x552 & 1)) {
                xa->touch(nb, o, c1, c2, 0);
                xb->touch(na, o, c2, c1, 1);
            }
        } else if (xa) {
            u32 k = Find(o->prev, &(*(Pr *)((u8 *)o->pairs + off)));
            if (k < 331) Clear(o->prev, k);
            Ins(o->cur, &(*(Pr *)((u8 *)o->pairs + off)));
            if (xa->x552 & 1) xa->touch(nb, o, c1, c2, 0);
        } else if (xb) {
            u32 k = Find(o->prev, &(*(Pr *)((u8 *)o->pairs + off)));
            if (k < 331) Clear(o->prev, k);
            Ins(o->cur, &(*(Pr *)((u8 *)o->pairs + off)));
            if (xb->x552 & 1) xb->touch(na, o, c2, c1, 1);
        }
    }
    for (i = 0; i < 331; i++) {
        if (o->prev[i].a && o->prev[i].b) {
            X *xa = o->prev[i].a->x60;
            X *xb = o->prev[i].b->x60;
            if (xa) xa->gone(xb);
            if (xb) xb->gone(xa);
        }
    }
    {
        Pr *t = o->prev;
        o->prev = o->cur;
        o->cur = t;
    }
    for (i = 0; i < 662 && o->ent[i].obj; i++) {
        V3 v, w;
        o->ent[i].obj->pos(&v, 0, 0, 0, 0);
        w = v;
        w.x += o->ent[i].off.x;
        w.y += o->ent[i].off.y;
        w.z += o->ent[i].off.z;
        fn_8026079C(o->ent[i].obj->x524->x192[o->ent[i].obj->x524->x216], &w);
        o->ent[i].obj = 0;
    }
}

}
