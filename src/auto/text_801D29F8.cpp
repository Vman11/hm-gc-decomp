// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T1D2 { T1D2 *f0; T1D2 *f4; T1D2 *f8; T1D2 *fc; T1D2 *f10; u8 pad14[4]; s32 f18; s32 f1c; };
struct C1D2 {
    virtual s32 has(s32);
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void w20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void sel(void *, T1D2 *);
};
struct N1D2 { C1D2 *obj; s32 on; N1D2 *next; };
struct P1D2 { u8 pad[0x88]; N1D2 *f88; u8 pad8c[0x314 - 0x8c]; T1D2 *f314; u8 pad318[0x32c - 0x318]; s32 f32c; };

static inline void Set1D2(P1D2 *p, T1D2 *x) {
    T1D2 *old;
    N1D2 *n;
    N1D2 *n2;
    old = p->f314;
    for (n = p->f88; n != NULL; n = n->next) {
        if (n->obj->has(0x13) != 0 && n->on != 0) n->obj->sel(p, x);
    }
    while (old != NULL) {
        T1D2 *t;
        old->f1c = 0;
        t = old;
        old = old->f10;
        t->f10 = 0;
    }
    if (x) {
        x->f1c = 1;
        x->f10 = 0;
    }
    p->f314 = x;
    {
        for (n2 = p->f88; n2 != NULL; n2 = n2->next) {
            if (n2->obj->has(0x13) != 0 && n2->on == 0) n2->obj->sel(p, x);
        }
    }
}

static inline T1D2 *Next1D2(T1D2 *n) {
    T1D2 *r = n->f4;
    if (r && n->f18) return r;
    r = n->f8;
    if (r) return r;
    for (r = n->f0; r != NULL; r = r->f0) {
        T1D2 *c = r->f8;
        if (c) { r = c; break; }
    }
    return r;
}
static inline T1D2 *Last1D2(T1D2 *x) {
    if (!x) return 0;
    while (x->f4 && x->f18) {
        x = x->f4;
        while (x->f8) x = x->f8;
    }
    return x;
}

static inline T1D2 *Prev1D2(T1D2 *n) {
    if (n->fc) return Last1D2(n->fc);
    return n->f0;
}

void fn_801D29F8(P1D2 *p, T1D2 *x) {
    T1D2 *prev;
    T1D2 *n;
    if (x == p->f314) return;
    if (p->f32c == 0) {
        Set1D2(p, x);
        return;
    }
    Set1D2(p, p->f314);
    for (n = p->f314; n != NULL;) {
        prev = n;
        n = Next1D2(n);
        if (n) {
            prev->f10 = n;
            n->f1c = 1;
        }
        if (n == x) break;
    }
    if (n != x) {
        Set1D2(p, p->f314);
        for (n = p->f314; n != NULL;) {
            prev = n;
            n = Prev1D2(n);
            if (n) {
                prev->f10 = n;
                n->f1c = 1;
            }
            if (n == x) break;
        }
    }
    if (n == x) return;
    Set1D2(p, p->f314);
}

} /* extern "C" */
