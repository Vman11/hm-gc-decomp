/* Functions from 0x8012FDD4 to 0x8012FE8C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80363F80;
extern s32 lbl_8035ABF8;
extern f32 lbl_803596E0[];
extern f32 lbl_80363F84;
void fn_8012FDD4(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x2C) &= 0xFFFFFFBF;
}

void fn_8012FDE4(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, u32 *, 0x2C) |= lbl_80363F80;
    M2C_FIELD(arg0, s8 *, 0x36) = arg1;
    M2C_FIELD(arg0, s8 *, 0x37) = arg2;
}

