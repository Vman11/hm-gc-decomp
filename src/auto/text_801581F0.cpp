// NonMatching draft (wMU: AttrFmts(int v) + fn_8014C784(&l, &g->fmt): SDIFF 0, regs only: vf r30 vs r29)
#include "common.h"
extern "C" {
typedef struct Fl {
    u32 p0 : 17;
    u32 b4000 : 1;
    u32 b2000 : 1;
    u32 b1000 : 1;
    u32 b800 : 1;
    u32 b400 : 1;
    u32 b200 : 1;
    u32 b100 : 1;
    u32 b80 : 1;
    u32 b40 : 1;
    u32 b20 : 1;
    u32 p27 : 5;
} Fl;
typedef struct Fmt { u32 fl; u32 x4; u8 b8; u8 b9, b10, b11; u32 n; u8 tc[8]; u8 pad18[16]; } Fmt;
typedef struct Geo { u32 fl; u8 pad4[12]; Fmt fmt; u8 pad[0x44 - 0x38]; u8 *x44; u8 *x48; u8 *x4c; u8 pad50[8]; u8 *x58; u8 *x5c; u8 pad60[4]; u32 x64; } Geo;
typedef struct Buf { u8 pad[400]; u32 base; u8 pad404[424 - 404]; u32 off; u32 stride; } Buf;
typedef struct Slot { u8 pad[28]; } Slot;
typedef struct Ctx { Slot slot[2]; u8 pad56[1132 - 56]; u8 b1132; u8 pad1133[1144 - 1133]; int x1144; u32 x1148, x1152, x1156; } Ctx;
extern u32 lbl_802E6AA0[];
extern u32 lbl_802E6B24[];
void fn_8014CA08(Fmt *);
void fn_800D58D4(void);
void fn_800D5488(u32, u32);
void fn_800D5E84(u32, u32, u8);
u32 fn_80101A7C(u8);
void fn_800D7CA4(u32, u8, u32, int, u32, u32, u32);
void fn_800D590C(u32, u32, u32, u32, u8);
int fn_8014C4B4(Slot *, Fmt *);
void fn_8014C734(Slot *);
void fn_8014C784(void *, Fmt *);
static inline void AttrFmts(int v, Fmt *f) {
    u8 c8 = f->b8;
    u32 c11 = f->b11;
    u32 i;
    fn_800D590C(v, 9, 1, lbl_802E6AA0[c8], lbl_802E6B24[c8]);
    fn_800D590C(v, 10, 0, lbl_802E6AA0[c11], lbl_802E6B24[c11]);
    if (f->fl & 0x1000) fn_800D590C(v, 25, 1, lbl_802E6AA0[c11], lbl_802E6B24[c11]);
    for (i = 0; i < f->n; i++) fn_800D590C(v, i + 13, 1, lbl_802E6AA0[f->tc[i]], lbl_802E6B24[f->tc[i]]);
}
static inline u32 Tail(Ctx *c, Geo *g, Fmt *l) {
    u32 vf;
    Slot *sl;
    vf = (((l->fl >> 7) & 1) ^ 1) | (((l->fl >> 12) & 1) ? 2 : 0);
    if ((g->fl >> 5) & 1) {
        vf |= 4;
        sl = &c->slot[(vf >> 1) & 1];
        if (!fn_8014C4B4(sl, l)) {
            AttrFmts(vf, l);
            fn_8014C734(sl);
            fn_8014C784(sl, l);
        }
    }
    return vf;
}
u32 fn_801581F0(Ctx *c, Geo *g, u32 mode, int x, int y, Buf *b) {
    Fmt l;
    Fmt *f;
    u32 n8, stride, n11, off, tot;
    fn_8014CA08(&l);
    f = &g->fmt;
    fn_800D58D4();
    n8 = fn_80101A7C(f->b8);
    n11 = fn_80101A7C(f->b11) * 3;
    stride = b->stride;
    off = stride * (x - y);
    tot = 0;
    fn_8014C784(&l, &g->fmt);
    fn_800D5488(9, 3);
    if (f->fl & 0x40) {
        if ((mode & 3) == 1) {
            fn_800D5E84(9, (u32)g->x4c + y * (n8 * 2), n8 * 2);
        } else if ((mode & 3) == 2) {
            fn_800D5E84(9, b->base + b->off - off, stride);
            tot = 8;
            l.b8 = 0x1f;
        }
    } else if (f->fl & 0x80) {
        if ((mode & 3) == 1) {
            fn_800D5E84(9, (u32)g->x4c + y * (n8 * 3), n8 * 3);
        } else if ((mode & 3) == 2) {
            fn_800D5E84(9, b->base + b->off - off, stride);
            tot = 12;
            l.b8 = 0x1f;
        }
    } else if (f->fl & 0x100) {
        if ((mode & 3) == 1) {
            fn_800D5E84(9, (u32)g->x4c + y * (n8 * 4), n8 * 4);
        } else if ((mode & 3) == 2) {
            fn_800D5E84(9, b->base + b->off - off, stride);
            tot = 16;
            l.b8 = 0x1f;
        }
    }
    if (f->fl & 0x800) {
        if ((mode & 0xC) == 0xC) {
            fn_800D5488(25, 3);
            fn_800D5E84(10, b->base + b->off + tot - off, stride);
        } else if ((mode & 0xC) == 8) {
            fn_800D5488(10, 3);
            fn_800D5E84(10, b->base + b->off + tot - off, stride);
        } else if ((mode & 0xC) == 4) {
            fn_800D5488(10, 3);
            fn_800D5E84(10, (u32)g->x58 + n11 * y, n11);
        }
    }
    if (f->fl & 0x2000) {
        fn_800D5488(11, 3);
        fn_800D5E84(11, (u32)g->x44 + y * 4, 4);
        if (c->x1144 != 1) {
            c->x1144 = 1;
            fn_800D7CA4(0, c->b1132, 0, c->x1144, c->x1148, c->x1152, c->x1156);
        }
    }
    if (f->fl & 0x4000) {
        fn_800D5488(12, 3);
        fn_800D5E84(12, (u32)g->x48 + y * 4, 4);
    }
    if (f->n) {
        u32 s, i, a, acc;
        s = g->x64;
        acc = y * s;
        for (i = 0; i < f->n; i++) {
            a = i + 13;
            fn_800D5488(a, 3);
            fn_800D5E84(a, (u32)g->x5c + acc, s);
            acc += fn_80101A7C(f->tc[i]) * 2;
        }
    }
    if (f->x4 == 1 || (f->fl & 0x400 && f->x4 == 0)) fn_800D5488(0, 1);
    if ((mode & 0xC) == 0xC) l.fl = (l.fl & ~0x800) | 0x1000;
    return Tail(c, g, &l);
}
}
