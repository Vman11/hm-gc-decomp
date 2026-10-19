/* Functions from 0x801EB864 to 0x801EB890, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B0A8;
extern u8 lbl_802EE0B8[];

void __ct__9C801EB864Fv(void *arg0) {
    *(void **)((char *)arg0 + 0x14) = &lbl_802EE0B8;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
}

void fn_801EB888(s32 arg0) {
    lbl_8035B0A8 = arg0;
}
