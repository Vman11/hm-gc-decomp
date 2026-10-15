/* Functions from 0x800A0C1C to 0x800A0C90, found by decomp-toolkit. */
#include "common.h"

s32 fn_800A0C1C(void) {
    return 1;
}

s32 fn_800A0C24(void* arg0, s32 arg1) {
    void* temp = *(void**)((char*)arg0 + 0x98);
    if (temp != NULL) {
        return *(s32*)((char*)*(void**)((char*)temp + 0xC) + arg1 * 4);
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 1;
    case 3: return 1;
    default: return 1;
    }
}

