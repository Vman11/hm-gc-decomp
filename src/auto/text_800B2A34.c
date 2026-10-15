/* Functions from 0x800B2A34 to 0x800B2A74, found by decomp-toolkit. */
#include "common.h"

s32 fn_800B2A34(void) {
    return 1;
}

s32 fn_800B2A3C(void *arg0, s32 arg1) {
    void *temp = *(void **)((char *)arg0 + 0x98);
    if (temp != NULL) {
        return *(s32 *)((char *)*(void **)((char *)temp + 0xC) + arg1 * 4);
    }
    switch (arg1) {
    case 0:
        return 1;
    default:
        return 1;
    }
}

