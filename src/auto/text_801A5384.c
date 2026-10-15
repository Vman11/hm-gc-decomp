/* Functions from 0x801A5384 to 0x801A53B0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AEDC;
extern u8 lbl_802EA470[];

void fn_801A53A8(s32 arg0);

void fn_801A5384(void *arg0) {
    *(void **)((char *)arg0 + 0x10) = lbl_802EA470;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
}

void fn_801A53A8(s32 arg0) {
    lbl_8035AEDC = arg0;
}
