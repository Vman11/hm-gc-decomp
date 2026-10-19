// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EA350[];
void fn_801B2D30(void);

s32 __ct__9C801A460CFv(s32 param_1) {
    fn_801B2D30();
    *(u8 **)(param_1 + 0x10) = lbl_802EA350;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    return param_1;
}

} /* extern "C" */
