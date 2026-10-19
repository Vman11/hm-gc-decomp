// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E1A5C(int, int);

void fn_801ECDF0(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        fn_801E1A5C((int)(*(u32 *)(param_1 + 0x2c)), (int)(*(u32 *)(param_1 + 0x28)));
    }
}

} /* extern "C" */
