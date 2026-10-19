// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EC4B0[];
void __ct__9C801BD4C8Fv(void);

s32 __ct__9C801CCA28Fv(s32 param_1) {
    __ct__9C801BD4C8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802EC4B0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u8 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    return param_1;
}

} /* extern "C" */
