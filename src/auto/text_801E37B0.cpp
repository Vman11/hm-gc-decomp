// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E1D20(int);

void fn_801E37B0(s32 param_1) {
    if (*(void **)(param_1 + 0x28) != 0) {
        fn_801E1D20((int)(*(void **)(param_1 + 0x28)));
    }
}

} /* extern "C" */
