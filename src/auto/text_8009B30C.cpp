// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#define V(n) virtual void n();
struct C80210CEC { u8 d[8]; C80210CEC(); ~C80210CEC(); };
struct Er { u8 p[192]; V(e0) V(e1) V(e2) virtual void name(char *, int); V(e4) V(e5) V(e6) V(e7) virtual void err(char *); };
struct Card { u8 p[1720]; V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12) V(c13) V(c14) V(c15) V(c16)
    virtual int stat(void *); V(c18) virtual void close(); };
struct MC { u8 p0[8]; u32 x8; u8 p1[84]; V(m0) V(m1) V(m2) V(m3) virtual u32 bsize(); V(m5) virtual u32 nblk(); V(m7)
    virtual Card *card(); virtual int first(void *); virtual int next(void *); V(m11) V(m12) virtual int chk(void *); virtual void fin(void *); };
struct Get { V(g0) V(g1) virtual MC *get(int, int); };
struct M2 { Get *f0; };
struct M1 { u8 p[4]; M2 *f4; };
struct Ent { u8 p[12]; virtual int ch(int); };
struct P4 { u8 p[0x24]; void *x24; };
struct P3 { u8 p[0x54]; P4 *x54; };
struct P2 { u8 p[4]; P3 *x4; };
struct P1 { u8 p[0x70]; P2 *x70; };
struct Gm { u8 p0[0x2b0]; u32 x2b0; u8 p1[4]; s32 x2b8; u8 p2[0x24]; u32 x2e0; };
struct O { u8 p0[0x88]; u32 x88; u8 p8c[8]; u32 x94, x98, x9c, xa0, xa4, xa8, xac; P1 *xb0; u8 pb4[0x34]; s32 xe8; u8 pec[8]; MC *mc;
    u8 xf8[0x44]; Ent x13c; u8 p[0x2d0 - 0x13c - sizeof(Ent)]; u8 x2d0[0x14]; u32 x2e4[9]; s32 x308; s32 x30c; };
struct Flg { s32 v; Flg() { v = 1; } };
extern "C" {
s32 lbl_8035A400;
s8 lbl_8035A404;
extern Gm *lbl_8035A0A4;
extern M1 *lbl_8035B690;
extern Er *lbl_8035B684;
extern void *lbl_8035A9F4;
extern char lbl_803614F0[8], lbl_803615C4[8], lbl_803615CC[8];
void fn_8003E77C(Gm *, u32);
void fn_8020B224(MC *, u8 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800FA69C(void *, Ent *);
int fn_80210BD4(C80210CEC *, Card *, char *, int);
int fn_802108B4(C80210CEC *, u8 *, int, int);
void fn_80210938(C80210CEC *);
int fn_8003DD00(Gm *, u8 **);
u32 fn_8020CEE8(Card *, void *);
void *fn_8020B894(MC *);
int fn_800F6CD0(char *, char *);

static inline u32 Nb(MC *m) { return m->nblk(); }
void fn_8009B30C(O *o) {
    if (!lbl_8035A404) { lbl_8035A400 = 1; lbl_8035A404 = 1; }
    Card *c;
    int st;
    u8 tmp[4];
    u8 *buf;
    if (lbl_8035A0A4->x2b8 == 0) { o->xe8 = 1; return; }
    o->mc = lbl_8035B690->f4->f0->get(0, 0);
    if (o->mc == 0) { fn_8003E77C(lbl_8035A0A4, o->x88); o->xe8 = 0; return; }
    if (!(o->mc->x8 & 2)) {
        st = o->mc->chk(tmp);
        switch (st) {
        case 1: case 12:
            fn_8003E77C(lbl_8035A0A4, o->x88); o->xe8 = 0; o->mc->fin(tmp); return;
        case 4:
            fn_8003E77C(lbl_8035A0A4, o->x94); o->xe8 = 0; o->mc->fin(tmp); return;
        case 5:
            fn_8003E77C(lbl_8035A0A4, o->x98); o->xe8 = 0; o->mc->fin(tmp); return;
        case 16:
            fn_8003E77C(lbl_8035A0A4, o->x9c); o->xe8 = 0; o->mc->fin(tmp); return;
        case 18:
            fn_8003E77C(lbl_8035A0A4, o->xa0); o->xe8 = 0; o->mc->fin(tmp); return;
        }
    }
    if (lbl_8035A400) {
        fn_8020B224(o->mc, o->x2d0);
        lbl_8035A400 = 0;
    }
    c = o->mc->card();
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    buf = new u8[0x1fff];
    fn_800F7E98();
    if (!buf) fn_800604C4(-4, 0, 0, 0);
    if (o->mc->first(o->xf8)) {
        Ent *e = &o->x13c;
        do {
            u32 k;
            fn_800FA69C(o->xb0->x70->x4->x54->x24, e);
            k = e->ch(7) - 0x30;
            if (c->stat(o->xf8) == 0x11) {
                fn_8003E77C(lbl_8035A0A4, o->xac); o->xe8 = 0; c->close(); o->mc->fin(tmp); return;
            }
            if (st) {
                lbl_8035B684->err(lbl_803614F0); o->xe8 = 0; c->close(); o->mc->fin(tmp); return;
            }
            C80210CEC b;
            if (fn_80210BD4(&b, c, lbl_803615C4, 2)) {
                lbl_8035B684->err(lbl_803614F0); delete buf; o->xe8 = 0; c->close(); o->mc->fin(tmp); return;
            }
            if (fn_802108B4(&b, buf, 0x1fff, 0)) {
                lbl_8035B684->err(lbl_803614F0); delete buf; o->xe8 = 0; fn_80210938(&b); c->close(); o->mc->fin(tmp); return;
            }
            fn_80210938(&b);
            if (fn_8003DD00(lbl_8035A0A4, &buf) == 0) {
                fn_8003E77C(lbl_8035A0A4, o->xac); delete buf; o->xe8 = 0; fn_80210938(&b); c->close(); o->mc->fin(tmp); return;
            }
            o->x2e4[k] = lbl_8035A0A4->x2e0;
            c->close();
        } while (o->mc->next(o->xf8));
    }
    {
        u32 k, n;
        MC *m;
        st = o->mc->first(o->xf8);
        k = 1;
        n = fn_8020CEE8(c, o->xf8) + 0x1fff;
        while (n > o->mc->bsize()) { n -= o->mc->bsize(); k++; }
        m = o->mc;
        if (k <= o->mc->nblk() && fn_8020B894(m)) goto ok;
    }
    if (o->x30c) {
        int found = 0;
        if (o->mc->first(o->xf8)) {
            Ent *e = &o->x13c;
            do {
                { u32 v = e->ch(7) - 0x30; if (v == lbl_8035A0A4->x2b0) found = 1; }
                c->close();
            } while (o->mc->next(o->xf8));
            if (!found) {
                fn_8003E77C(lbl_8035A0A4, o->xa4); o->xe8 = 0; o->mc->fin(tmp); delete buf; return;
            }
            o->x308 = 1;
            goto ok;
        }
        fn_8003E77C(lbl_8035A0A4, o->xa4); o->xe8 = 0; o->mc->fin(tmp); delete buf; return;
    }
    {
        char name[8];
        lbl_8035B684->name(name, -1);
        if (st && fn_800F6CD0(name, lbl_803615CC)) fn_8003E77C(lbl_8035A0A4, o->xa8);
        else fn_8003E77C(lbl_8035A0A4, o->xa4);
        o->xe8 = 0; o->mc->fin(tmp); delete buf; return;
    }
ok:
    o->xe8 = 1;
    delete buf;
    o->mc->fin(tmp);
}

} /* extern "C" */
