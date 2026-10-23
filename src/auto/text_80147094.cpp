// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12;
extern T12 lbl_8029BF10;
extern f32 lbl_80364398;
void fn_80121658(void *);

typedef struct S80147094 {
    u32 f0;
    u32 f4;
    u32 f8;
    u8 padC[0x3C - 0xC];
    u32 f3C[31];
    u8 padB8[0x178 - 0xB8];
    u32 f178;
    u32 f17C;
    u32 f180;
    u8 pad184[4];
    u32 f188;
    u32 f18C;
    u32 f190;
    u8 pad194[0x594 - 0x194];
    u32 f594;
    u32 f598;
    u32 f59C;
    u8 pad5A0[0x6C0 - 0x5A0];
    u32 f6C0;
    u32 f6C4;
    u8 f6C8[4];
    f32 f6CC;
    u32 f6D0;
    u32 f6D4;
    u32 f6D8;
    T12 f6DC;
    T12 f6E8;
    T12 f6F4;
    T12 f700;
} S80147094;

void fn_80147094(S80147094 *p) {
    p->f0 = 0;
    p->f4 = 0;
    p->f8 = 0;
    p->f3C[0] = 0;
    p->f3C[1] = 0;
    p->f3C[2] = 0;
    p->f3C[3] = 0;
    p->f3C[4] = 0;
    p->f3C[5] = 0;
    p->f3C[6] = 0;
    p->f3C[7] = 0;
    p->f3C[8] = 0;
    p->f3C[9] = 0;
    p->f3C[10] = 0;
    p->f3C[11] = 0;
    p->f3C[12] = 0;
    p->f3C[13] = 0;
    p->f3C[14] = 0;
    p->f3C[15] = 0;
    p->f3C[16] = 0;
    p->f3C[17] = 0;
    p->f3C[18] = 0;
    p->f3C[19] = 0;
    p->f3C[20] = 0;
    p->f3C[21] = 0;
    p->f3C[22] = 0;
    p->f3C[23] = 0;
    p->f3C[24] = 0;
    p->f3C[25] = 0;
    p->f3C[26] = 0;
    p->f3C[27] = 0;
    p->f3C[28] = 0;
    p->f3C[29] = 0;
    p->f3C[30] = 0;
    p->f178 = 0;
    p->f17C = 0;
    p->f180 = 0;
    p->f188 = 0;
    p->f18C = 0;
    p->f190 = 0;
    p->f598 = 0;
    p->f594 = 0;
    p->f59C = 0;
    p->f6DC = lbl_8029BF10;
    p->f6E8 = lbl_8029BF10;
    p->f6F4 = lbl_8029BF10;
    p->f700 = lbl_8029BF10;
    p->f6C0 = 0;
    p->f6C4 = 0;
    fn_80121658(p->f6C8);
    p->f6D0 = 0;
    p->f6D4 = 0;
    p->f6D8 = 0;
    p->f6CC = lbl_80364398;
}

} /* extern "C" */
