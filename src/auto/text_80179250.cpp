// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C4 { u8 r, g, b, a; };
struct G0;
struct B { void *f0; void *f4; C4 c8; C4 c12; C4 c16; C4 c20; u32 f24; u32 f28; u32 f32; u8 pad36[56]; };
struct Glob { u8 pad[0x2c]; u32 f2c; };
struct R { u8 pad[20]; virtual void r0(); virtual void r1(); virtual void r2(int, int, int, int); virtual void r3(); virtual void r4(void *); virtual void r5(); virtual void r6(); virtual void r7(); virtual void r8(); virtual void r9(); virtual void r10(); virtual void r11(); virtual void r12(void *, G0 *, char *); };
struct G0 { u8 pad[16]; virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9(); virtual void b10(); virtual R *mk(int); };
struct D { char name[8]; u32 f8; u32 fc; u32 f10; f32 f14; f32 f18; u8 f1c[16]; u32 f2c; u32 f30; u32 f34; u32 f38; u32 f3c; u32 f40; char f44[8]; u32 f4c; u32 f50; u8 f54; u8 f55; u8 f56; u8 f57; };
struct Obj { char name[8]; u32 f8; u32 fc; u32 f10; u32 f14; u32 f18; f32 f1c; f32 f20; u8 f24[20]; u32 f38; u32 f3c; u32 f40; u32 f44; u32 f48; u32 f4c; u32 f50; u32 f54; u8 f58; u8 f59; u8 f5a; u8 f5b; G0 sub; };
extern Glob lbl_8032FF24;
extern Glob lbl_8033005C;
extern const u32 lbl_803647B0;
extern const char lbl_803647D0[7];
void fn_800F6E88(void *, void *);
void fn_80121D44(void *, void *);
void fn_8012FD28(B *);
void fn_80121658(C4 *);
void fn_80130B4C(void *, B *);
void fn_80138050(G0 *, void *, int, int, int, int, int, int);
void *memset(void *, int, unsigned long);
int fn_800E8F6C(char *s, const char *fmt, ...);
void fn_80179250(Obj *o, void *a2, u32 a3, D **pd, u32 *pp) {
    R *r;
    D *d;
    u32 i;
    u32 n;
    char buf[12];
    o->f14 = a3;
    o->f18 = a3 + 0x14;
    d = *pd;
    o->f8 = d->f8;
    o->fc = d->fc;
    o->f10 = d->f10;
    o->f1c = d->f14;
    o->f20 = d->f18;
    fn_800F6E88(o, d);
    fn_80121D44(o->f24, d->f1c);
    o->f38 = d->f2c;
    o->f3c = d->f30;
    o->f40 = d->f34;
    o->f44 = d->f38;
    o->f48 = d->f3c;
    o->f4c = d->f40;
    o->f50 = d->f50;
    o->f58 = d->f54;
    o->f59 = d->f55;
    o->f5a = d->f56;
    o->f5b = d->f57;
    *pd = (D *)((u8 *)*pd + 0x58);
    o->f54 = *pp;
    *pp = *pp + o->fc * 16;
    if (o->f38 == 0xFFFFFFFF) {
        B b;
        fn_8012FD28(&b);
        if (!(lbl_8032FF24.f2c & 1)) {
            C4 col;
            fn_80121658(&col);
            memset(&b, 0, sizeof(B));
            b.f0 = a2;
            C4 *cp = &b.c8; cp[0] = col; cp[1] = col; cp[2] = col; cp[3] = col;
            b.f24 = 14;
            b.f28 = 0;
            fn_80130B4C(&lbl_8032FF24, &b);
            b.f24 |= lbl_803647B0;
            b.f32 = 0;
            b.f28 = 3;
            fn_80130B4C(&lbl_8033005C, &b);
        }
    }
    fn_80138050(&o->sub, a2, o->f3c, 0, o->f3c, 0, 0, 0);
    n = d->f4c;
    for (i = 0; i < o->f3c; i++) {
        r = o->sub.mk(i);
        r->r2(0x1c04, 0, 1, 0);
        if (o->f8 & 0x100) r->r4(&o->f58);
        fn_800E8F6C(buf, lbl_803647D0, d->f44, n++);
        r->r12(a2, &o->sub, buf);
    }
    o->f8 |= 0x210;
}

} /* extern "C" */
