/* Functions from 0x801E872C to 0x801E8754, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80365340;

void fn_801E872C(void *arg0) {
    *(u32 *)((u8 *)arg0 + 4) = 0x12;
    *(u32 *)((u8 *)arg0 + 0x58) = 0;
    *(f32 *)((u8 *)arg0 + 0x60) = lbl_80365340;
    *(f32 *)((u8 *)arg0 + 0x64) = lbl_80365340;
    *(u32 *)((u8 *)arg0 + 0x5C) = 0;
}
