// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3B78[];
void __ct__9C802074B8Fv(void);

s32 fn_8011A054(s32 param_1) {
    *(u8 **)(param_1 + 0x80) = lbl_802E3B78;
    __ct__9C802074B8Fv();
    *(u32 *)(param_1 + 0x7c) = 0;
    return param_1;
}

} /* extern "C" */
