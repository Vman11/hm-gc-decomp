// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 v[4]; } R4;
struct T;
struct E;
typedef void (E::*PMF)(T *);
struct E {
    u32 x0;
    u8 pad4[0x24 - 4];
    u16 flags;
    u16 id;
    u8 pad28[0x54 - 0x28];
    R4 *rect;
    PMF pmf;
};
struct T { u8 pad[0x279fc]; R4 rect; };
struct C { u8 pad[0x2c]; u32 flags; u8 pad30[0x128 - 0x30]; u32 n; };
struct B { u8 pad[0x124]; C *c; u8 pad128[0x1934 - 0x128]; T *t; void *x1938; };
struct Q { u32 n; C **arr; };
struct A { u8 pad[0x1c]; Q q; u8 pad24[0x4c - 0x24]; E *e; };

void fn_8015C998(C *, void *, u32);
void fn_8015D624(C *, B *, u32);
void fn_8016BFF0(T *, E *, C *, B *);
void fn_8015FD3C(E *, T *);
void fn_8015C95C(C *, T *, u32);
void *fn_80164310(B *, E *);
void fn_8015F4A0(E *, B *, void *);
void fn_8016BC04(T *, B *);

void fn_8015E62C(A *a, B *b0, u32 start, u32 count, Q *q) {
    T *t;
    u32 id;
    u32 i;
    B *b = b0;
    E *e;
    E *end;
    E *first;
    C *c;
    int dirty = 0;
    void *r;
    t = b->t;
    if (!q) q = &a->q;
    if (q->n < 1) return;
    e = a->e + start;
    end = e + count;
    while (e < end) {
        if (!(e->flags & 1)) { e++; continue; }
        id = e->id;
        first = e;
        c = q->arr[id];
        if (!c) { e++; continue; }
        if (b->c) c = b->c;
        fn_8015C998(c, b->x1938, e->x0);
        i = 0;
        do {
            e = first;
            fn_8015D624(c, b, i);
            do {
                if (e->flags & 1) {
                    if ((c->flags & 0x300) && i == 0) {
                        fn_8016BFF0(b->t, e, c, b);
                        dirty = 1;
                    }
                    fn_8015FD3C(e, t);
                    fn_8015C95C(c, t, i);
                    r = fn_80164310(b, e);
                    if (r) {
                        R4 *p = e->rect;
                        if (p) { t->rect.v[0] = p->v[0]; t->rect.v[1] = p->v[1]; t->rect.v[2] = p->v[2]; t->rect.v[3] = p->v[3]; }
                        fn_8015F4A0(e, b, r);
                    } else {
                        (e->*e->pmf)(b->t);
                    }
                }
                e++;
            } while (e < end && id == e->id);
            i++;
        } while (i < c->n);
    }
    if (dirty) fn_8016BC04(b->t, b);
}

} /* extern "C" */
