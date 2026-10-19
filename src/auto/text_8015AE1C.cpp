// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8016CAE8(int, int);

void fn_8015AE1C(s32 param_1, u32 param_2) {
    *(u32 *)(param_1 + 0x28) = param_2;
    fn_8016CAE8((int)(*(u32 *)(param_1 + 0x28)), (int)(param_1));
}

} /* extern "C" */
