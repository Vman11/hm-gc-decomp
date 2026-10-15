/* Functions from 0x80171064 to 0x80171098, found by decomp-toolkit. */
#include "common.h"

s32 fn_80171064(void) {
    return 3;
}

s32 fn_8017106C(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4) != 0;
}

void fn_80171080(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0xE8) = 0;
    *(s32 *)((u8 *)arg0 + 0x1DC) = 0;
}

