#include "common.h"

extern "C" {

typedef struct Fmt { u32 fl; u32 x4; u8 b8; u8 b9, b10, b11; u32 n; u8 tc[8]; } Fmt;
typedef struct Buf { u8 pad[400]; u32 base; u8 pad404[424 - 404]; u32 off; u32 stride; } Buf;
typedef struct Slot { u8 pad[28]; } Slot;
typedef struct Ctx { Slot slot[2]; u8 pad56[1132 - 56]; u8 b1132; u8 pad1133[1144 - 1133]; int x1144; u32 x1148, x1152, x1156; } Ctx;
extern u32 lbl_802E6AA0[];
extern u32 lbl_802E6B24[];
void fn_800D58D4(void);
void fn_800D5488(u32, u32);
void fn_800D5E84(u32, u32, u8);
u32 fn_80101A7C(u8);
void fn_800D7CA4(u32, u8, u32, int, u32, u32, u32);
void fn_800D590C(u32, u32, u32, u32, u8);
int fn_8014C4B4(Slot *, Fmt *);
void fn_8014C734(Slot *);
void fn_8014C784(Slot *, Fmt *);
static inline void SetArr(u32 a, Buf *b, u32 tot, u32 off, u32 stride) { fn_800D5E84(a, b->base + b->off + tot - off, stride); }
static inline void TcFmts2(u32 v, Fmt *f) {
    u32 i, n;
    n = f->n;
    for (i = 0; i < n; i++) fn_800D590C(v, i + 13, 1, lbl_802E6AA0[f->tc[i]], lbl_802E6B24[f->tc[i]]);
}
static inline void AttrFmts(int v, Fmt *f) {
    u8 c8 = f->b8;
    u32 c11 = f->b11;
    u32 i, n;
    fn_800D590C(v, 9, 1, lbl_802E6AA0[c8], lbl_802E6B24[c8]);
    fn_800D590C(v, 10, 0, lbl_802E6AA0[c11], lbl_802E6B24[c11]);
    if (f->fl & 0x1000) fn_800D590C(v, 25, 1, lbl_802E6AA0[c11], lbl_802E6B24[c11]);
    u32 *t1 = lbl_802E6B24; u32 *t0 = lbl_802E6AA0;
    n = f->n;
    for (i = 0; i < n; i++) fn_800D590C(v, i + 13, 1, t0[f->tc[i]], t1[f->tc[i]]);
}
static inline u32 Tail(Ctx *c, Fmt *f) {
    u32 vf;
    Slot *s;
    u32 i, n;
    vf = (((f->fl & 0x1000) ? 2 : 0) | ((f->fl & 0x80) ? 0 : 1)) | 4;
    s = &c->slot[(vf >> 1) & 1];
    if (!fn_8014C4B4(s, f)) {
        AttrFmts(vf, f);
        fn_8014C734(s);
        fn_8014C784(s, f);
    }
    return vf;
}
u32 fn_80157DD4(Ctx *c, Fmt *f, int x, int y, Buf *b) {
    u32 tot;
    u32 stride;
    u32 off;
    u32 n;
    u32 a;
    u32 i;
    fn_800D58D4();
    stride = b->stride;
    off = stride * (x - y);
    tot = 0;
    if (f->fl & 0x40) {
        fn_800D5488(9, 3);
        SetArr(9, b, tot, off, stride);
        tot += fn_80101A7C(f->b8) * 2;
    } else if (f->fl & 0x80) {
        fn_800D5488(9, 3);
        SetArr(9, b, tot, off, stride);
        tot += fn_80101A7C(f->b8) * 3;
    } else if (f->fl & 0x100) {
        fn_800D5488(9, 3);
        SetArr(9, b, tot, off, stride);
        tot += fn_80101A7C(f->b8) * 4;
    }
    if (f->fl & 0x1000) {
        fn_800D5488(25, 3);
        SetArr(10, b, tot, off, stride);
        tot += fn_80101A7C(f->b11) * 6;
    } else if (f->fl & 0x800) {
        fn_800D5488(10, 3);
        SetArr(10, b, tot, off, stride);
        tot += fn_80101A7C(f->b11) * 3;
    }
    if (f->fl & 0x2000) {
        fn_800D5488(11, 3);
        SetArr(11, b, tot, off, stride);
        tot += 4;
        if (c->x1144 != 1) {
            c->x1144 = 1;
            fn_800D7CA4(0, c->b1132, 0, c->x1144, c->x1148, c->x1152, c->x1156);
        }
    }
    if (f->fl & 0x4000) {
        fn_800D5488(12, 3);
        SetArr(12, b, tot, off, stride);
        tot += 4;
    }
    n = f->n;
    for (i = 0; i < n; i++) {
        a = i + 13;
        fn_800D5488(a, 3);
        SetArr(a, b, tot, off, stride);
        tot += fn_80101A7C(f->tc[i]) * 2;
    }
    if (f->x4 == 1 || ((f->fl & 0x400) && f->x4 == 0)) fn_800D5488(0, 1);
    return Tail(c, f);
}

} /* extern "C" */
