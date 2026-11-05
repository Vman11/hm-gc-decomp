// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* NonMatching: GC/2.0p1 + lmw; instructions match (SDIFF 0), only callee-saved register colouring differs.
   Matching would also need the unit to own .sdata2 0x803658E0..0x803658F0 (255.0f, 1.0f, u32->float magic). */
typedef struct Con {
    u8 pad0[4];
    u32 x0;
    u32 y;
    u32 xoff;
    u8 pad10[8];
    u32 h;
    u32 fg;
    u32 bg;
} Con;

extern u8 lbl_802A7660[];
void fn_800D68A4(u16 x, u16 y, u32 *c);
void fn_800D68C8(u16 x, u16 y, u32 c);
void fn_800D68E8(u16 x, u16 y, u32 z);

static inline void blend(u32 x, u32 y, u32 col) {
    u32 d;
    f32 a, ia;
    u32 o;
    fn_800D68A4(x, y, &d);
    a = (f32)(col >> 24) / 255.0f;
    ia = 1.0f - a;
    o = (u32)(a * (f32)(col & 0xFF00) + ia * (f32)(d & 0xFF00)) & 0xFF00;
    o |= (u32)(a * (f32)(col & 0xFF0000) + ia * (f32)(d & 0xFF0000)) & 0xFF0000;
    o |= (u32)(a * (f32)(col & 0xFF) + ia * (f32)(d & 0xFF)) & 0xFF;
    fn_800D68C8(x, y, o | (u32)(a * (f32)(col & 0xFF000000) + ia * (f32)(d & 0xFF000000)) & 0xFF000000);
    fn_800D68E8(x, y, 0);
}

void fn_80219EF4(Con *c, u8 ch) {
    u32 y = c->y;
    u8 *g = &lbl_802A7660[ch * 8];
    u32 x = c->x0 + c->xoff;
    u32 i, j, k;
    for (i = 0; i < 8; i++) {
        blend(x + i, y, c->bg);
    }
    y++;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((0x80 >> j) & g[i]) {
                for (k = 0; k < c->h; k++) blend(x + j, y + k, c->fg);
            } else {
                for (k = 0; k < c->h; k++) blend(x + j, y + k, c->bg);
            }
        }
        y += c->h;
    }
    c->xoff += 8;
}

}
