/* Functions from 0x8021CA10 to 0x8021CC4C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B250;
void fn_8021CA10(void **arg0) {
    extern u8 lbl_802F03A0[];
    extern u8 lbl_802F0388[];
    arg0[0] = lbl_802F03A0;
    arg0[0] = lbl_802F0388;
}

void fn_8021CA2C(s32 arg0) {
    lbl_8035B250 = arg0;
}

void fn_8021CC1C(void *arg0, s32 arg1, f32 *arg2) {
    f32 *src = (f32 *)(*(u8 **)((u8 *)arg0 + 0x3C) + arg1 * 0x10);
    arg2[0] = src[0];
    arg2[1] = src[1];
    arg2[2] = src[2];
    arg2[3] = src[3];
}

