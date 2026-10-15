/* Functions from 0x800B0510 to 0x800B057C, found by decomp-toolkit. */
#include "common.h"

s32 fn_800B0510(void* arg0, s32 arg1) {
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
