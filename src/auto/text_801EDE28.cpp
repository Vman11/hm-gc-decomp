// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80115450(int, int);

void fn_801EDE28(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        fn_80115450((int)(*(s32 *)(*(s32 *)(param_1 + 8) + 0xe0) + 8), (int)(param_1 + 0x28));
    }
}

} /* extern "C" */
