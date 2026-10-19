// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3DD0[];
void fn_801194B0(void);

s32 fn_8011B204(s32 param_1) {
    fn_801194B0();
    *(u8 **)(param_1 + 0x298) = lbl_802E3DD0;
    *(u32 *)(param_1 + 0x29c) = 0;
    return param_1;
}

} /* extern "C" */
