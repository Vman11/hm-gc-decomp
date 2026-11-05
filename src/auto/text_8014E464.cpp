#include "common.h"
extern "C" {
struct X { u8 pad[188]; s32 f188; u8 pad2[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(u32); };
struct Arg { u8 *p; u32 idx; u32 f8; f32 f12; u32 f16; u8 *el; u32 bit; };
struct E { X *x; u32 a; u32 b;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual int v11(Arg *); };
struct L { virtual void v0(X *, u32); virtual void v1(X *, u32); };
struct El { u16 f0; u8 pad[4]; u8 f6; u8 f7; u8 pad2[2]; s8 f10; u8 pad3; };
extern u32 lbl_802E6748[];
u32 fn_800C3740(u8 *);
void fn_800C3324(u32);
void *memset(void *, int, u32);
#define U32(o) (*(u32 *)(p + (o)))
int fn_8014E464(u8 *p, u32 a) {
    u32 *tbl;
    u32 m2;
    u8 *q;
    u8 *e;
    u32 mask;
    u8 removed;
    u32 i;
    u32 added;
    u32 old;
    u32 bits;
    Arg s;
    U32(3156) = fn_800C3740(p + 48);
    tbl = lbl_802E6748;
    mask = 0;
    m2 = 0;
    for (i = 0; i < 4; i++) {
        s8 c = ((El *)(p + 48))[i].f10;
        if (c == 0 || c == -3) mask |= 1 << i;
        else if (c == -1) m2 |= tbl[i];
    }
    if (m2) fn_800C3324(m2);
    old = U32(3152);
    removed = (old & ~mask) & 0xF;
    U32(3152) = mask;
    added = (mask & ~old) & 0xF;
    for (q = p, i = 0, bits = removed; bits; bits >>= 1, q += 764, i++) {
        if (bits & 1) {
            ((E *)(q + 96))->v0();
            if (*(L **)(p + 40)) (*(L **)(p + 40))->v1(((E *)(q + 96))->x, i);
            U32(28)--;
        }
    }
    bits = added;
    memset(&s, 0, 20);
    i = 0;
    s.el = 0;
    s.bit = 1;
    s.p = p;
    s.f8 = U32(12);
    s.f12 = *(f32 *)(p + 16);
    for (e = p, q = p; bits; bits >>= 1, e += 12, q += 764, i++) {
        if (bits & 1) {
            s.el = e + 48;
            s.bit = U32(3156) & (0x80000000 >> i);
            s.idx = i;
            if (((E *)(q + 96))->v11(&s) == 0) {
                if (*(L **)(p + 40)) (*(L **)(p + 40))->v0(((E *)(q + 96))->x, i);
                U32(28)++;
            }
        }
    }
    for (i = 0, q = p, e = p; i < 4; i++, q += 764, e += 12) {
        X *x = ((E *)(q + 96))->x;
        if (x->f188 != 0) {
            El *el = (El *)(e + 48);
            if (el->f10 == 0) {
                if (el->f6 > 250) el->f0 |= 64;
                if (el->f7 > 250) el->f0 |= 32;
            }
            ((E *)(q + 96))->x->v8(a);
        }
    }
    return 0;
}
}
