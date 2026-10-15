/* Functions from 0x800FB48C to 0x800FB520, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E1FF8[];
extern f32 lbl_803636F4;
extern f32 lbl_803636F8;
void fn_800FB48C(void* arg0) {
    *(void**)((u8*)arg0 + 0x124) = lbl_802E1FF8;
    *(s32*)((u8*)arg0 + 0x0) = 0;
    *(s32*)((u8*)arg0 + 0x4) = 0;
    *(s32*)((u8*)arg0 + 0x8) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(f32*)((u8*)arg0 + 0x10) = lbl_803636F4;
    *(u8*)((u8*)arg0 + 0x14) = 0;
    *(s32*)((u8*)arg0 + 0x114) = 0;
    *(s32*)((u8*)arg0 + 0x11C) = 0;
    *(u8*)((u8*)arg0 + 0x120) = 0;
    *(s32*)((u8*)arg0 + 0x118) = 0;
}

extern s32 lbl_8035AA10;
void fn_800FB4CC(s32 arg0) {
    lbl_8035AA10 = arg0;
}

f32 fn_800FB4DC(void) {
    return lbl_803636F8;
}

void fn_800FB4E4(void* arg0) {
    u16* p;
    u16* start;

    *(s32*)((u8*)arg0 + 0x4) = 0;
    p = start = *(u16**)((u8*)arg0 + 0x10);
    while (*p != 0) {
        p++;
    }
    *(s32*)((u8*)arg0 + 0x8) = p - start;
}

