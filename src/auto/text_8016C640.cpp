// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D9CC8(int, int);

void fn_8016C640(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x2c) & 0x1000) != 0) {
        fn_800D9CC8((int)(*(u32 *)(param_1 + 0x2a80)), (int)(1));
    }
    else {
        fn_800D9CC8((int)(*(u32 *)(param_1 + 0x2a80)), (int)(0));
    }
}

} /* extern "C" */
