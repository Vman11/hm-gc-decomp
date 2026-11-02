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
void fn_801244A4(O *o, int bx, int by, u32 *d) {
    u8 pal[8][4];
    int b;
    u32 i;
    int y0;
    int x0;
    pal[7][3] = 0;
    pal[7][1] = 0;
    pal[7][2] = 0;
    pal[7][0] = 0;
    pal[6][0] = Bits(d, 0x7d, 0x79);
    pal[6][0] = (pal[6][0] << 3) | ((pal[6][0] >> 2) & 7);
    pal[6][1] = Bits(d, 0x78, 0x74);
    pal[6][1] = (pal[6][1] << 3) | ((pal[6][1] >> 2) & 7);
    pal[6][2] = Bits(d, 0x73, 0x6f);
    pal[6][2] = (pal[6][2] << 3) | ((pal[6][2] >> 2) & 7);
    pal[6][3] = 0xff;
    pal[0][0] = Bits(d, 0x6e, 0x6a);
    pal[0][0] = (pal[0][0] << 3) | ((pal[0][0] >> 2) & 7);
    pal[0][1] = Bits(d, 0x69, 0x65);
    pal[0][1] = (pal[0][1] << 3) | ((pal[0][1] >> 2) & 7);
    pal[0][2] = Bits(d, 0x64, 0x60);
    *(volatile u8 *)&pal[0][2] = (pal[0][2] << 3) | ((pal[0][2] >> 2) & 7);
    pal[0][3] = 0xff;
    fn_80121158(*(volatile f32 *)&lbl_80363E10, pal[1], pal[0], pal[6]);
    fn_80121158(lbl_80363E08, pal[2], pal[0], pal[6]);
    fn_80121158(lbl_80363E14, pal[3], pal[0], pal[6]);
    fn_80121158(lbl_80363E0C, pal[4], pal[0], pal[6]);
    fn_80121158(lbl_80363E18, pal[5], pal[0], pal[6]);
    y0 = by * 4; x0 = bx * 8;
    for (i = 0; i < 32; i++) {
        u8 *c;
        int idx = (y0 + ((i >> 2) & 3)) * o->w + x0 + ((i & 3) | ((i >> 2) & 4));
        b = i * 3;
        c = pal[Bits(d, b + 2, b)];
        o->px[idx] = (c[3] << 24) | (c[0] << 16) | (c[1] << 8) | c[2];
    }
}

} /* extern "C" */
