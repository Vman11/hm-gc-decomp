#include "common.h"

extern "C" {
struct O { u8 pad[16]; s32 w; u8 pad14[0x544 - 0x14]; u32 *px; };
static inline u32 Bits(u32 *d, int hi, int lo) {
    u32 r = 0;
    int i;
    for (i = hi; i >= lo; i--) { r <<= 1; r |= (d[i >> 5] >> (i & 31)) & 1; }
    return r;
}
void fn_80121EE4(struct O *o, int bx, int by, u32 *d) {
    u8 pal[4][4];
    int b;
    u32 i;
    int y0;
    int x0;
    pal[3][0] = Bits(d, 123, 119);
    pal[3][0] = (pal[3][0] << 3) | ((pal[3][0] >> 2) & 7);
    pal[3][1] = Bits(d, 118, 114);
    pal[3][1] = (pal[3][1] << 3) | ((pal[3][1] >> 2) & 7);
    pal[3][2] = Bits(d, 113, 109);
    pal[3][2] = (pal[3][2] << 3) | ((pal[3][2] >> 2) & 7);
    pal[3][3] = 0xff;
    pal[2][0] = Bits(d, 108, 104);
    pal[2][0] = (pal[2][0] << 3) | ((pal[2][0] >> 2) & 7);
    pal[2][1] = Bits(d, 103, 99);
    pal[2][1] = (pal[2][1] << 3) | ((pal[2][1] >> 2) & 7);
    pal[2][2] = Bits(d, 98, 94);
    pal[2][2] = (pal[2][2] << 3) | ((pal[2][2] >> 2) & 7);
    pal[2][3] = 0xff;
    pal[1][0] = Bits(d, 93, 89);
    pal[1][0] = (pal[1][0] << 3) | ((pal[1][0] >> 2) & 7);
    pal[1][1] = Bits(d, 88, 84);
    pal[1][1] = (pal[1][1] << 3) | ((pal[1][1] >> 2) & 7);
    pal[1][2] = Bits(d, 83, 79);
    pal[1][2] = (pal[1][2] << 3) | ((pal[1][2] >> 2) & 7);
    pal[1][3] = 0xff;
    pal[0][0] = Bits(d, 78, 74);
    pal[0][0] = (pal[0][0] << 3) | ((pal[0][0] >> 2) & 7);
    pal[0][1] = Bits(d, 73, 69);
    pal[0][1] = (pal[0][1] << 3) | ((pal[0][1] >> 2) & 7);
    pal[0][2] = Bits(d, 68, 64);
    pal[0][2] = (pal[0][2] << 3) | ((pal[0][2] >> 2) & 7);
    pal[0][3] = 0xff;
    y0 = by * 4; x0 = bx * 8;
    for (i = 0; i < 32; i++) {
        u8 *c;
        int idx = (y0 + ((i >> 2) & 3)) * o->w + x0 + ((i & 3) | ((i >> 2) & 4));
        b = i * 2;
        c = pal[Bits(d, b + 1, b)];
        o->px[idx] = (c[3] << 24) | (c[0] << 16) | (c[1] << 8) | c[2];
    }
}
}
