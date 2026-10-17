/* Functions from 0x801E6430 to 0x801E6474, found by decomp-toolkit. */
#include "common.h"

static inline u32 fn_801E6430_inline(void *arg0) {
    u32 v = *(u32 *)((u8 *)arg0 + 0x20);
    if (v != 0) {
        return v;
    }
    return *(u32 *)((u8 *)arg0 + 0x1C);
}

void fn_801E6430(void *arg0, u32 arg1, u32 arg2) {
    u32 var_r6;
    u32 var_r0;
    u32 var_r5;

    var_r6 = *(u32 *)((u8 *)arg0 + 0x20);
    var_r0 = var_r6 != 0 ? var_r6 : *(u32 *)((u8 *)arg0 + 0x1C);
    if (arg1 != var_r0) {
        var_r5 = var_r6 != 0 ? var_r6 : *(u32 *)((u8 *)arg0 + 0x1C);
        if (arg2 != var_r5) {
            return;
        }
    }
    *(u32 *)((u8 *)arg0 + 0x2C) = 1;
}
