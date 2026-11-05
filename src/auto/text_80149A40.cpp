// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern void *lbl_8035ACA8;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *memset(void *, int, u32);
void fn_801F5DF4(void *, s32, s32);
struct S80149A40 { u8 *buf; u8 sub[0x58]; u32 w; u32 h; u8 f64; u32 f68; u8 f6c; u8 f6d; u8 f6e; u8 pad[0x93dc - 0x6f]; s32 f93dc; };
void fn_80149A40(S80149A40 *p, s32 a, s32 b, u32 w, u32 h, u8 c, u8 d, u8 e, u8 f, u8 g, u8 bpp, s32 z) {
    u32 size;
    fn_801F5DF4(p->sub, a, b);
    p->w = w;
    p->h = h;
    p->f64 = d;
    p->f68 = c;
    p->f6c = e;
    p->f6d = f;
    p->f6e = g;
    size = (bpp * (h * w) + 7) >> 3;
    if (!lbl_8035ACA8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ACA8);
    p->buf = new u8[size];
    fn_800F7E98();
    if (!p->buf) fn_800604C4(-4, 0, 0, 0);
    memset(p->buf, 0, size);
    p->f93dc = z;
}
}
