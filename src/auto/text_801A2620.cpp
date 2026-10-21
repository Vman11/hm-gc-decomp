// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E9F30[];
void __ct__9C801E44C8Fv(void);

s32 fn_801A2620(s32 param_1) {
    *(u8 **)(param_1 + 0xf4) = lbl_802E9F30;
    __ct__9C801E44C8Fv();
    *(u32 *)(param_1 + 0xf0) = 0;
    return param_1;
}

} /* extern "C" */
