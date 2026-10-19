// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memcpy(void *, const void *, unsigned long);

void fn_80160EA0(u16 *param_1, u16 *param_2) {
    u32 uVar1;

    uVar1 = (u32)*param_2;
    if ((u32)*param_2 > (u32)*param_1) {
        uVar1 = (u32)*param_1;
    }
    memcpy(*(void **)(param_1 + 0xc),*(void **)(param_2 + 0xc),uVar1 << 1);
}

} /* extern "C" */
