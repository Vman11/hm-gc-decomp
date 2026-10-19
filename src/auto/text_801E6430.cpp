/* Functions from 0x801E6430 to 0x801E6474, found by decomp-toolkit. */
#include "common.h"

extern "C" {

static inline u32 fn_801E6430_inline(void *arg0) {
    u32 v = *(u32 *)((u8 *)arg0 + 0x20);
    if (v != 0) {
        return v;
    }
    return *(u32 *)((u8 *)arg0 + 0x1C);
}

void fn_801E6430(void *arg0, u32 arg1, u32 arg2) {
    if (arg1 == fn_801E6430_inline(arg0) || arg2 == fn_801E6430_inline(arg0)) {
        *(u32 *)((u8 *)arg0 + 0x2C) = 1;
    }
}

} /* extern "C" */
