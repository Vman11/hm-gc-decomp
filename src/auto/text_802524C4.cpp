/* Functions from 0x802524C4 to 0x80252558, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void* fn_802524C4(void* arg0, s32 arg1) {
    s32 offset;
    u8* base;
    s32 i;
    s32 count = *(s32*)((u8*)arg0 + 0x18);
    for (i = 0, offset = 0; i < count; i++) {
        base = *(u8**)((u8*)arg0 + 0x1C);
        if (arg1 == *(s32*)(base + offset + 4))
            return base + i * 0x10;
        offset += 0x10;
    }
    return 0;
}

void* fn_80252510(void* arg0, s32 arg1) {
    s32 offset;
    u8* base;
    s32 i;
    s32 count = *(s32*)((u8*)arg0 + 0x18);
    for (i = 0, offset = 0; i < count; i++) {
        base = *(u8**)((u8*)arg0 + 0x1C);
        if (arg1 == *(s32*)(base + offset))
            return base + i * 0x10;
        offset += 0x10;
    }
    return 0;
}

} /* extern "C" */
