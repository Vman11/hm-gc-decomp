/* Functions from 0x80058404 to 0x80058478, found by decomp-toolkit. */
#include "common.h"

s32 fn_80058404(void) { return 1; }

s32 fn_8005840C(void* arg0, s32 arg1) {
    void* temp = *(void**)((char*)arg0 + 0x98);
    if (temp != NULL) {
        return *(s32*)((char*)*(void**)((char*)temp + 0xC) + arg1 * 4);
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 0;
    case 2: return 1;
    case 3: return 0;
    default: return 1;
    }
}

