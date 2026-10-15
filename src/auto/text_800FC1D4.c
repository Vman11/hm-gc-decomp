/* Functions from 0x800FC1D4 to 0x800FC1FC, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_802E21F0[];

void fn_800FC1D4(void *arg0) {
    *(void **)((char *)arg0 + 0x14) = lbl_802E21F0;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
}
