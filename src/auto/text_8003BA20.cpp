// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" void *memset(void *, int, unsigned long);
struct E52 { u8 pad[52]; };
struct G5E4 { u8 pad[112]; E52 *f112; u32 f116; };
extern G5E4 *lbl_8035B5E4;
struct Z { u8 pad[8]; u32 f8; u8 pad12[44]; virtual void z0(); virtual void z1(); virtual void z2(); virtual void z3(); virtual void z4(); virtual void z5(); virtual void z6(); virtual void z7(); virtual void z8(); virtual void z9(); virtual void set(void *); };
struct Y { u8 pad[16]; virtual void y0(); virtual void y1(); virtual void y2(); virtual void y3(); virtual Z *make(int); };
struct X { u8 pad[164]; virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4(); virtual void x5(); virtual void x6(); virtual void x7(); virtual void x8(); virtual void x9(); virtual void x10(); virtual void x11(); virtual void x12(); virtual void x13(); virtual void x14(); virtual void x15(); virtual void x16(); virtual void x17(); virtual void x18(); virtual Y *get(int); };
struct H { u8 pad[84]; Z *f84; };
struct B { u8 pad[8]; u32 f8; u8 pad12[200]; };
struct M { u8 pad[48]; virtual void m0(); virtual void m1(); virtual void m2(); virtual void send(B *); };
struct G1DC { u8 pad[11316]; M m; u8 pad2[11340 - 11316 - sizeof(M)]; void *f11340; };
extern G1DC *lbl_8035A1DC;
extern u32 lbl_8035A070;
extern u32 lbl_8035C17C;
extern f32 lbl_8035C158;
extern char lbl_80294DC8[];
struct T { void *f0; u8 pad4[4]; X *f8; u8 pad12[16]; H *f28; H *h32; Z *f36; Z *f40; u8 pad44[8]; u32 f52; u8 pad56[8]; int f64; u8 pad68[12]; int f80; f32 f84; int f88; int f92; int f96; int f100; u32 f104; int f108; int f112; u32 f116; };
int fn_800FBB9C();
void fn_80253250(E52 *);
void fn_802516A4(G5E4 *, int);
void fn_80216044(void *, const char *);
void fn_80215FDC(void *);
static inline void clr(G5E4 *g) { for (u32 i = 0; i < g->f116; i++) fn_80253250(&g->f112[i]); fn_802516A4(g, 0); }
void fn_8003BA20(T *t, int arg) {
    B b;
    t->f112 = fn_800FBB9C();
    t->f100 = 0;
    t->f108 = 18;
    clr(lbl_8035B5E4);
    t->f36 = t->f8->get(0)->make(t->f116 * 2 + 1);
    t->f28->f84 = t->f36;
    t->f36->f8 |= lbl_8035C17C;
    t->f40 = t->f8->get(0)->make(t->f116 * 2);
    t->h32->f84 = t->f40;
    t->f116++;
    if (t->f116 >= t->f104) t->f116 = 0;
    fn_80216044(t->f0, lbl_80294DC8);
    memset(&b, 0, sizeof(B));
    *(volatile u32 *)&b.f8 = lbl_8035A070;
    (*(G1DC *volatile *)&lbl_8035A1DC)->m.send(&b);
    t->f40->set(lbl_8035A1DC->f11340);
    t->f36->set(lbl_8035A1DC->f11340);
    *(volatile u32 *)&b.f8 = t->f52;
    (*(G1DC *volatile *)&lbl_8035A1DC)->m.send(&b);
    fn_80215FDC(t->f0);
    t->f88 = fn_800FBB9C();
    t->f92 = t->f88;
    t->f80 = fn_800FBB9C();
    t->f84 = lbl_8035C158;
    t->f64 = 0;
    t->f96 = arg;
}

} /* extern "C" */
