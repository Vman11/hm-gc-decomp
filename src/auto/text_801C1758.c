/* Functions from 0x801C1758 to 0x801C1774, found by decomp-toolkit. */
#include "common.h"

s32 fn_801C1758(u8* arg0) {
    return *(s32*)(arg0 + 0x138);
}

u32 fn_801C1760(u8* arg0) {
    return (*(u32*)(arg0 + 0x6C) >> 1) & 1;
}

s32 fn_801C176C(void* arg0) {
    return *(s32*)((char*)arg0 + 0x134);
}

