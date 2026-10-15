/* Functions from 0x801525DC to 0x801525F8, found by decomp-toolkit. */
#include "common.h"

void fn_801525DC(void *arg0, void *arg1) {
    *(f32 *)((u8 *)arg0 + 0xC) = *(f32 *)((u8 *)arg1 + 0x0);
    *(f32 *)((u8 *)arg0 + 0x1C) = *(f32 *)((u8 *)arg1 + 0x4);
    *(f32 *)((u8 *)arg0 + 0x2C) = *(f32 *)((u8 *)arg1 + 0x8);
}
