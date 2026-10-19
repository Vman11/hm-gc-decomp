// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EA6B0[];
void __ct__9C801DDC8CFv(void);

s32 fn_801A7684(s32 param_1) {
    __ct__9C801DDC8CFv();
    *(u8 **)(param_1 + 0x80) = lbl_802EA6B0;
    *(u32 *)(param_1 + 0x164) = 0;
    return param_1;
}

} /* extern "C" */
