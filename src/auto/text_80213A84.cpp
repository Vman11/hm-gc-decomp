// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFF60[];
void __ct__9C802113F8Fv(void);

s32 __ct__9C80213A84Fv(s32 param_1) {
    __ct__9C802113F8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802EFF60;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    return param_1;
}

} /* extern "C" */
