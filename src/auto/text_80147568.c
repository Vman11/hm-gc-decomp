/* Functions from 0x80147568 to 0x80147CD8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC98;

typedef struct {
    u16 unk0;
    u16 unk2;
    u32 rmask;
    u32 gmask;
    u32 bmask;
    u32 amask;
} PixelFormat_80147568;

typedef struct {
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} Color_80147568;

static inline s32 MaskShift(u32 mask) {
    s32 shift;
    if (mask == 0) {
        return 32;
    }
    for (shift = 0; !(mask & 1); shift++) {
        mask >>= 1;
    }
    return shift;
}

static inline s32 MaskBits(u32 mask) {
    s32 bits;
    if (mask == 0) {
        return 0;
    }
    while (!(mask & 1)) {
        mask >>= 1;
    }
    for (bits = 0; mask & 1; bits++) {
        mask >>= 1;
    }
    return bits;
}
void fn_80147568(s32 arg0) {
    lbl_8035AC98 = arg0;
}

u8 fn_80147A68(u8 *arg0, u8 *arg1) {
    s32 result = 0;
    if (*(u16 *)(arg0 + 0) == *(u16 *)(arg1 + 0) && *(u16 *)(arg0 + 2) == *(u16 *)(arg1 + 2) &&
        *(u32 *)(arg0 + 4) == *(u32 *)(arg1 + 4) && *(u32 *)(arg0 + 8) == *(u32 *)(arg1 + 8) &&
        *(u32 *)(arg0 + 0xC) == *(u32 *)(arg1 + 0xC) && *(u32 *)(arg0 + 0x10) == *(u32 *)(arg1 + 0x10)) {
        result = 1;
    }
    return result;
}

void fn_80147AD8(u32 *arg0, u32 arg1, u8 *arg2) {
    u32 r = (arg1 & arg0[1]) >> MaskShift(arg0[1]);
    u32 g = (arg1 & arg0[2]) >> MaskShift(arg0[2]);
    u32 b = (arg1 & arg0[3]) >> MaskShift(arg0[3]);
    u32 a = (arg1 & arg0[4]) >> MaskShift(arg0[4]);
    arg2[0] = r << (8 - MaskBits(arg0[1]));
    arg2[1] = g << (8 - MaskBits(arg0[2]));
    arg2[2] = b << (8 - MaskBits(arg0[3]));
    arg2[3] = a << (8 - MaskBits(arg0[4]));
}

