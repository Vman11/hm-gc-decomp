/* Functions from 0x801C4C40 to 0x801C4C88, found by decomp-toolkit. */
#include "common.h"

void fn_801C4C40(void* arg0, f32 arg1) {
    void* temp = *(void**)((char*)arg0 + 0x16C);
    f32 value;
    if (*(s32*)((char*)temp + 0x168) != 0) {
        value = *(f32*)((char*)temp + 0x1A4) - *(f32*)((char*)temp + 0x19C);
        *(f32*)((char*)temp + 0x1B4) = value * arg1;
    } else {
        value = *(f32*)((char*)temp + 0x1A8) - *(f32*)((char*)temp + 0x1A0);
        *(f32*)((char*)temp + 0x1B8) = value * arg1;
    }
}

s32 fn_801C4C80(void) {
    return 0x58;
}
