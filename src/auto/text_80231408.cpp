#include "common.h"

extern "C" {
struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 Cross(const V3 &a, const V3 &b) {
    V3 t; t.x = a.y * b.z - a.z * b.y; t.y = a.z * b.x - a.x * b.z; t.z = a.x * b.y - a.y * b.x; return t;
}
extern f32 lbl_80365DF4;
extern f32 lbl_80365DF8;
extern u32 lbl_80365E20;
extern u32 lbl_80365E24;
extern u32 lbl_80365E28;
extern f32 lbl_80365E2C;
extern f32 lbl_80365E30;
extern f32 lbl_80365E34;
extern V3 lbl_80357E84;
struct T { u8 pad[0x10]; u32 f10; u8 pad14[0xc]; u32 f20; };
struct Sub { u32 f0; f32 f4; u8 pad8[0x28]; u32 f30; };
struct L { u8 pad[8]; Sub *f8; };
struct Ob0 { u32 f0; u16 f4; u8 pad6[0x2a]; T *f30; u8 pad34[0x34]; };
class Ob : public Ob0 { public: virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v34(f32); u8 pad6c[0x18]; L *f84; u32 f88; u8 pad8c[0xc]; u32 f98; f32 f9c; u8 pada0[0xc]; f32 fac; Sub *fb0; };
struct FT { u8 pad[0xc]; void (*f0c)(u32, V3 *); u8 pad10[0xc]; void (*f1c)(u32, V3 *, V3 *, V3 *); u8 pad20[0x10]; void (*f30)(u32, V3 *, V3 *); };
extern FT lbl_803286D0;
struct S334 { u8 pad[8]; void *f8; };
extern S334 *lbl_8035B334;
struct G { u8 pad[0xc]; void *fc; };
extern G *lbl_8035B65C;
class O { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void o13(V3 *, V3 *, V3 *, V3 *, int); virtual void o14(V3 *, V3 *, V3 *, V3 *, int); virtual void v15(); virtual void v16(); virtual void v17(); virtual void o18(); virtual void v19(); virtual void o20();
    u8 pad[0x260]; f32 *f264; f32 f268; s32 f26c; u8 pad270[0x44]; u32 f2b4; u32 f2b8; s32 f2bc; Ob *f2c0; s32 f2c4; s32 f2c8; };
void fn_80101820(V3 *);
void fn_80190C98(Ob *);
void fn_8019B7E8(void *, Ob *);
void fn_80196688(Ob *);
Ob *fn_8022ECB4(void *, u32);

#define VS(v) (*(volatile f32 *)&(v))
#define VK(v) (*(volatile f32 *)&(v))
static inline u8 Eq(const V3 &a, const V3 &b) {
    u8 r = 0;
    if (a.x == b.x && a.y == b.y && a.z == b.z) r = 1;
    return r;
}

static inline void SetPos(Ob *e, V3 *p) {
    T *t = e->f30;
    if (t != 0) {
        lbl_803286D0.f0c(t->f10, p);
        t->f20 |= lbl_80365E20;
        fn_80190C98(e);
    }
}

static inline Sub *GetSub(Ob *t) {
    return t->f84 == 0 ? 0 : t->f84->f8;
}

static inline void Reset(Sub *x) {
    if (x->f30 & 1) {
        x->f4 = lbl_80365DF8;
        x->f0 &= ~0x18;
    }
}

static inline void Activate(O *o, Ob *t) {
    t->f0 |= lbl_80365E24;
    if (t->f88 == 0) fn_8019B7E8(lbl_8035B65C->fc, t);
    o->f2c4 = 1;
}

void fn_80231408(O *o, int flag, V3 *dir) {
    V3 d, a, s, u, p, q, w;
    o->o18();
    o->o20();
    o->f268 = o->f264 ? *o->f264 : lbl_80365E2C;
    if (o->f2c8 != 0) {
        Ob *t = o->f2c0;
        if (t != 0 && o->f2c4 != 0) {
            u16 ty = t->f4;
            if (ty == 3 || ty == 2) t->f0 &= ~0x800;
            o->f2c4 = 0;
        }
        o->f26c = 0;
        return;
    }
    if (dir == 0) {
        o->o13(0, &a, 0, 0, 0);
        a.x = -a.x;
        a.y = -a.y;
        a.z = -a.z;
        d = a;
    } else {
        d = *dir;
    }
    if (o->f2c0 != 0) {
    if (flag != 0) {
        o->f2c4 = 0;
        o->f26c = 0;
        return;
    }
    o->o13(&p, 0, 0, 0, 0);
    p.x = lbl_80365E30 * d.x + p.x;
    p.y = lbl_80365E30 * d.y + p.y;
    p.z = lbl_80365E30 * d.z + p.z;
    SetPos(o->f2c0, &p);
    {
    f32 ax = VK(d.x), ay = VK(d.y), az = VK(d.z);
    VS(a.x) = ax; VS(a.y) = ay; VS(a.z) = az;
    f32 z = VK(lbl_80365DF8);
    VS(u.x) = z;
    VS(u.y) = z;
    f32 w = VK(lbl_80365DF4);
    VS(u.z) = w;
    u8 r = 0;
    if (ax == z && ay == z && az == w) r = 1;
    if (r) {
        VS(u.x) = VK(lbl_80365DF4);
        f32 z = VK(lbl_80365DF8);
        VS(u.y) = z;
        VS(u.z) = z;
    }
    }
    s = Cross(a, u);
    fn_80101820(&s);
    u = Cross(s, a);
    fn_80101820(&u);
    a.x = -a.x; a.y = -a.y; a.z = -a.z;
    s.x = -s.x; s.y = -s.y; s.z = -s.z;
    {
        Ob *e = o->f2c0;
        T *t = e->f30;
        if (t != 0) {
            lbl_803286D0.f1c(t->f10, &s, &a, &u);
            t->f20 |= lbl_80365E20;
            fn_80190C98(e);
        }
    }
    if (o->f2c0->f4 == 3) {
        Ob *t;
        o->o13(&q, 0, 0, 0, 0);
        SetPos(o->f2c0, &q);
        t = o->f2c0;
        Activate(o, t);
        if (GetSub(t) != 0) Reset(GetSub(t));
        if (t->fb0 != 0) Reset(t->fb0);
        t->v34(lbl_80365E34);
    } else if (o->f2c0->f4 == 2) {
        Ob *t = o->f2c0;
        Activate(o, t);
        if (GetSub(t) != 0) Reset(GetSub(t));
    } else {
        o->f26c = 0;
    }
    } else {
        o->f26c = 0;
        if (o->f2bc != 0 || flag == 0) {
            void *list = lbl_8035B334->f8;
            u32 off;
            u32 i;
            for (i = 0, off = 0; i < o->f2b8; off += 8, i++) {
                Ob *e = fn_8022ECB4(list, o->f2b4 + off);
                if (e != 0) {
                    T *t;
                    o->o13(&w, 0, 0, 0, 0);
                    SetPos(e, &w);
                    t = e->f30;
                    if (t != 0) {
                        lbl_803286D0.f30(t->f10, &d, &lbl_80357E84);
                        t->f20 |= lbl_80365E20;
                        fn_80190C98(e);
                    }
                    e->f9c = lbl_80365DF8;
                    e->f98 &= ~6;
                    e->fac = lbl_80365DF8;
                    fn_80196688(e);
                    e->f0 |= lbl_80365E24;
                    e->f98 |= lbl_80365E28;
                }
            }
        }
    }
}

}
