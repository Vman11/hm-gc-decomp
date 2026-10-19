// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

u32 fn_8020F618(s32 param_1) {
    *(u32 *)(param_1 + 8) = 0;
    if (*(void **)(param_1 + 0xc) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0xc)));
        *(u32 *)(param_1 + 0xc) = 0;
    }
    return 0;
}

} /* extern "C" */
