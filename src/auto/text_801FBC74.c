/* Functions from 0x801FBC74 to 0x801FBCC4, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_803655AC;
void fn_801FBC74(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x54) = arg1;
}

void fn_801FBC7C(s32 *arg0) {
    *arg0 &= 0xFFFFFFBF;
}

void fn_801FBC8C(s32 *arg0) {
    *arg0 |= lbl_803655AC;
}

void fn_801FBCB4(s32 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

