/* Functions from 0x8007FBA8 to 0x8007FC10, found by decomp-toolkit. */
#include "common.h"

s32 fn_8007FBA8(void) {
    return 1;
}

s32 fn_8007FBB0(void *arg0, s32 arg1) {
    void *temp = *(void **)((char *)arg0 + 0x98);
    if (temp != NULL) {
        return *(s32 *)((char *)*(void **)((char *)temp + 0xC) + arg1 * 4);
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 0;
    default: return 1;
    }
}

