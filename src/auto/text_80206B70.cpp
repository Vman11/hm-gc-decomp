// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_F { u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual s32 seek(u32 pos); };
void fn_801485B4(u8 *p, s32 r);
void fn_801486B4(u8 *p, const char *s);
s32 fn_802108B4(void *f, void *buf, s32 n, s32 *got);
void fn_80148210(void *p, s32 a, s32 b, s32 c, s32 d);
void fn_80148288(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void fn_80148194(void *p, s32 a);
static const u32 wA_fmts[8] = { 0, 1, 2, 3, 4, 5, 6, 0xE };

inline u32 wA_be32(char *b) { return b[3] + (b[2] << 8) + (b[1] << 16) + (b[0] << 24); }
inline u32 wA_be16(u8 *b) { return b[1] + (b[0] << 8); }

void fn_80206B70(u8 *p) {
    s32 got;
    char hdr[0x10];
    char img[0x24];
    s32 r;
    u32 bpp;
    u32 off;

    if ((r = fn_802108B4(p + 0x30, hdr, 0x10, &got)) != 0) {
        fn_801485B4(p, r);
    }
    if (wA_be32(hdr + 4) != 1) {
        fn_801486B4(p, "AtGrGCNTplLoader::vReadHeader - more than one tpl in file.");
    }
    if ((r = (*(wA_F **)(p + 0x34))->seek(wA_be32(hdr + 12))) != 0) {
        fn_801485B4(p, r);
    }
    if ((r = fn_802108B4(p + 0x30, img, 0x24, &got)) != 0) {
        fn_801485B4(p, r);
    }
    *(u32 *)(p + 0x10) = wA_be16((u8 *)img + 2);
    *(u32 *)(p + 0x14) = wA_be16((u8 *)img);
    *(u32 *)(p + 0x540) = wA_be32(img + 4);
    {
        u32 i;
        for (i = 0; i < 8; i++) {
            if (*(u32 *)(p + 0x540) == wA_fmts[i]) break;
        }
        if (i == 8) {
            fn_801486B4(p, "AtGrGCNTplLoader::vReadHeader - Unsupported file format.");
        }
    }
    off = wA_be32(img + 8);
    if (((u8 *)img)[0x21] <= ((u8 *)img)[0x22]) {
        *(u32 *)(p + 0x544) = ((u8 *)img)[0x22] - ((u8 *)img)[0x21] + 1;
    } else {
        *(u32 *)(p + 0x544) = 1;
    }
    if ((r = (*(wA_F **)(p + 0x34))->seek(off)) != 0) {
        fn_801485B4(p, r);
    }
    *(u32 *)(p + 0x54c) = off;
    switch (*(u32 *)(p + 0x540)) {
    case 0:
        fn_80148210(p + 0x1c, 4, 0xf, 0, 0);
        bpp = 8;
        break;
    case 1:
        fn_80148210(p + 0x1c, 8, 0xff, 0, 0);
        bpp = 8;
        break;
    case 2:
        fn_80148210(p + 0x1c, 8, 0xf, 0xf0, 0);
        bpp = 8;
        break;
    case 3:
        fn_80148210(p + 0x1c, 0x10, 0xff, 0xff00, 0);
        bpp = 4;
        break;
    case 4:
        fn_80148288(p + 0x1c, 0x10, 0xf800, 0x7e0, 0x1f, 0, 0);
        bpp = 4;
        break;
    case 5:
        fn_80148288(p + 0x1c, 0x10, 0xf00, 0xf0, 0xf, 0x3000, 0);
        bpp = 4;
        break;
    case 6:
        fn_80148288(p + 0x1c, 0x20, 0xff0000, 0xff00, 0xff, 0xff000000, 0);
        bpp = 4;
        break;
    case 0xe:
        fn_80148194(p + 0x1c, 0);
        bpp = 8;
        break;
    }
    *(u32 *)(p + 0x550) = 0;
    {
        u32 j;
        s32 w = *(s32 *)(p + 0x10);
        s32 h = *(s32 *)(p + 0x14);
        u32 n = 0;
        for (j = 0; j < *(u32 *)(p + 0x544); j++) {
            if (w < (s32)bpp || h < (s32)bpp) {
                j = *(u32 *)(p + 0x544);
            } else {
                s32 a = w * h;
                *(u32 *)(p + 0x550) += (u32)(a * *(u16 *)(p + 0x1e)) >> 3;
                w >>= 1;
                h >>= 1;
                n++;
            }
        }
        if (n != *(u32 *)(p + 0x544)) {
            *(u32 *)(p + 0x544) = n;
        }
    }
}

} /* extern "C" */
