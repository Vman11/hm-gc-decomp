// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80238618(int);

void fn_80227704(s32 param_1) {
    if (((*(u32 *)(param_1 + 0xb4) & 2) != 0) || ((*(u32 *)(param_1 + 0xb4) & 4) != 0)) {
        fn_80238618((int)(param_1));
    }
}

} /* extern "C" */
