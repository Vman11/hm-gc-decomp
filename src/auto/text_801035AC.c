/* Functions from 0x801035AC to 0x80103628, found by decomp-toolkit. */
#include "common.h"

s32 fn_801035AC(void *arg0, u32 arg1) {
    u32 *base;
    u32 i;

    base = *(u32 **)((u8 *)arg0 + 0x10);
    if (base == 0) {
        return 0;
    }
    if (*(u32 *)((u8 *)arg0 + 0x8) == *(u32 *)((u8 *)arg0 + 0xC)) {
        return 0;
    }
    for (i = 0; i < *(u32 *)((u8 *)arg0 + 0xC); i++) {
        if (base[i] == 0) {
            base[i] = arg1;
            (*(u32 *)((u8 *)arg0 + 0x8))++;
            return 1;
        }
    }
    return 0;
}
