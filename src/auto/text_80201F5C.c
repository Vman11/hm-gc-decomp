/* Functions from 0x80201F5C to 0x80201F68, found by decomp-toolkit. */
#include "common.h"

void fn_80201F5C(u8* arg0, s32 arg1, s32 arg2) {
    *(s32*)(arg0 + 0x9C) = arg1;
    *(s32*)(arg0 + 0xA0) = arg2;
}
