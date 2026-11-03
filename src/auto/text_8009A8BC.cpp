// fn_8009A8BC: memory-card save (sibling of fn_8009A3D8 load / fn_8009B30C scan).
#include "common.h"

#define V(n) virtual void n();
struct C80214C34 { u8 d[456]; C80214C34(); ~C80214C34(); };
struct C80210CEC { u8 d[8]; C80210CEC(); ~C80210CEC(); };
struct Er { u8 p[192]; V(e0) V(e1) V(e2) V(e3) V(e4) V(e5) V(e6) V(e7) virtual void err(char *); };
struct Card { u8 p[1720]; V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12) V(c13) V(c14) V(c15)
    virtual int erase(C80214C34 *); virtual int prep(C80214C34 *); V(c18) virtual int done(); };
struct MC { u8 p0[8]; u32 x8; u8 p1[84]; V(m0) V(m1) V(m2) V(m3) V(m4) V(m5) V(m6) V(m7)
    virtual Card *card(); V(m9) V(m10) V(m11) V(m12) virtual int chk(void *); virtual int fin(void *); };
struct Get { V(g0) V(g1) virtual MC *get(int, int); };
struct M2 { Get *f0; };
struct M1 { u8 p[4]; M2 *f4; };
struct Y { u8 p[0x20]; V(y0) V(y1) V(y2) V(y3) V(y4) V(y5) V(y6) V(y7) V(y8) virtual void lock(s32 *, s32 *, int); virtual void unlock(); };
struct X { u8 p[0x14]; V(x0) V(x1) V(x2) V(x3) V(x4) V(x5) V(x6) V(x7) V(x8) V(x9) V(x10) V(x11) V(x12) V(x13) virtual Y *get(int); };
struct Gm { u8 p0[0x2b0]; s32 x2b0; u8 p1[4]; s32 x2b8; };
struct B5 { u8 p[0x68]; s32 x68; u8 p6c[4]; u8 *x70; };
struct B7 { u8 p[0x20]; f32 *x20; };
struct H1 { u8 p[4]; void *x4; };
struct HH { u8 p[0x3708]; H1 *x3708; };
struct O { u8 p0[0x8c]; u32 x8c; u8 p90[0xe4 - 0x90]; X *xe4; s32 xe8; u8 pec[0x2c4 - 0xec]; s32 x2c4; u8 p2c8[8]; s64 x2d0; s32 x2d8;
    u8 p2dc[0x308 - 0x2dc]; s32 x308; s32 x30c; };
extern "C" {
extern Gm *lbl_8035A0A4;
extern M1 *lbl_8035B690;
extern Er *lbl_8035B684;
extern B5 *lbl_8035B5E4;
extern B7 *lbl_8035B7BC;
extern void *lbl_8035B79C;
extern HH *lbl_8035A1DC;
extern void *lbl_80359F2C;
extern f32 lbl_80361574;
extern char lbl_8029A1C8[];
extern char lbl_803614F0[8];
void fn_80253250(u8 *);
void fn_800FBA70(int);
void fn_802516A4(B5 *, int);
void fn_8026DD40(B7 *, int, f32);
void fn_80268020(void *);
void fn_80268014(void *);
void fn_801C2368(H1 *, void *, int);
void fn_8002AA38(void *, int);
void fn_8003E77C(Gm *, u32);
void fn_8003E66C(Gm *);
void fn_8003D518(Gm *, u8 **, s32 *);
void fn_800E8F6C(char *, char *, ...);
void fn_80214A74(C80214C34 *, int);
void fn_802148B0(C80214C34 *, char *);
void fn_80214884(C80214C34 *, int);
void fn_802147E4(C80214C34 *, char *, char *);
void fn_80214834(C80214C34 *, int, int, int, int, int, int);
void fn_8020B224(MC *, s64 *);
int fn_80210BD4(C80210CEC *, Card *, char *, int);
int fn_80210830(C80210CEC *, u8 *, int);
int fn_8021098C(C80210CEC *);
void fn_80210938(C80210CEC *);

#define FAIL0() do { o->x2d8 = 1; o->x2c4 = 0; fn_801C2368(lbl_8035A1DC->x3708, v, 1); fn_8002AA38(lbl_80359F2C, 0); \
    fn_8026DD40(lbl_8035B7BC, 1, vol); fn_80268014(lbl_8035B79C); o->x30c = 0; } while (0)

void fn_8009A8BC(O *o) {
    char *pool;
    u8 tmp[4];
    u8 *buf;
    s32 sz;
    s32 sc;
    s32 s8;
    s64 ts;
    char name[32];
    void *v;
    f32 vol;
    MC *mc;
    Card *c;
    s32 r;
    o->x308 = 0;
    pool = lbl_8029A1C8;
    if (lbl_8035A0A4->x2b8 == 0) return;
    o->x30c = 1;
    fn_80253250(lbl_8035B5E4->x70 + lbl_8035B5E4->x68 * 0x34);
    fn_800FBA70(100);
    fn_802516A4(lbl_8035B5E4, 1);
    vol = *lbl_8035B7BC->x20;
    fn_8026DD40(lbl_8035B7BC, 0, lbl_80361574);
    fn_80268020(lbl_8035B79C);
    v = lbl_8035A1DC->x3708->x4;
    lbl_8035B684->err(lbl_803614F0);
    if (o->xe8 == 0) { FAIL0(); return; }
    if (lbl_8035A0A4->x2b8 == 0) { FAIL0(); return; }
    fn_8003E77C(lbl_8035A0A4, o->x8c);
    fn_8003E66C(lbl_8035A0A4);
    mc = lbl_8035B690->f4->f0->get(0, 0);
    if (!mc) {
        fn_8026DD40(lbl_8035B7BC, 1, vol);
        fn_80268014(lbl_8035B79C);
        o->x30c = 0;
        return;
    }
    if (!(mc->x8 & 2)) while (mc->chk(tmp)) {
        mc->fin(tmp);
        lbl_8035B684->err(lbl_803614F0);
        FAIL0();
        return;
    }
    c = mc->card();
    if (!c) {
        mc->fin(tmp);
        lbl_8035B684->err(lbl_803614F0);
        FAIL0();
        return;
    }
    sz = 0;
    C80214C34 f;
    fn_8003D518(lbl_8035A0A4, &buf, &sz);
    fn_800E8F6C(name, pool + 0x90);
    name[7] = lbl_8035A0A4->x2b0 + '0';
    fn_80214A74(&f, lbl_8035A0A4->x2b0);
    fn_802148B0(&f, name);
    fn_80214884(&f, 0x1fff);
    fn_802147E4(&f, pool + 0xcc, name);
    r = c->prep(&f);
    fn_8020B224(mc, &ts);
    o->x2c4 = 1;
    if (r) {
        s32 e;
        o->xe4->get(0)->lock(&sc, &s8, 0);
        fn_80214834(&f, 0, 4, sc, 0x800, 0, 0);
        e = c->erase(&f);
        o->xe4->get(0)->unlock();
        if (e) {
            o->x2c4 = 0;
            mc->fin(tmp);
            lbl_8035B684->err(lbl_803614F0);
            delete buf;
            FAIL0();
            return;
        }
    } else if (o->x2d0 != 0 && ts != o->x2d0) {
        o->x2c4 = 0;
        lbl_8035B684->err(pool + 0x6c);
        if (o->x2d8 == 0) {
            o->x308 = 0;
            mc->fin(tmp);
            delete buf;
            FAIL0();
            return;
        }
    }
    o->x2c4 = 1;
    o->x2d0 = ts;
    C80210CEC g;
    if (fn_80210BD4(&g, c, name, 5)) {
        mc->fin(tmp);
        lbl_8035B684->err(lbl_803614F0);
        delete buf;
        FAIL0();
        return;
    }
    if (fn_80210830(&g, buf, 0x1fff)) {
        mc->fin(tmp);
        lbl_8035B684->err(lbl_803614F0);
        fn_80210938(&g);
        delete buf;
        FAIL0();
        return;
    }
    if (fn_8021098C(&g)) {
        mc->fin(tmp);
        lbl_8035B684->err(lbl_803614F0);
        fn_80210938(&g);
        delete buf;
        FAIL0();
        return;
    }
    if (c->done()) {
        mc->fin(tmp);
        lbl_8035B684->err(lbl_803614F0);
        delete buf;
        FAIL0();
        return;
    }
    if (mc->fin(tmp)) {
        lbl_8035B684->err(lbl_803614F0);
        delete buf;
        FAIL0();
        return;
    }
    delete buf;
    fn_801C2368(lbl_8035A1DC->x3708, v, 1);
    o->x2d8 = 1;
    o->x2c4 = 0;
    fn_8002AA38(lbl_80359F2C, 1);
    fn_8026DD40(lbl_8035B7BC, 1, vol);
    fn_80268014(lbl_8035B79C);
    o->x30c = 0;
    o->x308 = 0;
}
}
