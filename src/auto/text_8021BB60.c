/* Functions from 0x8021BB60 to 0x8021BB88, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B248;

extern s32 lbl_8035B248;

extern s32 lbl_8035B248;

void fn_8021BB60(void *arg0) {
    u8 *p = (u8 *)arg0;
    extern u8 lbl_802F0258[];
    *(u8 **)(p + 0x10) = lbl_802F0258;
    *(u32 *)(p + 0) = 0;
    p[4] = 0;
    *(u32 *)(p + 0xC) = 0;
}

void fn_8021BB80(s32 arg0) {
    lbl_8035B248 = arg0;
}
