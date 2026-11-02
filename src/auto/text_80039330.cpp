// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A008;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct V { f32 x, y, z; };
extern f32 lbl_8035C030, lbl_8035C034, lbl_8035C038, lbl_8035C03C, lbl_8035C040;
extern volatile f32 lbl_8035C044, lbl_8035C048, lbl_8035C04C;
extern char lbl_8035C050[8];
extern char lbl_80294D6C[];
extern u32 *lbl_8035B418;
struct C801C3FD0 { C801C3FD0(); u8 pad[8]; void *f8; u8 pad12[100]; virtual void a0(); virtual void set(void *, int); };
struct C801AD710 { C801AD710(); u8 pad[120]; };
struct S11332 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void *mk(); };
struct G { u8 pad[11332]; S11332 *f11332; u8 pad11336[4]; void *f11340; u32 f11344; u8 pad11348[1884]; void *f13232; };
extern G *lbl_8035A1DC;
struct T { void *f0; void *f4; C801AD710 *f8; C801C3FD0 *f12; u32 f16; };
void fn_80129938(void *, void *);
void fn_8012962C(void *, f32, f32, f32, f32);
void fn_80129710(void *, V *, V *, V *);
void fn_801C4044(void *);
void fn_80207BF4(void *, const char *);
void fn_801AB928(C801AD710 *, void *, const char *, C801C3FD0 *, int, int);
void fn_802079F0(void *, int);
void fn_801AAFAC(C801AD710 *, u32);
void fn_801C2368(C801C3FD0 *, void *, int);
void fn_80039330(T *t, G *g, void *x) {
    volatile V a;
    volatile V b;
    volatile V c;
    t->f0 = x;
    t->f4 = g->f11332->mk();
    fn_80129938(t->f4, g->f11340);
    fn_8012962C(t->f4, lbl_8035C030, lbl_8035C034, lbl_8035C038, lbl_8035C03C);
    c.x = lbl_8035C040;
    c.y = lbl_8035C044;
    c.z = lbl_8035C048;
    a.x = lbl_8035C040;
    a.y = lbl_8035C040;
    a.z = lbl_8035C040;
    a.z = lbl_8035C04C;
    b.x = lbl_8035C040;
    b.y = lbl_8035C040;
    b.z = lbl_8035C040;
    fn_80129710(t->f4, (V *)&a, (V *)&b, (V *)&c);
    fn_80129710(t->f4, (V *)&a, (V *)&b, (V *)&c);
    t->f16 = g->f11344;
    if (lbl_8035A008 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A008);
    t->f12 = new C801C3FD0;
    fn_800F7E98();
    if (t->f12 == 0) fn_800604C4(-4, 0, 0, 0);
    fn_801C4044(lbl_8035A008);
    t->f12->set(lbl_8035A1DC->f13232, 16);
    t->f16 = lbl_8035A1DC->f11344;
    if (lbl_8035A008 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A008);
    t->f8 = new C801AD710;
    fn_800F7E98();
    if (t->f8 == 0) fn_800604C4(-4, 0, 0, 0);
    fn_80207BF4(t->f0, lbl_80294D6C);
    fn_801AB928(t->f8, lbl_8035A1DC->f13232, lbl_8035C050, t->f12, 1, 0);
    fn_802079F0(t->f0, 0);
    fn_801AAFAC(t->f8, *lbl_8035B418);
    fn_801C2368(t->f12, t->f12->f8, 1);
}

} /* extern "C" */
