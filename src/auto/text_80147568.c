/* Functions from 0x80147568 to 0x80147CD8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC98;
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

