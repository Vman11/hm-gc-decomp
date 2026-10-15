/* Functions from 0x8010AB5C to 0x8010AB74, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010AB5C(void *arg0, void *arg1) {
    return *(u32 *)((u8 *)arg0 + 0xC) == *(u32 *)((u8 *)arg1 + 0xC);
}
