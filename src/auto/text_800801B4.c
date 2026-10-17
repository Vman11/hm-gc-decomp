/* Functions from 0x800801B4 to 0x8008021C, found by decomp-toolkit. */
#include "common.h"

s32 fn_800801B4(void) {
    return 1;
}

s32 fn_800801BC(void *arg0, s32 idx) {
    void *ptr = *(void **)((u8 *)arg0 + 0x98);
    if (ptr != NULL) {
        return *(s32 *)((*(u32 *)((u8 *)ptr + 0xC)) + idx * 4);
    }
    switch (idx) {
    case 0: return 0;
    case 1: return 0;
    case 2: return 0;
    default: return 1;
    }
}

