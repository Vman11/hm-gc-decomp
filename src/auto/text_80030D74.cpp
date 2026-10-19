// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8003AA34(int, int, int);

void fn_80030D74(s32 param_1, u32 param_2) {
    if (*(u32 *)(param_1 + 0x32c) != 0) {
        fn_8003AA34((int)(*(u32 *)(param_1 + 0x32c)), (int)(param_2), (int)(0));
    }
}

} /* extern "C" */
