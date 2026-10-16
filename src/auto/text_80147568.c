/* Functions from 0x80147568 to 0x80147CD8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC98;

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

