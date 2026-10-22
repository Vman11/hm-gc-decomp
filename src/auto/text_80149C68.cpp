// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void fn_801485B4(u8 *p, s32 err);
extern s32 fn_802108B4(u8 *a, u8 *b, u32 c, void *d);
struct VCall_fn_80149C68_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual s32 m(u32); };

void fn_80149C68(u8 *p, u8 *buf) {
    s32 r;
    u8 *d = buf;
    u8 tmp[16];
    *d++ = *(u32 *)(p + 0x540);
    *d++ = *(u32 *)(p + 0x540) >> 8;
    *d++ = *(u32 *)(p + 0x540) >> 16;
    *d++ = *(u32 *)(p + 0x540) >> 24;
    *d++ = *(u32 *)(p + 0x14);
    *d++ = *(u32 *)(p + 0x14) >> 8;
    *d++ = *(u32 *)(p + 0x14) >> 16;
    *d++ = *(u32 *)(p + 0x14) >> 24;
    *d++ = *(u32 *)(p + 0x10);
    *d++ = *(u32 *)(p + 0x10) >> 8;
    *d++ = *(u32 *)(p + 0x10) >> 16;
    *d++ = *(u32 *)(p + 0x10) >> 24;
    *d++ = p[0x54d];
    *d++ = p[0x54c];
    *d++ = p[0x54e];
    *d++ = p[0x54f];
    *d++ = p[0x550];
    *d++ = p[0x551];
    r = (*(VCall_fn_80149C68_0 **)(p + 0x34))->m(*(u32 *)(p + 0x548));
    if (r) fn_801485B4(p, r);
    r = fn_802108B4(p + 0x30, d, *(u32 *)(p + 0x540), tmp);
    if (r) fn_801485B4(p, r);
}

} /* extern "C" */
