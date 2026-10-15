/* Functions from 0x8022ACD8 to 0x8022AD0C, found by decomp-toolkit. */
#include "common.h"

void fn_8022ACD8(u32 *arg0) {
    *arg0 |= 0x200;
}

BOOL fn_8022ACE8(void* arg0) {
    return *(s32*)((u8*)arg0 + 0x4C) != 0;
}

s32 fn_8022ACFC(u8 *arg0) {
    return *(s32 *)(arg0 + 0x90);
}

u16 fn_8022AD04(void* arg0) {
    return *(u16*)((u8*)arg0 + 0x4);
}

