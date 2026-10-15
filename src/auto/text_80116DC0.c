/* Functions from 0x80116DC0 to 0x80116E1C, found by decomp-toolkit. */
#include "common.h"

void* fn_80116DE0(void* arg0, u32 arg1) {
    if (arg1 < *(u32*)((u8*)arg0 + 0x4)) {
        return *(u8**)((u8*)arg0 + 0xD4) + (arg1 << 6);
    }
    return NULL;
}

void fn_80116E10(void* arg0) {
    *(s32*)((u8*)arg0 + 0xC0) = 1;
}

