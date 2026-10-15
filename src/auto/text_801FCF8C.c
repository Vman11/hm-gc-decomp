/* Functions from 0x801FCF8C to 0x801FCFBC, found by decomp-toolkit. */
#include "common.h"

void fn_801FCF8C(void *arg0) {
    extern u8 lbl_802EF380[];
    *(void **)((char *)arg0 + 0x1C) = lbl_802EF380;
    *(u8 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = -1;
}
