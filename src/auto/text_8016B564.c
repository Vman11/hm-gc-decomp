/* Functions from 0x8016B564 to 0x8016B57C, found by decomp-toolkit. */
#include "common.h"

u32 fn_8016B564(void *arg0, void *arg1) {
    return *(f32 *)((u8 *)arg0 + 0x10) < *(f32 *)((u8 *)arg1 + 0x10);
}
