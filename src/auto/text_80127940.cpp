// AtGrI2DFont texture-strip layout. NonMatching: only the prologue schedule differs (target: lhz fmt; lis/addi strbase; lwz dev).
#include "common.h"

extern "C" {

struct Dev {
    u8 pad0[0x14];
    u32 flags;
    u8 pad18[0x50];
    s32 f68;
    s32 f6c;
    s32 f70;
    virtual void v0();
    virtual void v1();
    virtual u32 maxTexW(u32);
    virtual u32 minTexH(u32);
    virtual u32 maxTexH(u32);
};
struct Owner { u8 pad[0x34]; Dev *dev; };
struct Desc { u16 f0; u16 fmt; };
struct Glyph { u32 w; u32 f4; u16 page; u16 x; u16 y; u16 fe; };
struct Font {
    u8 pad0[0xc];
    u32 n;
    u32 h;
    u8 pad14[0x28];
    u32 pages;
    u32 maxH;
    u32 maxW;
    u32 texH;
    u32 texW;
    u32 f50;
    Glyph *g;
};

void fn_80060568(const char *, s32, s32, s32);
extern u32 lbl_80363E38;

static inline Dev *getDev(Owner *o) { return o->dev; }
static inline u32 getFmt(Desc *d) { return d->fmt; }
static inline u32 caps(Dev *d) {
    u32 f = d->flags;
    if (d->f68 != 0) f = (f & ~0x01000000) | lbl_80363E38;
    if (d->f6c != 0 && d->f70 == 0) f &= ~0x02000000;
    return f;
}

void fn_80127940(Font *t, Owner *o, Desc *__restrict desc) {
    Dev *dev;
    u32 fmt;
    u32 k;
    u32 x;
    u32 y;
    u32 cnt;
    fmt = getFmt(desc);
    dev = getDev(o);
    t->maxH = dev->maxTexH(fmt);
    if (t->maxH > 0x100) t->maxH = 0x100;
    if (caps(dev) & 0x100000) {
        t->maxW = dev->maxTexW(fmt);
        if (t->maxW > 0x100) t->maxW = 0x100;
    } else {
        t->maxW = t->maxH;
    }
    if (t->h > t->maxH) fn_80060568("AtGrI2DFont: Font too tall for tallest texture height", 0, 0, 0);
    cnt = 0;
    t->pages = 0;
    y = 0;
    x = 0;
    for (k = 0; k < t->n; k++) {
        if (t->g[k].w > t->maxW) fn_80060568("AtGrI2DFont: Font char too wide for widest texture width", 0, 0, 0);
        if (x + t->g[k].w > t->maxW) {
            x = 0;
            y += t->h;
            if (y + t->h > t->maxH) {
                cnt = 0;
                y = 0;
                t->pages++;
            }
        }
        t->g[k].x = x;
        t->g[k].y = y;
        {
            Glyph *g = &t->g[k];
            x += g->w;
            g->page = t->pages;
        }
        cnt++;
    }
    t->pages++;
    {
        u32 bits = 0, odd = 0;
        t->texH = t->h;
        while (t->texH > 1) {
            u32 v = t->texH;
            odd |= v & 1;
            t->texH = v >> 1;
            bits++;
        }
        t->texH = 1 << (bits + odd);
    }
    if (t->texH < dev->minTexH(fmt)) t->texH = dev->minTexH(fmt);
    t->texW = t->texH;
    for (;;) {
        u32 yy;
        u32 xx;
        u32 i;
        u32 j;
        j = 0;
        yy = 0;
        xx = 0;
        for (i = t->n - cnt; i < t->n; i++) {
            if (t->g[i].w > t->texW) break;
            if (xx + t->g[i].w > t->texW) {
                xx = 0;
                yy += t->h;
                if (yy + t->h > t->texH) break;
            }
            t->g[i].x = xx;
            t->g[i].y = yy;
            xx += t->g[i].w;
            j++;
        }
        if (j >= cnt) break;
        if (t->texW == t->texH && (caps(dev) & 0x100000)) {
            t->texW = t->texW * 2;
        } else {
            t->texH = t->texH * 2;
            t->texW = t->texH;
            if (t->texH > dev->maxTexH(fmt)) fn_80060568("AtGrI2DFont: Max height exceeded building nLast font texture", 0, 0, 0);
        }
        if (t->texW > dev->maxTexW(fmt)) fn_80060568("AtGrI2DFont: Max width exceeded building nLast font texture", 0, 0, 0);
    }
}

}
