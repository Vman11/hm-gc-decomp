/* Functions from 0x802113F8 to 0x8021141C, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802EFE20[];

void fn_802113F8(void *arg0) {
    *(void **)((char *)arg0 + 0x10) = lbl_802EFE20;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
}
