// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8B68[];
void fn_80182CC4(void);

s32 __ct__9C801870CCFv(s32 param_1) {
    fn_80182CC4();
    *(u8 **)(param_1 + 0x50) = lbl_802E8B68;
    *(u32 *)(param_1 + 0x54) = 0;
    return param_1;
}

} /* extern "C" */
