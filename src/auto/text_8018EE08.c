/* Functions from 0x8018EE08 to 0x8018EE6C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AE48;

void fn_8018EE08(s32 arg0) {
    lbl_8035AE48 = arg0;
}

void fn_8018EE10(void *arg0, void *arg1) {
    u32 index = *(u32 *)((u8 *)arg1 + 4);
    u8 *entry;
    u32 offset;
    u8 *base;
    if (index >= *(u32 *)arg0) {
        return;
    }
    base = *(u8 **)((u8 *)arg0 + 4);
    offset = index << 6;
    entry = base + offset;
    if (*(u32 *)entry != 0 && *(s32 *)(*(u32 **)(entry + 4) + 2) > *(s32 *)((u8 *)arg1 + 8)) {
        return;
    }
    *(u32 *)entry = 1;
    base = *(u8 **)((u8 *)arg0 + 4);
    entry = base + offset;
    *(u32 *)(entry + 4) = (u32)arg1;
    *(u32 *)(entry + 8) = 0;
}

