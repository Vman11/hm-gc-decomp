// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80203E84Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);
void fn_801FD714(int);

void fn_80203FC8(s32 param_1) {
    if (*(void **)(param_1 + 0x20) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x20)));
    }
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x1c)), (int)(__dt__9C80203E84Fv));
    }
    fn_801FD714((int)(param_1));
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
}

} /* extern "C" */
