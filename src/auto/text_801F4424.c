/* Functions from 0x801F4424 to 0x801F4430, found by decomp-toolkit. */
#include "common.h"

void fn_801F4424(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0x1C) = arg1;
    *(s32 *)(arg0 + 0x18) = arg2;
}
