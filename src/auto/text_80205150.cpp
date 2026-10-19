// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_80207608(int);

void fn_80205150(s32 param_1) {
    if (*(void **)(param_1 + 0xc) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0xc)));
    }
    if (*(void **)(param_1 + 0x1c) != 0) {
        fn_80207608((int)(*(void **)(param_1 + 0x1c)));
    }
}

} /* extern "C" */
