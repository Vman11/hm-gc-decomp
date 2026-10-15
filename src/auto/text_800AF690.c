/* Functions from 0x800AF690 to 0x800AF6F8, found by decomp-toolkit. */
#include "common.h"

s32 fn_800AF690(void) {
    return 1;
}

s32 fn_800AF698(void *arg0, s32 arg1) {
    void *temp = *(void **)((char *)arg0 + 0x98);
    if (temp != NULL) {
        return *(s32 *)((char *)*(void **)((char *)temp + 0xC) + arg1 * 4);
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 0;
    case 2: return 1;
    default: return 1;
    }
}

