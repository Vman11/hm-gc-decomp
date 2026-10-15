/* Functions from 0x8014B86C to 0x8014B890, found by decomp-toolkit. */
#include "common.h"

void *fn_8014B86C(void *arg0) {
    u32 count = (*(u8 *)((u8 *)arg0 + 0x551) + 7) >> 3;
    u32 result = *(u32 *)((u8 *)arg0 + 0x38);
    result = count * result;
    result += *(u32 *)((u8 *)arg0 + 0x544);
    result += 0x15;
    return (void *)result;
}
