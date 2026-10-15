/* Functions from 0x801DB204 to 0x801DB220, found by decomp-toolkit. */
#include "common.h"

void fn_801DB204(void *arg0, s32 arg1) {
    *(u8 *)((u8 *)arg0 + 0xEC) = 0;
    *(u8 *)((u8 *)arg0 + 0xE4) = 0;
    *(s32 *)((u8 *)arg0 + 0xE0) = arg1;
}

s32 fn_801DB218(void) {
    return 0x39;
}
