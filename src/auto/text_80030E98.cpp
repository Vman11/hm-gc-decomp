// fn_80030E98: scene init (wA_80030E98).
#include "common.h"

#define DV(n) virtual void n();
#define DV4(p) DV(p##0) DV(p##1) DV(p##2) DV(p##3)
#define DV16(p) DV4(p##a) DV4(p##b) DV4(p##c) DV4(p##d)

struct V1930 { DV16(a) DV16(b) DV16(c) DV(z0) DV(z1) DV(z2) DV(z3) DV(z4) DV(z5) DV(z6) DV(z7) DV(z8) DV(z9) DV(za) DV(zb) DV(zc) DV(zd) DV(ze) virtual void setColor(u8 *); };
struct VIdx { DV16(a) DV(z0) DV(z1) DV(z2) DV(z3) DV(z4) DV(z5) DV(z6) DV(z7) DV(z8) virtual int get(); };
struct VRes { u8 pad[8]; DV4(a) DV(z0) virtual void *get(int); };
struct VNode { u8 pad[0x80]; DV16(a) DV4(b) virtual void show(int); };
struct VMgr { u8 pad[0x30]; DV4(a) DV4(b) virtual void set(int); };

struct Owner1C { u8 pad[0x1930]; DV16(a) DV16(b) DV16(c) DV(z0) DV(z1) DV(z2) DV(z3) DV(z4) DV(z5) DV(z6) DV(z7) DV(z8) DV(z9) DV(za) DV(zb) DV(zc) DV(zd) DV(ze) virtual void setColor(u8 *); };
struct G24 { u8 pad[0x3e0]; u8 res[0x33b0 - 0x3e0]; void *scene; };
struct G4 { u8 pad[0x10]; VIdx *idx; u8 p2[4]; void *f18; };
struct GS { u8 pad[4]; G4 *f4; u8 p2[0x1c]; G24 *f24; };
struct A1DC { u8 pad[0x2c4c]; VMgr *mgr; u8 p2[0x340c - 0x2c50]; int f340c; u8 f3410[4]; };
struct S488 { u8 pad[0x10]; int f10; };
struct S00C { u8 pad[0x14]; int f14; int f18; };
struct S5C4 { u8 pad[4]; void *f4; };
struct P2 { u8 pad[0x32b4]; u8 f32b4[0x3698 - 0x32b4]; int f3698; };

struct V3;
struct V3 { volatile f32 x, y, z; void set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct C801AD710 { C801AD710(); u8 pad[0x78]; };
struct C8003AB70 { C8003AB70(); u8 pad[0xc]; };

struct Scene {
    u8 pad0[8];
    void *f8;
    u8 pad1[0x1c - 0xc];
    Owner1C *f1c;
    u8 pad2[0x78 - 0x20];
    void *f78;
    u8 pad3[4];
    void *f80;
    void *f84;
    u8 pad4[0x288 - 0x88];
    C801AD710 *f288;
    int f28c;
    u8 pad5[0x2a4 - 0x290];
    int f2a4;
    u8 pad6[0x2f0 - 0x2a8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(Owner1C *);
    u8 pad7[0xc];
    void *f300;
    void *f304;
    void *f308;
    void *f30c;
    void *f310;
    int f314;
    int *f318;
    int f31c;
    void *f320;
    void *f324;
    void *f328;
    C8003AB70 *f32c;
};

extern "C" {
extern char lbl_80294740[];
extern char lbl_8035BCDC[3];
extern char lbl_8035BCE0[4];
extern char lbl_8035BCE4[7];
extern char lbl_8035BCEC[6];
extern char lbl_8035BCF4[8];
extern char lbl_8035BCFC[8];
extern char lbl_8035BC78[8];
extern char lbl_8035BC80[8];
extern char lbl_8035BD04[5];
extern char lbl_8035BD0C[5];
extern char lbl_8035BD14[8];
extern char lbl_8035BD1C[5];
extern char lbl_8035BD24[8];
extern char lbl_8035BCB0[7];
extern char lbl_8035BD2C[6];
extern char lbl_8035BD34[8];
extern f32 lbl_8035BCC0, lbl_8035BCC4, lbl_8035BCC8, lbl_8035BCCC;
extern const f32 lbl_8035BC54; extern volatile f32 lbl_8035BCD4; extern volatile f32 lbl_8035BCD0, lbl_8035BCD8; extern f32 lbl_8035BC50;
extern A1DC *lbl_8035A1DC;
extern GS *lbl_8035B65C;
extern void *lbl_8035B658;
extern void **lbl_8035B418;
extern void *lbl_8035B478;
extern void *lbl_8035B5E4;
extern S5C4 *lbl_8035B5C4;
extern S488 *lbl_8035B488;
extern S00C *lbl_8035A00C;
extern void *lbl_8035A02C;

void fn_802551DC(Scene *, P2 *, int, int, int);
void fn_80038BE4(void *);
void fn_80129938(int, void *);
void fn_8012962C(int, f32, f32, f32, f32);
void fn_80129710(int, V3 *, V3 *, V3 *);
void fn_8026DF0C(void *, char *);
void fn_802695B4(void *, char *, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80216044(void *, char *);
void fn_80215FDC(void *);
void fn_801AB928(C801AD710 *, void *, char *, void *, int, int);
void fn_801AAFAC(C801AD710 *, void *);
void fn_8023E200(void *, C801AD710 *);
void fn_80253FBC(Scene *);
VRes *fn_80207198(void *, char *, int);
VNode *fn_801AA960(void *, char *, char *);
void fn_802514B8(void *, char *, void *);
void fn_801C2368(void *, void *, int);
void fn_8024F6D8(void *, void *, char *, char *, int, char *, int);
void fn_8023EA4C(void *);
void fn_802516A4(void *, int);
void fn_80039E80(void *, int, f32);

inline bool busy() { S00C *s = lbl_8035A00C; return s->f14 != 0 || s->f18 != 0; }

void fn_80030E98(Scene *self, P2 *p2, int x, int y, int w) {
    char *pool = lbl_80294740;
    void *sc;
    void *t;
    VNode *n;
    VRes *a;
    VRes *b;
    fn_802551DC(self, p2, x, y, w);
    {
        u8 c[4];
        c[0] = 0; c[1] = 0; c[2] = 0; c[3] = 0xff;
        self->f1c->setColor(c);
    }
    self->f314 = 1;
    self->f300 = lbl_8035A1DC->f3410;
    fn_80038BE4(self->f300);
    self->f2a4 = lbl_8035B65C->f4->idx->get();
    fn_80129938(self->f2a4, lbl_8035B65C->f4->f18);
    fn_8012962C(self->f2a4, lbl_8035BCC0, lbl_8035BCC4, lbl_8035BCC8, lbl_8035BCCC);
    {
        V3 b, c, a;
        f32 n;
        f32 z = lbl_8035BC54;
        a.x = z; a.y = lbl_8035BCD0; n = lbl_8035BCD4; a.z = n;
        b.x = z; b.y = z; b.z = z;
        b.z = lbl_8035BCD8;
        c.x = z; c.y = n; c.z = z;
        fn_80129710(self->f2a4, &b, &c, &a);
    }
    fn_8026DF0C(self->f80, lbl_8035BCDC);
    fn_802695B4(self->f84, lbl_8035BCDC, 0);
    if (!lbl_8035B658) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B658);
    self->f288 = new C801AD710;
    fn_800F7E98();
    if (!self->f288) fn_800604C4(-4, 0, 0, 0);
    fn_80216044(self->f8, lbl_8035BCE0);
    fn_801AB928(self->f288, lbl_8035B65C->f24->scene, lbl_8035BCE4, self->f78, 1, 0);
    fn_80215FDC(self->f8);
    fn_801AAFAC(self->f288, *lbl_8035B418);
    fn_8023E200(lbl_8035B478, self->f288);
    self->f28c = lbl_8035A1DC->f340c;
    fn_80253FBC(self);
    self->f30c = fn_80207198(lbl_8035B65C->f24->res, lbl_8035BCEC, 0);
    self->f310 = fn_80207198(lbl_8035B65C->f24->res, lbl_8035BCF4, 0);
    self->f324 = fn_80207198(lbl_8035B65C->f24->res, pool + 0x4c, 0);
    self->f318 = (int *)fn_80207198(lbl_8035B65C->f24->res, lbl_8035BCFC, 0)->get(0);
    *self->f318 = 0;
    {
        VNode *n = fn_801AA960(lbl_8035B65C->f24->scene, lbl_8035BC78, pool + 0x40);
        if (n) n->show(1);
    }
    {
        VNode *n = fn_801AA960(lbl_8035B65C->f24->scene, lbl_8035BC80, pool + 0x40);
        if (n) n->show(0);
    }
    fn_802514B8(lbl_8035B5E4, lbl_8035BD04, self->f300);
    if (!lbl_8035B658) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B658);
    self->f32c = new C8003AB70;
    fn_800F7E98();
    if (!self->f32c) fn_800604C4(-4, 0, 0, 0);
    self->f304 = fn_801AA960(lbl_8035B65C->f24->scene, lbl_8035BD0C, pool + 0x58);
    self->f308 = fn_801AA960(lbl_8035B65C->f24->scene, lbl_8035BD14, pool + 0x58);
    fn_80216044(self->f8, lbl_8035BCDC);
    fn_80215FDC(self->f8);
    if (p2->f3698 == 0) {
        n = fn_801AA960(lbl_8035B65C->f24->scene, pool + 0x64, pool + 0x10);
        fn_801C2368(self->f78, n, 1);
    } else {
        a = fn_80207198(lbl_8035B65C->f24->res, lbl_8035BD1C, 0);
        b = fn_80207198(lbl_8035B65C->f24->res, lbl_8035BD24, 0);
        sc = lbl_8035B65C->f24->scene;
        fn_801C2368(self->f78, fn_801AA960(sc, (char *)a->get(0), (char *)b->get(0)), 1);
    }
    {
        t = lbl_8035B5C4->f4;
        fn_80216044(self->f8, pool + 0x70);
        fn_8024F6D8(t, p2->f32b4, lbl_8035BCB0, pool + 0x7c, 0, lbl_8035BD2C, 1);
        fn_80215FDC(self->f8);
    }
    fn_80216044(self->f8, lbl_8035BD34);
    self->v0();
    fn_80215FDC(self->f8);
    self->f31c = 1;
    while (busy()) {
        fn_8023EA4C(lbl_8035B488);
        fn_802516A4(lbl_8035B5E4, lbl_8035B488->f10);
        self->v6(self->f1c);
        lbl_8035A1DC->mgr->set(1);
    }
    self->v4();
    fn_80039E80(lbl_8035A02C, 0, lbl_8035BC50);
}
}
