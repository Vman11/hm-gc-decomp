/* Functions from 0x801372E0 to 0x80137314, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80364164;
extern s32 lbl_80364168;
void fn_801372E0(void *arg0, f32 arg1, f32 arg2) {
    *(f32 *)((u8 *)arg0 + 0x24) = arg1;
    *(f32 *)((u8 *)arg0 + 0x28) = arg2;
    *(s32 *)((u8 *)arg0 + 4) |= lbl_80364164;
}
