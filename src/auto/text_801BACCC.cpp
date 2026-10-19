// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801C2800(int, int, int);

void fn_801BACCC(s32 param_1) {
    if (*(s32 *)(param_1 + 0x164) != 0) {
        *(u32 *)(param_1 + 0x16c) = 1;
        fn_801C2800((int)(*(u32 *)(param_1 + 0x7c)), (int)(param_1), (int)(1));
    }
}

} /* extern "C" */
