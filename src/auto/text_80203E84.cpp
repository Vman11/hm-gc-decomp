// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF7D8[];
void fn_801FD6F8(void);

s32 __ct__9C80203E84Fv(s32 param_1) {
    fn_801FD6F8();
    *(u8 **)(param_1 + 0xc) = lbl_802EF7D8;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    return param_1;
}

} /* extern "C" */
