/* Functions from 0x8015AE48 to 0x8015AEA4, found by decomp-toolkit. */
#include "common.h"

void* fn_8015AE48(void* arg0) {
    u32 offset;
    u8* base;
    u32 i;
    u32 count = *(u32*)((u8*)arg0 + 0x1C);
    for (i = 0, offset = 0; i < count; i++) {
        base = *(u8**)((u8*)arg0 + 0x2C);
        if (*(u32*)(base + offset + 0xC) == 0) {
            return base + i * 0xEC;
        }
        offset += 0xEC;
    }
    return 0;
}

void* fn_8015AE94(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x2C) + arg1 * 0xEC;
}
