#include "common.h"

extern "C" {

typedef struct { u8 b[64]; } C80152B64;
typedef struct { u8 pad0[2]; u16 cnt; u8 *p; } Prim;
typedef struct {
    u8 pad0[16]; u32 fl; u32 f20; u8 b24, b25, b26, b27;
    u8 pad1c[76 - 28]; u8 *f76, *f80, *f84, *f88;
} Mesh;
typedef struct {
    u8 pad0[44]; u32 f44;
    u8 pad30[7900 - 48]; u32 f7900, f7904;
    u8 pad1ee4[8004 - 7908]; u8 o8004[8112 - 8004]; u32 a8112[(8624 - 8112) / 4]; u32 a8624[(10076 - 8624) / 4];
    u32 f10076; u8 pad2760[10872 - 10080]; u32 f10872; u8 pad2a7c[10912 - 10876]; u32 *f10912;
    u8 pad2aa4[16060 - 10916]; u32 f16060[(0x27A0C - 24 - 16060) / 4];
    u32 f31220; u8 pad[20]; u8 heap[4];
} Rend;
typedef struct { void *pad[93]; void (*set)(C80152B64 *, u32); } FnTab;
extern FnTab lbl_803286D0;
extern u32 lbl_803646D0;
typedef struct { u8 pad[0x40]; u32 slots[20]; void *A[33]; void *B[33]; } Tabs;
extern Tabs lbl_802A0C20;
void fn_800D9E98(u32);
void fn_800D9DF8(C80152B64 *, u32);
void fn_80167AF4(Rend *r, Mesh *m, u32 n, u8 *idx, u32 st, u32 a, Prim *pr, u32 ex);
void fn_802191F4(u8 *, u8 *, u8 *, u32, u32 *, void *, u32, u32, s32, s32);
void fn_802190B8(u8 *, u8 *, u32, u32 *, void *, u32, u32, s32);
u32 fn_80101A7C(u8);
void fn_80218758(void *, void *, void *, void *, void *, void *);
void __ct__9C80152B64Fv(C80152B64 *);
void fn_800D9E48(C80152B64 *, u32);
void *fn_8021820C(void *, u32, u32);
void fn_800D51E0(void);
void DCInvalidateRange(void *, u32);
void fn_80218DFC(u8 *, u8 *, u8 *, u32, u32 *, void *, u32, u32, s32, s32, s32);
void fn_80218BB0(u8 *, u8 *, u8 *, u32, u32 *, void *, u32, u32, s32, s32, s32);
void fn_80218A48(u8 *, u8 *, u32, u32 *, void *, u32, u32, s32, s32);
void fn_800D52E8(void);
void *fn_802181F8(void *);
s32 fn_801581F0(void *, Mesh *, u32, u32, u32, void *);
void fn_80217224(Prim *, u32, u8);
void fn_8021764C(Prim *, u32);
void fn_800D65A8(void *);

static inline u32 primCount(Prim *pr)
{
    u32 c = pr->cnt;
    switch (*pr->p & 0xF8) {
    case 0xB8: return c;
    case 0xA8: return c / 2;
    case 0xB0: return c - 1;
    case 0x90: return c / 3;
    case 0x98: case 0xA0: return c - 2;
    default: return 0;
    }
}

static inline u32 cvt(u8 b) { return fn_80101A7C(b); }
void fn_801683BC(Rend *r, Mesh *m, u32 n, u8 *idx, u32 st, u32 a, Prim *pr, u32 ex)
{
    u32 c;
    u32 sz;
    u32 c0, c1, c2;
    void *h;
    void *buf;
    u32 i;
    Tabs *tb = &lbl_802A0C20;
    u32 *sl;

    if ((r->f44 & 0x4000) || n > 9) {
        if (r->f10076 != 3) {
            r->f10076 = 3;
            fn_800D9E98(r->f10076);
        }
        sl = tb->slots;
        for (i = 0; i < n; i++) {
            C80152B64 o;
            u32 s = sl[i];
            u32 v = r->f10872;
            __ct__9C80152B64Fv(&o);
            lbl_803286D0.set(&o, v);
            fn_800D9DF8(&o, s);
            r->a8112[s] = v;
        }
        if (m->fl & 0x800) {
            for (i = 0; i < n; sl++, i++) {
                C80152B64 o;
                u32 s = *sl;
                u32 v = r->f10872;
                __ct__9C80152B64Fv(&o);
                lbl_803286D0.set(&o, v);
                fn_800D9E48(&o, s);
                r->a8624[s] = v;
            }
        }
        fn_80167AF4(r, m, n, idx, st, a, pr, ex);
        return;
    }
    c = primCount(pr);
    r->f7900 += c;
    r->f7904++;
    c0 = cvt(m->b24);
    c1 = cvt(m->b27);
    c2 = cvt(m->b25);
    {
        u32 t2, t1, t0;
        void **A = tb->A, **B = tb->B;
        t0 = *(volatile u8 *)&m->b24;
        t1 = *(volatile u8 *)&m->b25;
        t2 = *(volatile u8 *)&m->b27;
        fn_80218758(A[t0], B[t0], A[t1], B[t1], A[t2], B[t2]);
    }
    if (m->fl & 0x800) {
        sl = tb->slots;
        for (i = 0; i < n; i++) {
            C80152B64 o;
            u32 v = r->f10912[idx[i]];
            u32 s = sl[i];
            __ct__9C80152B64Fv(&o);
            lbl_803286D0.set(&o, v);
            fn_800D9E48(&o, s);
            r->a8624[s] = v;
        }
        sz = a * ((c1 + 4) * 3);
        buf = fn_8021820C(r->heap, sz, sz / a);
        fn_800D51E0();
        DCInvalidateRange(buf, sz);
        if (m->fl & 0x400) {
            for (i = 0; i < n; i++) r->f16060[i] = r->f10912[idx[i]];
            fn_802191F4(m->f80 + st * c2, m->f76 + c0 * (st * 3), m->f88 + c1 * (st * 3), a, r->f16060,
                        m->f84 + st * 2, 0, c0, c1, c2);
        } else {
            fn_802191F4(m->f80 + st * c2, m->f76 + c0 * (st * 3), m->f88 + c1 * (st * 3), a, r->f10912,
                        idx, 2, c0, c1, c2);
        }
        fn_800D52E8();
        h = fn_802181F8(r->heap);
        fn_801581F0(r->o8004, m, 10, st, ex, r->heap);
        fn_8021764C(pr, r->f31220);
        fn_800D65A8(h);
    } else {
        sz = a * 12;
        buf = fn_8021820C(r->heap, sz, 12);
        fn_800D51E0();
        DCInvalidateRange(buf, sz);
        if (m->fl & 0x400) {
            for (i = 0; i < n; i++) r->f16060[i] = r->f10912[idx[i]];
            fn_802190B8(m->f80 + st * c2, m->f76 + c0 * (st * 3), a, r->f16060, m->f84 + st * 2, 0, c0, c2);
        } else {
            fn_802190B8(m->f80 + st * c2, m->f76 + c0 * (st * 3), a, r->f10912, idx, 2, c0, c2);
        }
        fn_800D52E8();
        h = fn_802181F8(r->heap);
        fn_801581F0(r->o8004, m, 10, st, ex, r->heap);
        fn_8021764C(pr, r->f31220);
        fn_800D65A8(h);
    }
}
}
