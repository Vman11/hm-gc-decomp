/* Functions from 0x80208870 to 0x8020888C, found by decomp-toolkit. */
#include "common.h"

void fn_80208870(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    *(s32 *)((u8 *)arg0 + 0xC) = arg4;
    *(s32 *)((u8 *)arg0 + 0x10) = arg3;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
}
