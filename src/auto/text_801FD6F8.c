/* Functions from 0x801FD6F8 to 0x801FD714, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_802EF4A0[];

void fn_801FD6F8(void *arg0) {
    u8 *p = (u8 *)arg0;
    *(u8 **)(p + 0xC) = lbl_802EF4A0;
    p[0] = 0;
    *(u32 *)(p + 8) = 0;
}
