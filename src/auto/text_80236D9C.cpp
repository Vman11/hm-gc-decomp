// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80248498(int);

void fn_80236D9C(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x20c) != 0) && (*(u32 *)(*(u32 *)(param_1 + 0x20c) + 0x108) != 0)) {
        fn_80248498((int)(*(u32 *)(*(u32 *)(param_1 + 0x20c) + 0x108)));
    }
}

} /* extern "C" */
