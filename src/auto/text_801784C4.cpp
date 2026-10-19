// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8518[];
void fn_8013C0D0(void);

s32 __ct__9C801784C4Fv(s32 param_1) {
    fn_8013C0D0();
    *(u8 **)(param_1 + 0x10) = lbl_802E8518;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    return param_1;
}

} /* extern "C" */
