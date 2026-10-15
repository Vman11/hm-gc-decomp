/* Functions from 0x801CE630 to 0x801CE67C, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035B024;

void fn_801CE630(void *arg0) {
    extern u8 lbl_802EC4F0[];
    *(void **)((char *)arg0 + 0x34) = lbl_802EC4F0;
    *(s32 *)((char *)arg0 + 0x30) = 0;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
}

void fn_801CE674(s32 arg0) {
    lbl_8035B024 = arg0;
}
