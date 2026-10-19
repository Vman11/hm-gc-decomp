// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018846C(int, int, int);

void fn_8019A504(s32 param_1, u32 param_2, u32 param_3) {
    u32 uVar2;
    u32 uVar1;

    uVar2 = *(u32 *)(param_1 + 0x3c);
    uVar1 = uVar2 + *(s32 *)(param_1 + 0x38) * 0x2c;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 0x2c) {
        fn_8018846C((int)(uVar2), (int)(param_2), (int)(param_3));
    }
}

} /* extern "C" */
