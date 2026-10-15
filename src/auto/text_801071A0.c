/* Functions from 0x801071A0 to 0x80107218, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_803638F4;
void fn_801071A0(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(f32 *)((u8 *)arg0 + 4) = lbl_803638F4;
    *(f32 *)((u8 *)arg0 + 8) = lbl_803638F4;
    *(u32 *)((u8 *)arg0 + 0xC) = 0;
}

void fn_801071C0(void *arg0, void *arg1) {
    *(u32 *)((u8 *)arg0 + 0) = *(u32 *)((u8 *)arg1 + 0);
    *(f32 *)((u8 *)arg0 + 4) = *(f32 *)((u8 *)arg1 + 4);
    *(f32 *)((u8 *)arg0 + 8) = *(f32 *)((u8 *)arg1 + 8);
    *(u32 *)((u8 *)arg0 + 0xC) = *(u32 *)((u8 *)arg1 + 0xC);
}

void fn_801071E4(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 1;
    *(f32 *)((u8 *)arg0 + 4) = lbl_803638F4;
}

void fn_801071F8(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(f32 *)((u8 *)arg0 + 4) = lbl_803638F4;
    *(f32 *)((u8 *)arg0 + 8) = lbl_803638F4;
    *(u32 *)((u8 *)arg0 + 0xC) = 0;
}

