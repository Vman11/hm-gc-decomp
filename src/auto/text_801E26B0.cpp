#include "common.h"

struct C801E26A4 { C801E26A4 *next; C801E26A4 *prev; void *data; C801E26A4(); };
struct C801E2698 { C801E2698 *next; C801E2698 *prev; void *data; C801E2698(); };
template <class N> struct L { N *head; N *tail; };
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct LA { u8 pad[0x3c]; u8 a[0x18]; u8 b[0x18]; };
struct LB { u8 pad[0x78]; u8 a[0x18]; u8 b[0x18]; };
struct LX { u8 pad[4]; u8 a[0x18]; u8 b[0x18]; };
struct LY { u8 pad[0x90]; u8 a[0x18]; u8 b[0x18]; };
struct LZ { u8 pad[0x2dc]; u8 d[0x18]; };
struct Own { u8 pad3[0xb8]; LX *fb8; u8 pad4[0xd0 - 0xbc]; LZ **fd0; LY *fd4; };
struct OA { u8 pad[0x14]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); };
struct OBb { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); };
struct OB : OBb { s32 type; };
struct P {
    Own *f0;
    s32 f4;
    f32 f8;
    f32 fc;
    f32 f10;
    u32 f14;
    void *f18;
    C801E26A4 *poolA;
    L<C801E26A4> usedA;
    L<C801E26A4> freeA;
    u32 nA;
    u32 capA;
    C801E2698 *poolB;
    C801E2698 *poolC;
    void *f40;
    void *f44;
    L<C801E2698> usedB;
    L<C801E2698> freeB;
    L<C801E2698> usedC;
    L<C801E2698> freeC;
    u32 nB;
    u32 capB;
    s32 f70;
    s32 f74;
};

extern "C" {
extern void *lbl_8035B070;
extern f32 lbl_803652D4;
extern f32 lbl_803652D8;
void __dla__FPv(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800FAEF8(R *);
u32 fn_800FB33C(R *);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, char *);
f32 fn_800FB2E0(R *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
u32 fn_8019556C(void *);
void *fn_800F8274(void *, char *);
}

#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);

template <class N> static inline void pushFront(L<N> *l, N *n) {
    if ((n->next = l->head) != 0) l->head->prev = n; else l->tail = n;
    l->head = n;
    n->prev = 0;
}
template <class N> static inline void pushBack(L<N> *l, N *n) {
    if ((n->prev = l->tail) != 0) l->tail->next = n; else l->head = n;
    l->tail = n;
    n->next = 0;
}
template <class N> static inline N *popFront(L<N> *l) {
    N *n = l->head;
    if (n) {
        if ((l->head = n->next) != 0) l->head->prev = 0; else l->tail = 0;
    }
    return n;
}
template <class T> static inline void *Find(T *l, char *a, char *b) {
    if (b == 0 || b[0] == 0) return fn_800F9398(l->a, a);
    return fn_800F9788(l->b, b, a);
}
static inline void allocA(P *p) {
    u32 i;
    ALLOC(lbl_8035B070, p->poolA, new C801E26A4[p->capA])
    for (i = 0; i < p->capA; i++) pushFront(&p->freeA, &p->poolA[i]);
}
static inline void allocBC(P *p) {
    u32 i;
    ALLOC(lbl_8035B070, p->poolB, new C801E2698[p->capB])
    ALLOC(lbl_8035B070, p->poolC, new C801E2698[p->capB])
    for (i = 0; i < p->capB; i++) {
        pushFront(&p->freeB, &p->poolB[i]);
        pushFront(&p->freeC, &p->poolC[i]);
    }
}

#pragma opt_loop_invariants off
extern "C" void fn_801E26B0(P *p, Own *o, R *r) {
    char b[8];
    char a[8];
    u32 tok;
    u32 i;
    u32 n;
    if (p->f70) {
        if (p->poolA) {
            p->usedA.head = 0;
            p->usedA.tail = 0;
            if (p->poolA) __dla__FPv((u8 *)p->poolA - 16);
        }
        if (p->poolB) {
            p->usedB.head = 0;
            p->usedB.tail = 0;
            if (p->poolB) __dla__FPv((u8 *)p->poolB - 16);
        }
        if (p->poolC) {
            p->usedC.head = 0;
            p->usedC.tail = 0;
            if (p->poolC) __dla__FPv((u8 *)p->poolC - 16);
        }
        p->f70 = 0;
        p->f74 = 0;
        p->f4 = 30;
        p->fc = p->f8 = lbl_803652D4;
        p->poolA = 0;
        p->poolB = 0;
        p->poolC = 0;
        p->f40 = 0;
        p->f44 = 0;
        p->nA = 0;
        p->capA = 0;
        p->nB = 0;
        p->capB = 0;
        p->f0 = 0;
        p->f14 = 0;
        p->f18 = 0;
        p->f10 = lbl_803652D8;
    }
    p->f0 = o;
    p->f70 = 1;
    fn_800FAEF8(r);
    while ((tok = r->next()) != 6) {
        switch (tok) {
        case 0x3b:
            p->f4 = fn_800FB33C(r);
            break;
        case 0x3e:
            p->capA = fn_800FB33C(r);
            if (p->capA) allocA(p);
            break;
        case 0x3c:
            n = fn_800FADA8(r);
            if (p->capA == 0) {
                p->capA = n;
                if (p->capA) allocA(p);
            }
            for (i = 0; i < n; i++) {
                OA *ob;
                fn_800FB064(r, a);
                fn_800FB064(r, b);
                ob = (OA *)Find((LA *)o, a, b);
                if (p->nA < p->capA) {
                    C801E26A4 *nd = popFront(&p->freeA);
                    nd->data = ob;
                    pushBack(&p->usedA, nd);
                    p->nA++;
                    if (p->f74) ob->v6();
                }
            }
            fn_800FAEA0(r);
            break;
        case 0x3f:
            p->capB = fn_800FB33C(r);
            if (p->capB) allocBC(p);
            break;
        case 0x3d:
            n = fn_800FADA8(r);
            if (p->capB == 0) {
                p->capB = n;
                if (p->capB) allocBC(p);
            }
            for (i = 0; i < n; i++) {
                OB *ob;
                fn_800FB064(r, a);
                fn_800FB064(r, b);
                ob = (OB *)Find((LB *)o, a, b);
                if (p->nB < p->capB) {
                    C801E2698 *nd = popFront(&p->freeB);
                    nd->data = ob;
                    pushBack(&p->usedB, nd);
                    p->nB++;
                    switch (ob->type) {
                    case 8: case 13: case 15: case 18: case 23: case 24: case 28:
                        nd = popFront(&p->freeC);
                        nd->data = ob;
                        pushBack(&p->usedC, nd);
                        break;
                    }
                    if (p->f74) ob->v6();
                }
            }
            fn_800FAEA0(r);
            break;
        case 0x40:
            p->f8 = fn_800FB2E0(r);
            p->fc = p->f8;
            break;
        case 0x41:
            fn_800FB064(r, a);
            fn_800FB064(r, b);
            p->f40 = Find(o->fb8, a, b);
            break;
        case 0x42:
            fn_800FB064(r, a);
            fn_800FB064(r, b);
            p->f44 = Find(o->fb8, a, b);
            break;
        case 0x43:
            p->f10 = fn_800FB2E0(r);
            break;
        case 0x44:
            fn_800FB064(r, a);
            fn_800FB064(r, b);
            p->f14 = fn_8019556C(Find(o->fd4, a, b));
            fn_800FB064(r, b);
            fn_800FB064(r, a);
            p->f18 = fn_800F8274(fn_800F9398((*o->fd0)->d, b), a);
            break;
        default:
            r->err(30);
            break;
        }
    }
}
