// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { u8 pad[16]; s32 w; u8 pad14[0x544 - 0x14]; u32 *px; };
extern f32 lbl_80363E08, lbl_80363E0C, lbl_80363E10, lbl_80363E14, lbl_80363E18;
void fn_80121158(f32 t, u8 *out, const u8 *a, const u8 *b);
static inline u32 Bits(u32 *d, int hi, int lo) {
    u32 r = 0;
    int i;
    for (i = hi; i >= lo; i--) { r <<= 1; r |= (d[i >> 5] >> (i & 31)) & 1; }
    return r;
}
void fn_801229D0(O *o, int bx, int by, u32 *d) {
    u8 pal[8][4];
    int b;
    u32 i;
    int y0;
    int x0;
    if (Bits(d, 0x7c, 0x7c)) {
        pal[0][0] = Bits(d, 0x4e, 0x4a);
        pal[0][0] = (pal[0][0] << 3) | ((pal[0][0] >> 2) & 7);
        pal[0][1] = Bits(d, 0x49, 0x45);
        pal[0][1] = (pal[0][1] << 3) | ((pal[0][1] >> 2) & 7);
        pal[0][2] = Bits(d, 0x44, 0x40);
        pal[0][2] = (pal[0][2] << 3) | ((pal[0][2] >> 2) & 7);
        pal[0][3] = Bits(d, 0x71, 0x6d);
        pal[0][3] = (pal[0][3] << 3) | ((pal[0][3] >> 2) & 7);
        pal[3][0] = Bits(d, 0x5d, 0x59);
        pal[3][0] = (pal[3][0] << 3) | ((pal[3][0] >> 2) & 7);
        pal[3][1] = Bits(d, 0x58, 0x54);
        pal[3][1] = (pal[3][1] << 3) | ((pal[3][1] >> 2) & 7);
        pal[3][2] = Bits(d, 0x53, 0x4f);
        pal[3][2] = (pal[3][2] << 3) | ((pal[3][2] >> 2) & 7);
        pal[3][3] = Bits(d, 0x76, 0x72);
        *(volatile u8 *)&pal[3][3] = (pal[3][3] << 3) | ((pal[3][3] >> 2) & 7);
        fn_80121158(*(volatile f32 *)&lbl_80363E08, pal[1], pal[0], pal[3]);
        fn_80121158(lbl_80363E0C, pal[2], pal[0], pal[3]);
        pal[4][0] = Bits(d, 0x6c, 0x68);
        pal[4][0] = (pal[4][0] << 3) | ((pal[4][0] >> 2) & 7);
        pal[4][1] = Bits(d, 0x67, 0x63);
        pal[4][1] = (pal[4][1] << 3) | ((pal[4][1] >> 2) & 7);
        pal[4][2] = Bits(d, 0x62, 0x5e);
        pal[4][2] = (pal[4][2] << 3) | ((pal[4][2] >> 2) & 7);
        pal[4][3] = Bits(d, 0x7b, 0x77);
        pal[4][3] = (pal[4][3] << 3) | ((pal[4][3] >> 2) & 7);
        pal[7][0] = Bits(d, 0x5d, 0x59);
        pal[7][0] = (pal[7][0] << 3) | ((pal[7][0] >> 2) & 7);
        pal[7][1] = Bits(d, 0x58, 0x54);
        pal[7][1] = (pal[7][1] << 3) | ((pal[7][1] >> 2) & 7);
        pal[7][2] = Bits(d, 0x53, 0x4f);
        pal[7][2] = (pal[7][2] << 3) | ((pal[7][2] >> 2) & 7);
        pal[7][3] = Bits(d, 0x76, 0x72);
        *(volatile u8 *)&pal[7][3] = (pal[7][3] << 3) | ((pal[7][3] >> 2) & 7);
        fn_80121158(*(volatile f32 *)&lbl_80363E08, pal[5], pal[4], pal[7]);
        fn_80121158(lbl_80363E0C, pal[6], pal[4], pal[7]);
        y0 = by * 4; x0 = bx * 8;
        for (i = 0; i < 16; i++) {
            u32 k;
            int idx = (y0 + ((i >> 2) & 3)) * o->w + x0 + ((i & 3) | ((i >> 2) & 4));
            b = i * 2;
            k = Bits(d, b + 1, b);
            o->px[idx] = (pal[k][3] << 24) | (pal[k][0] << 16) | (pal[k][1] << 8) | pal[k][2];
        }
        for (i = 16; i < 32; i++) {
            u32 k;
            int idx = (y0 + ((i >> 2) & 3)) * o->w + x0 + ((i & 3) | ((i >> 2) & 4));
            b = i * 2;
            k = Bits(d, b + 1, b);
            o->px[idx] = (pal[k + 4][3] << 24) | (pal[k + 4][0] << 16) | (pal[k + 4][1] << 8) | pal[k + 4][2];
        }
    } else {
        pal[0][0] = Bits(d, 0x4e, 0x4a);
        pal[0][0] = (pal[0][0] << 3) | ((pal[0][0] >> 2) & 7);
        pal[0][1] = Bits(d, 0x49, 0x45);
        pal[0][1] = (pal[0][1] << 3) | ((pal[0][1] >> 2) & 7);
        pal[0][2] = Bits(d, 0x44, 0x40);
        pal[0][2] = (pal[0][2] << 3) | ((pal[0][2] >> 2) & 7);
        pal[0][3] = Bits(d, 0x71, 0x6d);
        pal[0][3] = (pal[0][3] << 3) | ((pal[0][3] >> 2) & 7);
        pal[1][0] = Bits(d, 0x5d, 0x59);
        pal[1][0] = (pal[1][0] << 3) | ((pal[1][0] >> 2) & 7);
        pal[1][1] = Bits(d, 0x58, 0x54);
        pal[1][1] = (pal[1][1] << 3) | ((pal[1][1] >> 2) & 7);
        pal[1][2] = Bits(d, 0x53, 0x4f);
        pal[1][2] = (pal[1][2] << 3) | ((pal[1][2] >> 2) & 7);
        pal[1][3] = Bits(d, 0x76, 0x72);
        pal[1][3] = (pal[1][3] << 3) | ((pal[1][3] >> 2) & 7);
        pal[2][0] = Bits(d, 0x6c, 0x68);
        pal[2][0] = (pal[2][0] << 3) | ((pal[2][0] >> 2) & 7);
        pal[2][1] = Bits(d, 0x67, 0x63);
        pal[2][1] = (pal[2][1] << 3) | ((pal[2][1] >> 2) & 7);
        pal[2][2] = Bits(d, 0x62, 0x5e);
        pal[2][2] = (pal[2][2] << 3) | ((pal[2][2] >> 2) & 7);
        pal[2][3] = Bits(d, 0x7b, 0x77);
        pal[2][3] = (pal[2][3] << 3) | ((pal[2][3] >> 2) & 7);
        pal[3][0] = 0;
        pal[3][1] = 0;
        pal[3][2] = 0;
        pal[3][3] = 0;
        y0 = by * 4; x0 = bx * 8;
        for (i = 0; i < 32; i++) {
            u32 k;
            int idx = (y0 + ((i >> 2) & 3)) * o->w + x0 + ((i & 3) | ((i >> 2) & 4));
            b = i * 2;
            k = Bits(d, b + 1, b);
            o->px[idx] = (pal[k][3] << 24) | (pal[k][0] << 16) | (pal[k][1] << 8) | pal[k][2];
        }
    }
}

}
