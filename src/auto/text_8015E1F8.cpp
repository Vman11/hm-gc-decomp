#include "common.h"
extern "C" {
struct Obj;
struct E;
struct V4 { f32 x, y, z, w; };
struct Pool;
struct ItemBase { Obj *list[8]; u16 cnt; u8 pad22[0xe]; };
struct Item : ItemBase {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void Reset(Pool *, E *);
    u8 pad34[0x20];
    V4 *vec;
    void (Item::*draw)(Pool *);
};
struct Pool { u8 pad[0x23fc8]; Item items[128]; V4 vecs[128]; u32 cnt; u8 pad279cc[0x30]; V4 last; };
struct ObjX { u8 pad[0x40]; u16 id; };
struct C { u8 pad[0x2c]; u32 flags; u8 pad30[0xf8]; u32 passes; };
struct Lst { u32 count; C **arr; };
struct E { u32 f0; u8 pad4[0x20]; u16 flags; u16 key; u8 pad28[0x3c]; };
struct G { u8 pad[8]; s32 n; u8 padc[0x10]; Lst lst; u8 pad24[0x28]; E *ents; };
struct B { u8 pad[0xc]; u32 flags; u8 pad10[0x114]; C *over; u8 pad128[0x180c]; Pool *pool; void *f1938; };
struct It { void *p; f32 f; };

Obj *fn_801320AC(void *, u32);
void fn_8016BFF0(Pool *, Item *, C *, B *);
void fn_8015C998(C *, void *, u32);
void fn_8015D624(C *, B *, u32);
void fn_8015FD3C(Item *, Pool *);
void fn_8015C95C(C *, Pool *, u32);
void *fn_80164310(B *, Item *);
void fn_8015F4A0(Item *, B *, void *);
void fn_8016BC04(Pool *, B *);

static inline void SetV(V4 *v, It *it) { f32 c = it[2].f, b = it[1].f, a = it[0].f; v->x = a; v->y = b; v->z = c; v->w = c; }
static inline Item *Alloc(Pool *P, E *e) {
    Item *q;
    if (P->cnt >= 0x80) P->cnt = 0;
    P->items[P->cnt].vec = &P->vecs[P->cnt];
    q = &P->items[P->cnt++];
    return q;
}

void fn_8015E1F8(G *g, B *b_, Lst *lst, int x, It *it_, u32 n_) {
    u32 j;
    int drew;
    u32 i;
    Pool *P;
    It *it = it_;
    u32 k;
    E *first;
    C *c;
    u32 n = n_;
    E *e;
    B *b = b_;
    E *end;
    P = b->pool;
    drew = 0;
    if (lst == 0) lst = &g->lst;
    if (lst->count < 1) return;
    e = g->ents;
    end = e + g->n;
    while (e < end) {
        if (!(e->flags & 1)) { e++; continue; }
        k = e->key;
        first = e;
        c = lst->arr[k];
        if (c == 0) { e++; continue; }
        if (b->over) c = b->over;
        if (c->flags & 0x380) {
            if ((b->flags & 0x10) || ((b->flags & 0x20) && (c->flags & 0x300))) {
                do {
                    if (e->flags & 1) {
                        Item *q = Alloc(P, e);
                        u16 m;
                        q->Reset(P, e);
                        m = ((ObjX *)q->list[0])->id;
                        for (i = 0; i < n; i++) q->list[q->cnt++] = fn_801320AC(it[i].p, m);
                        SetV(q->vec, it);
                        fn_8016BFF0(P, q, c, b);
                    }
                    e++;
                } while (e < end && k == e->key);
                if (!(c->flags & 0x300)) continue;
                e = first;
            }
        }
        fn_8015C998(c, b->f1938, e->f0);
        j = 0;
        do {
            e = first;
            fn_8015D624(c, b, j);
            do {
                if (e->flags & 1) {
                    Item *q = Alloc(P, e);
                    u16 m;
                    void *r;
                    q->Reset(P, e);
                    m = ((ObjX *)q->list[0])->id;
                    for (i = 0; i < n; i++) q->list[q->cnt++] = fn_801320AC(it[i].p, m);
                    SetV(q->vec, it);
                    if ((c->flags & 0x300) && j == 0 && !(b->flags & 0x10)) {
                        fn_8016BFF0(P, q, c, b);
                        drew = 1;
                    }
                    fn_8015FD3C(q, P);
                    fn_8015C95C(c, P, j);
                    r = fn_80164310(b, q);
                    if (r) {
                        P->last = *q->vec;
                        fn_8015F4A0(q, b, r);
                    } else {
                        (q->*q->draw)(P);
                    }
                }
                e++;
            } while (e < end && k == e->key);
            j++;
        } while (j < c->passes);
    }
    if (drew) fn_8016BC04(b->pool, b);
}
}
