/* Functions from 0x8026F5CC to 0x8026F5E8, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80366E60;

void fn_8026F5CC(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
    *(u32 *)((u8 *)arg0 + 12) = 0;
    *(f32 *)((u8 *)arg0 + 16) = lbl_80366E60;
}
