// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0288[];
void fn_8021BB60(void);

s32 fn_8021C2E8(s32 param_1) {
    fn_8021BB60();
    *(u8 **)(param_1 + 0x10) = lbl_802F0288;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    return param_1;
}

} /* extern "C" */
