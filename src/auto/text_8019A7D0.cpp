#include "common.h"
struct V3 { f32 x, y, z; };
struct Q;
struct Cn { u8 pad[8]; void *f8; Q *q; Cn *next; u32 f20; };
struct P;
struct Ent { P *owner; V3 pos; f32 r; Ent *next; Cn *c; u32 f28; };
struct Q { u32 fl; u8 pad4[20]; V3 pos; f32 f36; u8 pad40[24]; Ent *lists[10];
    virtual void q0(); virtual void q1(); virtual void upd(); };
struct Nd { u8 pad[4]; V3 pos; f32 r; u8 pad20[4]; Cn *lk; Nd *next; };
struct Cb { u8 pad[8]; virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual void add(Ent *, Cn *, f32); };
struct P { u8 pad[8]; Ent *freeE; u8 pad12[8]; Cn *freeC; u8 pad24[40]; Cb *cb; u8 pad68[8]; s32 cur; Nd *lists[10]; };
extern f32 lbl_80364CC4;
extern "C" {
f32 fn_8010155C(V3 *, V3 *);
void fn_801951C4(Cn *, s32);
void fn_80188C80(void *, s32, Cn *);
}
static inline void sync(Q *q) { if (q->fl & 4) q->upd(); }
static inline void unlink(P *p, Q *q) {
    Ent **pp = &q->lists[p->cur];
    Ent *m = *pp;
    while (m) {
        if (m->owner == p) break;
        pp = &m->next;
        m = m->next;
    }
    if (m) {
        Cn *k;
        *pp = m->next;
        k = m->c;
        while (k) {
            Cn *nx = k->next;
            fn_801951C4(k, p->cur);
            k->next = p->freeC;
            p->freeC = k;
            k = nx;
        }
        m->owner = 0;
        m->next = p->freeE;
        p->freeE = m;
    }
}
static inline Ent *find(P *p, Q *q) {
    Ent *m;
    for (m = q->lists[p->cur]; m; m = m->next) if (m->owner == p) return m;
    return 0;
}
static inline Ent *popE(P *p) {
    Ent *e = p->freeE;
    if (!e) return 0;
    e->owner = p;
    p->freeE = e->next;
    return e;
}
static inline Cn *popC(P *p) {
    Cn *c = p->freeC;
    if (!c) return 0;
    p->freeC = c->next;
    return c;
}
static inline void pushE(P *p, Ent *e) {
    e->owner = 0;
    e->next = p->freeE;
    p->freeE = e;
}
static inline void link(P *p, Q *q) {
    Ent *e;
    Cn *c;
    {
        Ent *m;
        for (m = q->lists[p->cur]; m; m = m->next) if (m->owner == p) return;
    }
    e = popE(p);
    if (!e) return;
    c = popC(p);
    if (!c) { pushE(p, e); return; }
    sync(q);
    {
        f32 z, y, x;
        x = q->pos.x; y = q->pos.y; z = q->pos.z;
        e->owner = p;
        e->pos.x = x; e->pos.y = y; e->pos.z = z;
    }
    e->r = lbl_80364CC4;
    e->next = q->lists[p->cur];
    q->lists[p->cur] = e;
    e->c = c;
    e->f28 = 0;
    c->q = q;
    c->next = 0;
    c->f20 = 0;
    sync(q);
    p->cb->add(e, c, q->f36);
    e->r = e->r * e->r;
}
extern "C" void fn_8019A7D0(P *p, s32 slot, int flag) {

    Nd **row;
    Cn *lk;
    Nd *n;
    Q *q;
    Nd *nx;

    row = (Nd **)((u8 *)p + slot * 4);
    n = row[20];
    while (n) {
        lk = n->lk;
        nx = n->next;
        q = lk->q;
        q->fl &= ~(32 << slot);
        sync(q);
        if (fn_8010155C(&q->pos, &n->pos) >= n->r) {
            p->cur = slot;
            unlink(p, q);
            link(p, q);
        } else if (flag) {
            do { fn_80188C80(lk->f8, slot, lk); lk = lk->next; } while (lk);
        }
        n = nx;
    }
    row[20] = 0;
}

