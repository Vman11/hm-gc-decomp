// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8388[];
void __ct__9C8013AB84Fv(void);

s32 __ct__9C801768A4Fv(s32 param_1) {
    __ct__9C8013AB84Fv();
    *(u8 **)(param_1 + 0xc) = lbl_802E8388;
    *(u32 *)(param_1 + 0x4c) = 0;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    *(u32 *)(param_1 + 0x58) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 100) = 0;
    return param_1;
}

} /* extern "C" */
