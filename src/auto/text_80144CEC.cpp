#include "common.h"

extern "C" {
void *memset(void *, int, u32);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct Heap { u8 pad[0x18]; u32 f18; u32 f1c; };
extern "C" Heap *lbl_8035AC98;
extern "C" f32 lbl_80364390;
struct C80121E80 {
    u8 b[4];
    C80121E80();
};
struct Rc { s32 x0, y0, x1, y1; };
struct C80144CEC {
    u32 f0;
    u8 pad4[0x16 - 4];
    u16 f16;
    u8 pad18[0x28 - 0x18];
    u16 f28;
    u16 f2a;
    u8 pad2c[0x8c - 0x2c];
    u32 f8c;
    s32 f90;
    u32 f94;
    s32 f98;
    u32 f9c;
    u32 fa0;
    u8 pada4[0xa8 - 0xa4];
    u32 fa8;
    u32 fac;
    u8 *fb0;
    u8 *fb4;
    u8 bb8[0x80];
    u8 b138[0x20];
    u8 b158[0x20];
    C80121E80 *f178;
    u8 *f17c;
    u8 *f180;
    u8 *f184;
    C80121E80 *f188;
    u8 *f18c;
    u8 *f190;
};
extern "C" {
void fn_80146610(C80144CEC *);
void fn_80144B64(C80144CEC *);

void fn_80144CEC(C80144CEC *t, u8 *dst, s32 dpitch, const Rc *d, u8 *src, s32 spitch, const Rc *r) {
    u32 sh, dh;
    s32 err, d2;
    s32 dx0, dx1, dy0, x0, dy1, x1, y0, y1;
    s32 step;
    u8 *sp;
    u8 *e;
    u8 *dp;
    if ((y1 = r->y1) <= (y0 = r->y0) || (x1 = r->x1) <= (x0 = r->x0) || (dy1 = d->y1) <= (dy0 = d->y0) || (dx1 = d->x1) <= (dx0 = d->x0)) return;
    t->f8c = x1 - x0;
    t->f94 = dx1 - dx0;
    dh = dy1 - dy0;
    sh = y1 - y0;
    dp = dst + dy0 * dpitch + ((u32)(dx0 * t->f2a) >> 3);
    sp = src + ((u32)(x0 * t->f16) >> 3);
    if (t->f0 & 0x40) {
        step = -spitch;
        e = sp + (y0 - 1) * spitch;
        sp = sp + (y1 - 1) * spitch;
    } else {
        step = spitch;
        e = sp + y1 * spitch;
        sp = sp + y0 * spitch;
    }
    t->fb0 = sp;
    t->fb4 = dp;
    {
        s32 v = r->x0;
        t->f90 = v;
        t->f98 = v;
    }
    {
        Heap *h = lbl_8035AC98;
        if (h->f18 >= 2) h->f1c = h->f18; else h->f1c = 2;
    }
    if (t->f28 & 1) {
        if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC98);
        t->f178 = new C80121E80[t->f94];
        fn_800F7E98();
        if (!t->f178) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->f28 & 4) {
        if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC98);
        t->f17c = new u8[t->f94];
        fn_800F7E98();
        if (!t->f17c) fn_800604C4(-4, 0, 0, 0);
    }
    if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC98);
    t->f180 = new u8[t->f94];
    fn_800F7E98();
    if (!t->f180) fn_800604C4(-4, 0, 0, 0);
    {
        Heap *h = lbl_8035AC98;
        h->f1c = h->f18;
    }
    fn_80146610(t);
    if (!(t->f0 & 6)) memset(t->f180, 0xff, t->f94);
    t->f184 = t->bb8;
    t->f188 = t->f178;
    t->f18c = t->f17c;
    t->f190 = t->f180;
    t->fa8 = (s32)(lbl_80364390 * ((f32)(s32)t->f94 / (f32)(s32)t->f8c));
    if (t->fa8 == 0) t->fac = t->f94; else t->fac = t->f94 % t->fa8;
    if (sh > dh) {
        d2 = dh * 2;
        err = d2 - sh;
        do {
            if (err <= 0) {
                err += d2;
            } else {
                t->fb0 = sp;
                t->fb4 = dp;
                fn_80144B64(t);
                dp += dpitch;
            }
            sp += step;
        } while (sp != e);
    } else {
        s32 s2, sd;
        u8 *de;
        d2 = sh * 2;
        sd = (sh - dh) * 2;
        de = dp + dh * dpitch;
        err = d2 - dh;
        do {
            t->fb4 = dp;
            fn_80144B64(t);
            if (err <= 0) {
                err += d2;
            } else {
                sp += step;
                err += sd;
                t->fb0 = sp;
            }
            dp += dpitch;
        } while (dp < de);
    }
    if (t->f180) {
        delete[] t->f180;
        t->f180 = 0;
    }
    if (t->f17c) {
        delete[] t->f17c;
        t->f17c = 0;
    }
    if (t->f178) {
        delete[] t->f178;
        t->f178 = 0;
    }
}
}
