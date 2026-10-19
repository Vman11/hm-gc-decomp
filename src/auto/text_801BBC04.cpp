// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EB668[];
void fn_801A7684(void);

s32 fn_801BBC04(s32 param_1) {
    fn_801A7684();
    *(u8 **)(param_1 + 0x80) = lbl_802EB668;
    *(u32 *)(param_1 + 0x16c) = 0;
    *(u32 *)(param_1 + 0x170) = 0;
    *(u32 *)(param_1 + 0x168) = 1;
    return param_1;
}

} /* extern "C" */
