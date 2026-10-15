/* Functions from 0x80116DC0 to 0x80116E1C, found by decomp-toolkit. */
#include "common.h"

s32 fn_80116DC0(void *arg0) {
    return *(s32 *)((char *)arg0 + 8);
}

s32 fn_80116DC8(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}

s32 fn_80116DD0(s32 *arg0) {
    return *arg0;
}

s32 fn_80116DD8(void) {
    return 0;
}

void* fn_80116DE0(void* arg0, u32 arg1) {
    if (arg1 < *(u32*)((u8*)arg0 + 0x4)) {
        return *(u8**)((u8*)arg0 + 0xD4) + (arg1 << 6);
    }
    return NULL;
}

void fn_80116E04(u8* arg0) {
    *(s32*)(arg0 + 0xC0) = 0;
}

void fn_80116E10(void* arg0) {
    *(s32*)((u8*)arg0 + 0xC0) = 1;
}

