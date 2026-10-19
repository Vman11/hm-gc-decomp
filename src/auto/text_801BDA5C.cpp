// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
s32 fn_801AA9B4(int, int, int);

void fn_801BDA5C(s32 param_1, u32 param_2, u32 param_3) {
    u32 uVar1;

    if (*(void **)(param_1 + 0x68) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x68)));
        *(u32 *)(param_1 + 0x68) = 0;
    }
    uVar1 = fn_801AA9B4((int)(*(u32 *)(param_1 + 0x74)), (int)(param_2), (int)(param_3));
    *(u32 *)(param_1 + 0x70) = uVar1;
}

} /* extern "C" */
