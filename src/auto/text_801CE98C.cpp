// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801CE630Fv[];
void fn_800E1E88(int, int);
void fn_800F8DD0(void);

void fn_801CE98C(s32 param_1) {
    fn_800F8DD0();
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x1c)), (int)(__dt__9C801CE630Fv));
    }
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
}

} /* extern "C" */
