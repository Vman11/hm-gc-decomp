/* Functions from 0x8004E8F0 to 0x8004E930, found by decomp-toolkit. */
#include "common.h"

s32 fn_8004E8F0(void) {
    return 1;
}

s32 fn_8004E8F8(void* arg0, s32 arg1) {
    void* temp = *(void**)((u8*)arg0 + 0x98);
    if (temp != NULL) {
        return ((s32*)*(void**)((u8*)temp + 0xC))[arg1];
    }
    if (arg1 != 0) {
        return 1;
    }
    return 1;
}

