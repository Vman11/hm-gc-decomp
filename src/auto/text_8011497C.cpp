// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2E00[];
void __ct__9C8010C41CFv(void);

s32 __ct__9C8011497CFv(s32 param_1) {
    __ct__9C8010C41CFv();
    *(u8 **)(param_1 + 8) = lbl_802E2E00;
    *(u32 *)(param_1 + 0xc) = 0;
    return param_1;
}

} /* extern "C" */
