// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801C3D84(int, int);

void fn_801C6224(s32 param_1) {
    if (*(u32 *)(param_1 + 0xc) != 0) {
        fn_801C3D84((int)(*(u32 *)(param_1 + 0xc)), (int)(param_1));
    }
}

} /* extern "C" */
