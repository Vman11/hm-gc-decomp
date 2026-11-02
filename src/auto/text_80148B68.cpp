// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 *out;
    void **src;
    u8 pad8[84];
    u32 rowsN;
    u32 width;
    u8 depth;
    u8 pad101[3];
    u32 ctype;
    u8 pad108[2];
    u8 interlace;
    u8 pad111;
    u8 *rows[2];
    u32 cur;
    u32 rowbytes;
    u32 pass;
    u8 pad132[12];
    s32 started;
    s32 hasPal;
    u8 pad152[8];
    u8 z[4];
};
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern char lbl_8029FEF4[], lbl_8029FF0C[], lbl_8029FF34[], lbl_8029FD18[];
extern void *lbl_8035ACA8;
void fn_80060568(char *, int, int, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801F13F0(u8 *, void *);
void fn_801F20F0(u8 *, void *, u32, u8 *);
void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);

static inline u32 Paeth(u8 a, u8 b, u8 c) {
    s32 pp = a + b - c;
    s32 pa = pp > a ? pp - a : a - pp;
    s32 pb = pp > b ? pp - b : b - pp;
    s32 pc = pp > c ? pp - c : c - pp;
    if (pa <= pb && pa <= pc) return a;
    else if (pb <= pc) return b;
    else return c;
}
void fn_80148B68(P *p, int ft) {
    u32 o = (u8)(p->cur == 0);
    u32 bpp = 0;
    u32 i;
    switch (p->ctype) {
    case 0:
    case 3:
        bpp = 1;
        break;
    case 2:
        bpp = (s32)(p->depth * 3) / 8;
        break;
    case 4:
        bpp = (s32)(p->depth * 2) / 8;
        break;
    case 6:
        bpp = (s32)(p->depth * 4) / 8;
        break;
    default:
        fn_80060568(lbl_8029FD18, 0, 0, 0);
    }
    switch (ft) {
    case 0:
        break;
    case 1:
        for (i = bpp; i < p->rowbytes; i++)
            p->rows[p->cur][i] += p->rows[p->cur][i - bpp];
        break;
    case 2:
        for (i = 0; i < p->rowbytes; i++)
            p->rows[p->cur][i] += p->rows[o][i];
        break;
    case 3:
        for (i = 0; i < p->rowbytes; i++) {
            u8 b = p->rows[o][i];
            int a = i < bpp ? 0 : p->rows[p->cur][i - bpp];
            p->rows[p->cur][i] = p->rows[p->cur][i] + (a + b) / 2;
        }
        break;
    case 4:
        for (i = 0; i < p->rowbytes; i++) {
            u8 a, b, c;
            b = p->rows[o][i];
            if (i < bpp) { a = 0; c = 0; }
            else { c = p->rows[o][i - bpp]; a = p->rows[p->cur][i - bpp]; }
            u8 r = p->rows[p->cur][i];
            u32 v = Paeth(a, b, c);
            p->rows[p->cur][i] = v + r;
        }
        break;
    default:
        fn_80060568(lbl_8029FEF4, 0, 0, 0);
    }
}

void fn_80148E6C(P *p) {
    u8 f;
    u32 i;
    u8 ft;
    if (p->started) fn_80060568(lbl_8029FF0C, 0, 0, 0);
    p->started = 1;
    if (p->ctype == 3 && p->hasPal == 0) fn_80060568(lbl_8029FF34, 0, 0, 0);
    switch (p->ctype) {
    case 0:
    case 3:
        p->rowbytes = (p->width * p->depth + 7) >> 3;
        break;
    case 4:
        p->rowbytes = (p->depth * (p->width * 2)) >> 3;
        break;
    case 2:
        p->rowbytes = (p->depth * (p->width * 3)) >> 3;
        break;
    case 6:
        p->rowbytes = (p->depth * (p->width * 4)) >> 3;
        break;
    default:
        fn_80060568(lbl_8029FD18, 0, 0, 0);
        break;
    }
    if (!lbl_8035ACA8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ACA8);
    p->rows[0] = new u8[p->rowbytes];
    fn_800F7E98();
    if (!p->rows[0]) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035ACA8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ACA8);
    p->rows[1] = new u8[p->rowbytes];
    fn_800F7E98();
    if (!p->rows[1]) fn_800604C4(-4, 0, 0, 0);
    fn_801F13F0(p->z, *p->src);
    if (p->interlace == 0) {
        p->cur = 0;
        memset(p->rows[0], 0, p->rowbytes);
        memset(p->rows[1], 0, p->rowbytes);
        for (i = 0; i < p->rowsN; i++) {
            fn_801F20F0(p->z, *p->src, 1, &ft);
            f = ft;
            fn_801F20F0(p->z, *p->src, p->rowbytes, p->rows[p->cur]);
            fn_80148B68(p, f);
            memcpy(p->out + i * p->rowbytes, p->rows[p->cur], p->rowbytes);
            p->cur = !p->cur;
        }
    } else {
        for (p->pass = 0; p->pass < 7; p->pass++) {
        }
    }
    F(p, 76, u32) = 0;
}

} /* extern "C" */
