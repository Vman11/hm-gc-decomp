/* Functions from 0x8017C964 to 0x8017C994, found by decomp-toolkit. */
#include "common.h"

void fn_8017C964(void *arg0) {
    extern u8 lbl_802E8660[];
    *(void **)((char *)arg0 + 0x18) = lbl_802E8660;
    *(s32 *)((char *)arg0 + 0x0) = -1;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
}
