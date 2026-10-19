// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFFC0[];
void fn_800FA3A8(void);

s32 fn_802150C8(s32 param_1) {
    fn_800FA3A8();
    *(u8 **)(param_1 + 0x18) = lbl_802EFFC0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    return param_1;
}

} /* extern "C" */
