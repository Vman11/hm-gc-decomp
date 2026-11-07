#include "common.h"

extern "C" {
void *memset(void *, int, u32);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct Heap { u8 pad[0x18]; u32 f18; u32 f1c; };
extern "C" Heap *lbl_8035AC98;
struct Rc { s32 x0, y0, x1, y1; };
struct C801456A8;
typedef void (C801456A8::*PM)();
struct C801456A8 {
    u32 f0;
    u8 pad4[0x16 - 4];
    u16 f16;
    u8 pad18[0x2a - 0x18];
    u16 f2a;
    u8 pad2c[0x8c - 0x2c];
    u32 f8c;
    s32 f90;
    u32 f94;
    s32 f98;
    u32 f9c;
    u32 fa0;
    u8 pada4[0xb0 - 0xa4];
    u8 *fb0;
    u8 *fb4;
    u8 bb8[0x80];
    u8 b138[0x20];
    u8 b158[0x2c];
    u8 *f184;
    u8 *f188;
    u8 *f18c;
    u8 *f190;
    u8 pad194[0x59c - 0x194];
    u32 n59c;
    PM pm5a0[0x18];
    u8 *f6c0;
    u8 *f6c4;
    u8 pad6c8[0x6dc - 0x6c8];
    PM pm6dc;
    PM pm6e8;
    PM pm6f4;
    PM pm700;
};
extern "C" {
void fn_80146610(C801456A8 *);

void fn_801456A8(C801456A8 *t, u8 *dst, s32 dpitch, s32 dx, s32 dy, u8 *src, s32 spitch, Rc *__restrict r) {
    s32 step;
    u8 *s, *e, *d;
    u8 *q;
    u32 i;
    s32 y0, y1, x1, x0;
    if ((y1 = r->y1) <= (y0 = r->y0) || (x1 = r->x1) <= (x0 = r->x0)) return;
    t->f8c = x1 - x0;
    d = dst + dy * dpitch + ((u32)(dx * t->f2a) >> 3);
    s = src + ((u32)(x0 * t->f16) >> 3);
    if (t->f0 & 0x40) {
        e = s + (y0 - 1) * spitch;
        step = -spitch;
        s = s + (y1 - 1) * spitch;
    } else {
        e = s + y1 * spitch;
        step = spitch;
        s = s + y0 * spitch;
    }
    t->fb0 = s;
    t->fb4 = d;
    t->f94 = t->f8c;
    t->f90 = (r->x0);
    t->f98 = dx;
    fn_80146610(t);
    t->f184 = t->bb8;
    t->f188 = t->bb8;
    t->f18c = t->b138;
    t->f190 = t->b158;
    if (!(t->f0 & 6)) memset(t->b158, 0xff, 0x20);
    if (t->f0 & 0x800) {
        Heap *h = lbl_8035AC98;
        if (h->f18 >= 2) h->f1c = h->f18; else h->f1c = 2;
        if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC98);
        t->f6c0 = new u8[t->f8c];
        fn_800F7E98();
        if (!t->f6c0) fn_800604C4(-4, 0, 0, 0);
        h = lbl_8035AC98;
        h->f1c = h->f18;
        t->fb0 = e - step;
        t->fa0 = t->f8c;
        t->f9c = 0x20;
        t->f6c4 = t->f6c0;
        while (t->fa0 >= 0x20) {
            (t->*(t->pm6dc))();
            u8 *pe;
            u8 *p;
            p = t->f184;
            pe = p + t->f9c * 4;
            do {
                *t->f6c4 = p[3];
                p += 4;
                t->f6c4++;
            } while (p < pe);
            t->fa0 -= 0x20;
        }
        if (t->fa0 != 0) {
            t->f9c = t->fa0;
            (t->*(t->pm6f4))();
            u8 *pe;
            u8 *p;
            p = t->f184;
            pe = p + t->f9c * 4;
            do {
                *t->f6c4 = p[3];
                p += 4;
                t->f6c4++;
            } while (p < pe);
        }
    }
    do {
        t->fb0 = s;
        t->fb4 = d;
        t->fa0 = t->f8c;
        t->f9c = 0x20;
        while (t->fa0 >= 0x20) {
            (t->*(t->pm6dc))();
            for (i = 0, q = (u8 *)t; i < t->n59c; q += 12, i++) (t->*(((C801456A8 *)q)->pm5a0[0]))();
            (t->*(t->pm6e8))();
            t->fa0 -= 0x20;
        }
        if (t->fa0 != 0) {
            t->f9c = t->fa0;
            (t->*(t->pm6f4))();
            for (i = 0, q = (u8 *)t; i < t->n59c; q += 12, i++) (t->*(((C801456A8 *)q)->pm5a0[0]))();
            (t->*(t->pm700))();
        }
        s += step;
        d += dpitch;
    } while (s != e);
    if (t->f6c0) {
        delete[] t->f6c0;
        t->f6c0 = 0;
    }
}
}
