// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C800FC8F0Fv[];
void fn_800E1E88(int, int);

void fn_800FD258(s32 param_1) {
    if (*(u32 *)(param_1 + 4) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 4)), (int)(__dt__9C800FC8F0Fv));
        *(u32 *)(param_1 + 4) = 0;
    }
}

} /* extern "C" */
