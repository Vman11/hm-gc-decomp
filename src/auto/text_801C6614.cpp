// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EC0C0[];
void __ct__9C801A5384Fv(void);

s32 __ct__9C801C6614Fv(s32 param_1) {
    __ct__9C801A5384Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802EC0C0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    return param_1;
}

} /* extern "C" */
