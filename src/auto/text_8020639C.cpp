// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801FDD0C(int, int);

void fn_8020639C(s32 param_1) {
    if (*(u32 *)(param_1 + 4) != 0) {
        fn_801FDD0C((int)(*(u32 *)(param_1 + 4)), (int)(param_1));
    }
}

} /* extern "C" */
