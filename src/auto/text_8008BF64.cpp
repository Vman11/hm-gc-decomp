// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_80242210(int);

void fn_8008BF64(s32 param_1) {
    if (*(void **)(param_1 + 0x130) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x130)));
        *(u32 *)(param_1 + 0x130) = 0;
    }
    fn_80242210((int)(param_1));
}

} /* extern "C" */
