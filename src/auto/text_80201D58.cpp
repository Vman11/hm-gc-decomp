// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80201C28Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);
void fn_801FCFBC(int);

void fn_80201D58(s32 param_1) {
    if (*(void **)(param_1 + 0x20) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x20)));
    }
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x1c)), (int)(__dt__9C80201C28Fv));
    }
    fn_801FCFBC((int)(param_1));
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
}

} /* extern "C" */
