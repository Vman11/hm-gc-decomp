/* Functions from 0x8014B86C to 0x8014B890, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void *fn_8014B86C(void *arg0) {
    u32 value = ((s32)(*(u8 *)((u8 *)arg0 + 0x551) + 7) >> 3) * ((u32 *)arg0)[0x38 / 4];
    u32 result = ((u32 *)arg0)[0x544 / 4];
    result = value + result;
    result += 0x15;
    return (void *)result;
}

} /* extern "C" */
