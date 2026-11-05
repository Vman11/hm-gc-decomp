#include "common.h"
extern "C" {
}
struct C80152B64 { u8 b[0x4c]; C80152B64(); };
extern "C" {
struct L1C { u8 b[0x1c]; };
struct F1C { u8 p[8]; u32 f8; };
struct Ops { u8 p[0x1c]; F1C *f1c; void (*f20)(void *, void *, L1C *); void (*f24)(void *, void *, u32, void *, void *, void *, void *, u32, void *); };
struct FT { u8 p[0x174]; void (*f174)(C80152B64 *, void *); };
extern FT lbl_803286D0;
extern u32 lbl_802A0C60[];
extern u8 lbl_8032F718[];
struct P { u8 p0[0x1f44]; u8 f1f44[0x1fb0 - 0x1f44]; void *f1fb0[(0x275c - 0x1fb0) / 4]; u32 f275c; u8 p2760[0x2a78 - 0x2760]; void *f2a78; u8 p2a7c[0x2aa0 - 0x2a7c]; void *f2aa0; u8 p2aa4[0x279f4 - 0x2aa4]; u32 f279f4; u8 p279f8[0x27a0c - 0x279f8]; u8 f27a0c[4]; };
void fn_8014CA08(L1C *);
void fn_800D9E98(u32);
void fn_800D9DF8(C80152B64 *, u32);
u32 fn_80155F9C(L1C *);
u32 fn_80155F60(L1C *);
void *fn_8021820C(void *, u32, u32);
void *fn_802181F8(void *);
void DCFlushRange(void *, u32);
void *fn_80157DD4(void *, L1C *, void *, int, void *);
void fn_800D6B8C(void *, void *, u16);
void fn_800D65A8(void *);
void fn_8016AE14(P *p, Ops *o, void *a, void *b, u32 n, void *c, void **tbl, void *d, u32 e) {
    L1C L;
    void *x; u32 k; u32 cnt; u32 st; void *buf; u32 j; u32 *q; u32 i2; u32 i; u32 sz;
    fn_8014CA08(&L);
    if (!(o->f1c->f8 & 1)) {
        if (p->f275c != 3) {
            p->f275c = 3;
            fn_800D9E98(p->f275c);
        }
        q = lbl_802A0C60;
        for (i = 0; i < n; i++) {
            k = *q;
            x = p->f2a78;
            C80152B64 obj;
            lbl_803286D0.f174(&obj, x);
            fn_800D9DF8(&obj, k);
            p->f1fb0[k] = x;
            q++;
        }
    }
    o->f20(a, b, &L);
    st = fn_80155F9C(&L);
    cnt = fn_80155F60(&L);
    sz = e * st;
    buf = fn_8021820C(p->f27a0c, sz, st);
    o->f24(a, b, n, c, p->f2aa0, lbl_8032F718, d, e, buf);
    c = fn_802181F8(p->f27a0c);
    DCFlushRange(buf, sz);
    void *v = fn_80157DD4(p->f1f44, &L, d, 0, p->f27a0c);
    i2 = 0;
    fn_800D6B8C(tbl[p->f279f4], v, e);
    for (; i2 < e; i2++) {
        for (j = 0; j < cnt; j++) *(volatile u16 *)0xCC008000 = i2;
    }
    fn_800D65A8(c);
}
}
