// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF460[];
void __ct__9C800F92E8Fv(void);

s32 fn_801FD478(s32 param_1) {
    __ct__9C800F92E8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802EF460;
    *(u32 *)(param_1 + 0x14) = 0;
    return param_1;
}

} /* extern "C" */
