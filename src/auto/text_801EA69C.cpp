// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Obj { u32 f0; u16 type; };
struct L { u32 f0; u32 *arr; };
struct X90 { u8 pad[0x1c]; L l; };
struct X { u8 pad[0x6c]; L *l; u8 pad70[0x20]; X90 *f90; };
struct Ent { Obj *a; Obj *b; u32 c, d; };
struct It { u16 k; u8 pad2[0x2a]; };
struct Ent2 { u8 pad[0xc]; It it[1]; };
struct Cur { u32 f0; s32 idx; };
struct E { u8 pad[0x7c]; Cur *cur; Ent2 *e2; u8 pad84[0xc]; Ent *ents; };
struct TB { u32 f0; u32 f4; u8 pad8[0xc]; };
struct T : TB {
    virtual void v0();
    virtual void v1();
    u8 pad18[0xc];
    Obj *f24;
    Obj *f28;
    u32 f2c;
    Obj *f30;
    u32 f34;
    s32 f38;
    s32 f3c;
    s32 f40;
};
X *fn_801955D8(Obj *);

static inline Obj *A(T *t) { return t->f28 ? t->f28 : t->f24; }
static inline L *GetL(X *x) { return x->l == 0 ? &x->f90->l : x->l; }
static inline u32 Key(E *e, X *x) { return GetL(x)->arr[*(u16 *)((u8 *)e->e2 + e->cur->idx * 44 + 12)]; }

void fn_801EA69C(T *t, int a, int b, int c, E *e) {
    if (t->f40 != 0) return;
    if (!(t->f4 & 1)) return;
    if (A(t)) {
        if (t->f30 == 0 && t->f2c == 0) {
            if (e->ents[e->cur->idx].a == A(t)) t->f3c = 1;
        } else if (t->f30 && t->f2c) {
            if (e->ents[e->cur->idx].a == A(t) && e->ents[e->cur->idx].b == t->f30) {
                X *x = fn_801955D8(A(t));
                if (t->f2c == Key(e, x)) t->f3c = 1;
            }
        } else if (t->f30 == 0 && t->f2c) {
            if (e->ents[e->cur->idx].a == A(t)) {
                X *x = fn_801955D8(A(t));
                if (t->f2c == Key(e, x)) t->f3c = 1;
            }
        } else {
            if (e->ents[e->cur->idx].a == A(t) && e->ents[e->cur->idx].b == t->f30) t->f3c = 1;
        }
    } else if (t->f2c) {
        Obj *p = e->ents[e->cur->idx].a;
        if (p == 0) return;
        if (p->type != 2 && p->type != 3) return;
        {
            X *x = fn_801955D8(p);
            if (t->f2c == Key(e, x)) t->f3c = 1;
        }
    } else if (t->f30) {
        if (e->ents[e->cur->idx].b == t->f30) t->f3c = 1;
    } else {
        if (e->ents[e->cur->idx].a != 0) t->f3c = 1;
    }
    if (t->f3c && t->f38) {
        if (t->f34 & 4) { t->v1(); t->f40 = 1; }
    } else if (t->f3c && !t->f38) {
        if (t->f34 & 1) { t->v1(); t->f40 = 1; }
    }
}

} /* extern "C" */
