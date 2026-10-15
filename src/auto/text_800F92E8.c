/* Functions from 0x800F92E8 to 0x800F9324, found by decomp-toolkit. */
#include "common.h"

void fn_800F930C(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

extern s32 lbl_8035A9F8;
void fn_800F931C(s32 arg0) {
    lbl_8035A9F8 = arg0;
}

