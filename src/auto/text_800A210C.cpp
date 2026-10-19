// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80242144(int, int);
void fn_80242BC0(int, int, int, int, int, int);

u32 fn_800A210C(s32 param_1) {
    u32 uVar1;

    uVar1 = 0;
    if ((*(u32 *)(param_1 + 0x1d0) == 0) ||
          (*(u32 *)(param_1 + 0x1d4) == *(u32 *)(param_1 + 0x1d0) + -1)) {
        uVar1 = fn_80242144((int)(param_1), (int)(1));
        fn_80242BC0((int)(uVar1), (int)(*(u32 *)(param_1 + 300)), (int)(*(u32 *)(param_1 + 0xe0)), (int)(0), (int)(0), (int)(0));
        uVar1 = 1;
    }
    return uVar1;
}

} /* extern "C" */
