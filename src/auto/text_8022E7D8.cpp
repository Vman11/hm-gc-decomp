// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8019547C(int);
void fn_8022DE78(int, int);

void fn_8022E7D8(s32 param_1, u32 param_2) {
    u32 uVar1;

    if (*(u32 *)(param_1 + 0x9c) != 0) {
        uVar1 = fn_8019547C((int)(*(u32 *)(param_1 + 0x9c)));
        *(u32 *)(param_1 + 0x114) = uVar1;
    }
    fn_8022DE78((int)(param_1), (int)(param_2));
}

} /* extern "C" */
