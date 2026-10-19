// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E1C64(int, int);
s32 fn_801E2478(int, int);

void fn_801ECE28(s32 param_1) {
    s32 iVar1;

    if (((*(u32 *)(param_1 + 0x24) & 2) != 0) &&
          (iVar1 = fn_801E2478((int)(*(u32 *)(param_1 + 0x2c)), (int)(*(u32 *)(param_1 + 0x28))),
          iVar1 != 0)) {
        fn_801E1C64((int)(*(u32 *)(param_1 + 0x2c)), (int)(*(u32 *)(param_1 + 0x28)));
    }
}

} /* extern "C" */
