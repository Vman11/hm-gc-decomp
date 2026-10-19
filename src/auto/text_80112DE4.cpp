// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_800F8DD0(void);

void fn_80112DE4(s32 param_1) {
    fn_800F8DD0();
    if (*(void **)(param_1 + 0x1c) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x1c)));
    }
    if (*(void **)(param_1 + 0x24) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x24)));
    }
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
}

} /* extern "C" */
