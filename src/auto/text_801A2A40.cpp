// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EA000[];
void __ct__9C8011C518Fv(void);

s32 __ct__9C801A2A40Fv(s32 param_1) {
    *(u8 **)(param_1 + 0x8c) = lbl_802EA000;
    __ct__9C8011C518Fv();
    *(u32 *)(param_1 + 0x80) = 0;
    *(u32 *)(param_1 + 0x84) = 0;
    *(u32 *)(param_1 + 0x88) = 0;
    return param_1;
}

} /* extern "C" */
