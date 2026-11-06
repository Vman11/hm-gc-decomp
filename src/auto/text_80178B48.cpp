#include "common.h"

extern "C" {

struct Q4 { f32 x0, y0, x1, y1; };
struct Fmt { u8 pad[0x1c]; };
struct Strm;
class Bat { public: virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void begin(Fmt *, u32, void *); virtual void flush(u32); };
struct Dev { u8 pad[0x29a0]; Bat bat; };
struct Y { u8 pad[0x46c]; u8 b46c; u8 pad46d[0x478 - 0x46d]; u32 f478; u32 f47c; u32 f480; u32 f484; };
struct B { u8 pad[0x20]; s32 f20, f24, f28, f2c; u8 pad30[0x124 - 0x30]; void *f124; u8 pad128[0x1934 - 0x128]; Dev *f1934; Y *f1938; };
struct C { s32 f0; u8 pad[0x14]; };
struct D { u8 pad[8]; u16 f8; u8 pada[6]; };
struct Tx { u8 pad[0x1c]; u16 f1c; u16 f1e; };
class E { public: u8 pad[0x2c]; u32 f2c; u8 pad30[0x14]; virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(int, int); };
struct Lst { u8 pad[4]; E **f4; };
class R { public: u8 pad[0x14]; virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5(); virtual void r6(); virtual void r7(); virtual void r8(); virtual void r9(); virtual void r10(); virtual void r11(); virtual void r12(); virtual void r13(); virtual Tx *tex(int); };
class Mp { public: u8 pad[0x10]; virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual R *get(u32); };
struct A { u8 pad[8]; u32 f8; u8 padc[0xc]; Lst *f18; u8 pad1c[0x38 - 0x1c]; u32 f38; u32 f3c; u8 pad40[0x54 - 0x40]; D *f54; u8 pad58[4]; Mp f5c; };

static u8 s18[0xc];
static u8 s24[0x138];
static u8 s5c[0x12c];
static u8 s188[0x70];
extern u32 lbl_8035AD5C;
extern f32 lbl_8035AD54;
extern f32 lbl_8035AD58;
extern f32 lbl_803647C8;
void fn_801576A0(Y *);
void fn_800D7CA4(u32, u8, u32, u32, u32, u32, u32);
void fn_80163BE4(B *);
void fn_80163BC0(B *);
void fn_8014CA08(Fmt *);
void fn_8014C8C8(Fmt *, u32, u32, u32);
void fn_8015D5A8(E *, B *, R *);
void fn_80158B8C(Bat *, Dev *, int, int);
void fn_80178510(A *a, B *b, C *c, D *d, void *q, E *e, void *cs, Q4 *m, u32 n);

void fn_80178B48(A *a, B *b, C *list, u32 cnt, void *q, void *cs, Q4 *m) {
    u32 verts;
    u32 pass;
    u32 left;
    int first;
    C *c;
    C *end;
    u32 nv;
    D *d;
    E *e = 0;
    Q4 rect;
    Fmt fmt;
    if (!(a->f8 & 0x10)) return;
    end = list + cnt;
    left = cnt;
    if (m == 0) {
        m = &rect;
        rect.x0 = (f32)b->f20;
        rect.y0 = (f32)b->f24;
        rect.x1 = (f32)b->f28;
        rect.y1 = (f32)b->f2c;
    }
    {
        Y *y = b->f1938;
        if (y->b46c) {
            y->b46c = 0;
            if (y->f47c == 0) fn_801576A0(y);
            fn_800D7CA4(0, y->b46c, 0, y->f478, y->f47c, y->f480, y->f484);
        }
    }
    fn_80163BE4(b);
    verts = cnt * 6;
    for (pass = 0; pass < a->f3c; pass++) {
        Bat *bat;
        c = list;
        first = 0;
        fn_8014CA08(&fmt);
        nv = verts;
        if (nv > 0x200) nv = 0x200;
        bat = &b->f1934->bat;
        fn_8014C8C8(&fmt, 0xA040, 0, 1);
        bat->begin(&fmt, nv, s188);
        lbl_8035AD5C = 0;
        while (c < end) {
            if (c->f0 < 0) { c++; continue; }
            d = &a->f54[c->f0];
            if (d->f8 != pass) { c++; continue; }
            if (!first) {
                R *r;
                Tx *t;
                first = 1;
                if (b->f124) {
                    e = (E *)b->f124;
                } else if (a->f38 == 0xFFFFFFFF) {
                    if (a->f8 & 0x100) e = (E *)s5c;
                    else e = (E *)s24;
                } else {
                    e = a->f18->f4[a->f38];
                    if ((a->f8 & 0x100) && !(e->f2c & 0x40)) e->e3(3, 0);
                }
                r = a->f5c.get(pass);
                fn_8015D5A8(e, b, r);
                t = r->tex(0);
                lbl_8035AD54 = lbl_803647C8 / (f32)(s32)t->f1c;
                lbl_8035AD58 = lbl_803647C8 / (f32)(s32)t->f1e;
            }
            fn_80178510(a, b, c, d, q, e, cs, m, left);
            verts -= 6;
            left--;
            c++;
        }
        {
            Dev *dev = b->f1934;
            Bat *bt = &dev->bat;
            bt->flush(lbl_8035AD5C);
            if (lbl_8035AD5C) fn_80158B8C(bt, dev, 0, 0);
        }
    }
    fn_80163BC0(b);
}

} /* extern "C" */
