// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct Tex { u16 f0; u16 bpp; u8 pad4[24]; u16 w; u16 h; u8 pad20[36]; u32 *data; };
extern char lbl_802A02E0[];
void fn_80060568(char *, s32, s32, s32);

void fn_801548F0(Tex *a, Tex *b) {
    u32 *s = b->data;
    u32 *dst = a->data;
    u32 sp = (b->w * b->bpp + 7) / 32u;
    u32 dp = (a->w * a->bpp + 7) / 32u;
    u32 *t, *p, *ce, *d, *re, *de;
    switch (b->bpp) {
    case 4:
        t = s; p = s; d = dst; ce = s + sp * 8; re = s + (b->w >> 3); de = dst + dp * a->h;
        do {
            *d = *p;
            p += sp;
            if (p >= ce) {
                t++;
                if (t >= re) { s += sp * 8; t = s; re = s + (a->w >> 3); }
                p = t; ce = t + sp * 8;
            }
            d++;
        } while (d < de);
        break;
    case 8:
        t = s; p = s; d = dst; re = s + (b->w >> 2); ce = s + sp * 4; de = dst + dp * a->h;
        do {
            d[0] = p[0];
            d[1] = p[1];
            p += sp;
            if (p >= ce) {
                t += 2;
                if (t >= re) { s += sp * 4; t = s; re = s + (a->w >> 2); }
                p = t; ce = t + sp * 4;
            }
            d += 2;
        } while (d < de);
        break;
    case 16:
        t = s; p = s; d = dst; re = s + (b->w >> 1); ce = s + sp * 4; de = dst + dp * a->h;
        do {
            d[0] = p[0];
            d[1] = p[1];
            p += sp;
            if (p >= ce) {
                t += 2;
                if (t >= re) { s += sp * 4; t = s; re = s + (a->w >> 1); }
                p = t; ce = t + sp * 4;
            }
            d += 2;
        } while (d < de);
        break;
    case 32:
        t = s; p = s; d = dst; re = s + b->w; ce = s + sp * 4; de = dst + dp * a->h;
        do {
            d[0] = (p[1] >> 16) | (p[0] & 0xFFFF0000);
            d[1] = (p[3] >> 16) | (p[2] & 0xFFFF0000);
            d[8] = (p[1] & 0xFFFF) | (p[0] << 16);
            d[9] = (p[3] & 0xFFFF) | (p[2] << 16);
            p += sp;
            if (p >= ce) {
                t += 4;
                d += 10;
                if (t >= re) { s += sp * 4; t = s; re = s + a->w; }
                p = t; ce = t + sp * 4;
            } else {
                d += 2;
            }
        } while (d < de);
        break;
    default:
        fn_80060568(lbl_802A02E0, 0, 0, 0);
        break;
    }
}
}
