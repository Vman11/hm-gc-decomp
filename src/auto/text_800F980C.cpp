// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F951C(int);

void fn_800F980C(u32 param_1, s32 param_2) {
    if (*(void **)(param_2 + 0xc) != 0) {
        fn_800F951C((int)(*(void **)(param_2 + 0xc)));
    }
}

} /* extern "C" */
