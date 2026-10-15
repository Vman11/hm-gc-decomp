/* Functions from 0x801FD50C to 0x801FD52C, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802EF488[];
void fn_801FD50C(void** arg0) {
    *arg0 = lbl_802EF488;
}

void fn_801FD51C(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}
