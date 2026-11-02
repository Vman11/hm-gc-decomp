// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct V { f32 x, y, z; };
extern f32 lbl_8035C0EC, lbl_8035C0F0, lbl_8035C0F4, lbl_8035C0F8, lbl_8035C0E0;
extern volatile f32 lbl_8035C0FC, lbl_8035C100, lbl_8035C104;
extern u32 lbl_8035C0E4, lbl_8035C0E8;
extern char lbl_8035C108[8];
extern char lbl_8035C110[8];
extern char lbl_80294DA8[];
extern void *lbl_8035A038;
struct C801829F8 { C801829F8(); u8 pad[0x78]; };
struct S11332 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void *mk(); virtual void s26(); virtual void *mk2(); };
struct G { u8 pad[11332]; S11332 *f11332; u8 pad11336[4]; void *f11340; u32 f11344; u8 pad11348[12352 - 11348]; u8 f12352[4]; };
extern G *lbl_8035A1DC;
struct R2 { u8 pad[0xb]; u8 b; u8 pc[0x2c - 0xc]; u32 f2c; };
struct R1 { u8 pad[0x20]; R2 **f20; };
struct R0 { u32 f0; u8 pad[0x8c]; R1 *f90; };
struct T { void *f0; void *f4; C801829F8 *f8; u8 *fc; void *f10; u32 f14; void *f18; u8 pad1c[0x14]; R2 *f30; };
void fn_80129938(void *, void *);
void fn_8012962C(void *, f32, f32, f32, f32);
void fn_80129710(void *, V *, V *, V *);
void fn_80207BF4(void *, const char *);
void fn_802079F0(void *, int);
void fn_8012ACAC(void *, void *, const char *, int, int);
void fn_8018182C(C801829F8 *, u8 *, const char *, int);
void *fn_80180E8C(C801829F8 *, int);
void fn_80180BA8(C801829F8 *, void *);
R0 *fn_800F9398(void *, const char *);
R0 *fn_800F9788(void *, const char *, const char *);
R0 *fn_8019565C(R0 *);
static inline R0 *find(u8 *p, const char *s) {
    if (s == 0 || *s == 0) return fn_800F9398(p + 0x90, s);
    return fn_800F9788(p + 0xa8, s, s);
}
void fn_8003A600(T *t, G *g, void *x) {
    volatile V a;
    volatile V b;
    volatile V c;
    t->f0 = x;
    t->f4 = g->f11332->mk();
    fn_80129938(t->f4, g->f11340);
    fn_8012962C(t->f4, lbl_8035C0EC, lbl_8035C0F0, lbl_8035C0F4, lbl_8035C0F8);
    c.x = lbl_8035C0E0;
    c.y = lbl_8035C0FC;
    c.z = lbl_8035C100;
    a.x = lbl_8035C0E0;
    a.y = lbl_8035C0E0;
    a.z = lbl_8035C0E0;
    a.z = lbl_8035C104;
    b.x = lbl_8035C0E0;
    b.y = lbl_8035C0E0;
    b.z = lbl_8035C0E0;
    fn_80129710(t->f4, (V *)&a, (V *)&b, (V *)&c);
    fn_80129710(t->f4, (V *)&a, (V *)&b, (V *)&c);
    t->f14 = g->f11344;
    t->fc = g->f12352;
    fn_80207BF4(t->f0, lbl_80294DA8);
    t->f18 = lbl_8035A1DC->f11332->mk2();
    if (lbl_8035A038 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A038);
    t->f8 = new C801829F8;
    fn_800F7E98();
    if (t->f8 == 0) fn_800604C4(-4, 0, 0, 0);
    fn_8012ACAC(t->f18, lbl_8035A1DC->f11340, lbl_8035C108, 1, 0);
    fn_8018182C(t->f8, t->fc, lbl_8035C108, 1);
    t->f10 = fn_80180E8C(t->f8, 0);
    fn_80180BA8(t->f8, t->f10);
    fn_802079F0(t->f0, 0);
    R0 *r = find(t->fc, lbl_8035C110);
    if (r) r = fn_8019565C(r);
    r->f0 |= lbl_8035C0E8;
    t->f30 = *r->f90->f20;
    R2 *q = t->f30;
    q->b = 0;
    q->f2c |= lbl_8035C0E4;
}

} /* extern "C" */
