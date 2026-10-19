// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8016B254(int, int, int, int);

void fn_8015FD3C(s32 param_1, u32 param_2) {
    s32 iVar1;

    if (*(u16 *)(param_1 + 0x2a) <= 4) {
        iVar1 = param_1 + 0x2c;
    }
    else {
        iVar1 = *(s32 *)(param_1 + 0x2c);
    }
    fn_8016B254((int)(param_2), (int)(*(u16 *)(param_1 + 0x24) >> 1 & 1), (int)(*(u16 *)(param_1 + 0x2a)), (int)(iVar1));
}

} /* extern "C" */
