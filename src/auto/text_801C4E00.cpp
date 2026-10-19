// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801CEAC8(int, int);

void fn_801C4E00(s32 param_1) {
    fn_801CEAC8((int)(*(s32 *)(param_1 + 0x16c)), (int)(*(u32 *)(*(s32 *)(param_1 + 0x16c) + 0x198)));
}

} /* extern "C" */
