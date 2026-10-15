/* Functions from 0x8010EFF8 to 0x8010F01C, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_802E2A38[];

void fn_8010EFF8(void *arg0) {
    *(void **)((char *)arg0 + 0x14) = lbl_802E2A38;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
}
