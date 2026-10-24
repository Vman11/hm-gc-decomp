// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

#define V(n) virtual void n();
class C80214C34 { public: u8 d[448]; C80214C34(); ~C80214C34(); };
class C80210CEC { public: u8 d[8]; C80210CEC(); ~C80210CEC(); };
class Er { public: u8 p[192]; V(e0) V(e1) V(e2) V(e3) V(e4) V(e5) V(e6) V(e7) virtual void err(char *); };
class Sn { public: u8 p[752]; V(s0) V(s1) V(s2) V(s3) V(s4) V(s5) V(s6) V(s7) V(s8) V(s9) V(s10) V(s11) V(s12) virtual void put(void *); };
class Fl { public: u8 p[1720]; V(f0) V(f1) V(f2) V(f3) V(f4) V(f5) V(f6) V(f7) V(f8) V(f9) V(f10) V(f11) V(f12) V(f13) V(f14) V(f15) V(f16)
    virtual int open(C80214C34 *); V(f18) virtual int close(); };
class Cd { public: u8 p0[8]; u32 f8; u8 p1[84]; V(c0) V(c1) V(c2) virtual void start(); V(c4) V(c5) V(c6) V(c7)
    virtual Fl *file(); V(c9) V(c10) V(c11) V(c12) virtual int chk(void *); virtual int fin(void *); };
class Mg { public: V(m0) V(m1) virtual Cd *get(int, int); };
struct M2 { Mg *f0; };
struct M1 { u8 p[4]; M2 *f4; };
struct Gm { u8 p0[688]; s32 f688; u8 p1[924]; u32 f1616; };
extern "C" {
extern M1 *lbl_8035B690;
extern Er *lbl_8035B684;
extern Sn *lbl_8035B65C;
extern char lbl_803605B0[4];
extern char lbl_802993F0[];
extern void *lbl_8035A9F4;
void fn_8003E77C(Gm *, u32);
void fn_8003E66C(Gm *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800E8F6C(char *, char *, ...);
void fn_80214A74(C80214C34 *);
void fn_802148B0(C80214C34 *, char *);
void fn_80214884(C80214C34 *, int);
int fn_80210BD4(C80210CEC *, Fl *, char *, int);
int fn_802108B4(C80210CEC *, u8 *, int, int);
void fn_80210938(C80210CEC *);
int fn_8003DE9C(Gm *, u8 **, u8 *);

void fn_8008DF48(Gm *g) {
    u32 u;
    u8 *buf;
    Cd *c;
    Fl *f;
    fn_8003E77C(g, g->f1616);
    fn_8003E66C(g);
    c = lbl_8035B690->f4->f0->get(0, 0);
    if (!c) { lbl_8035B684->err(lbl_803605B0); return; }
    c->start();
    if (!(c->f8 & 2) && c->chk(&u)) { lbl_8035B684->err(lbl_803605B0); return; }
    f = c->file();
    if (!f) { lbl_8035B684->err(lbl_803605B0); return; }
    C80214C34 a;
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    buf = new u8[8191];
    fn_800F7E98();
    if (!buf) fn_800604C4(-4, 0, 0, 0);
    char s[32];
    fn_800E8F6C(s, lbl_802993F0);
    s[7] = g->f688 + '0';
    fn_80214A74(&a);
    fn_802148B0(&a, s);
    fn_80214884(&a, 8191);
    if (f->open(&a)) { lbl_8035B684->err(lbl_803605B0); delete buf; return; }
    C80210CEC b;
    if (fn_80210BD4(&b, f, s, 2)) { lbl_8035B684->err(lbl_803605B0); delete buf; return; }
    if (fn_802108B4(&b, buf, 8191, 0)) { lbl_8035B684->err(lbl_803605B0); fn_80210938(&b); delete buf; return; }
    fn_80210938(&b);
    if (f->close()) { lbl_8035B684->err(lbl_803605B0); delete buf; return; }
    if (c->fin(&u)) { lbl_8035B684->err(lbl_803605B0); delete buf; return; }
    u8 x[8];
    if (fn_8003DE9C(g, &buf, x)) lbl_8035B65C->put(x);
    delete buf;
}
}

} /* extern "C" */
