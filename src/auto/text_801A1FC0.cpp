// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E9C78[];
void __ct__9C80192398Fv(void);

s32 __ct__9C801A1FC0Fv(s32 param_1) {
    __ct__9C80192398Fv();
    *(u8 **)(param_1 + 0x68) = lbl_802E9C78;
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0x80) = 0;
    *(u32 *)(param_1 + 0x6c) = 0;
    *(u32 *)(param_1 + 0x70) = 0;
    *(u32 *)(param_1 + 0x74) = 0;
    *(u32 *)(param_1 + 0x78) = 0;
    *(u32 *)(param_1 + 0x7c) = 0;
    *(u32 *)(param_1 + 0x88) = 0;
    *(u32 *)(param_1 + 0x84) = 0;
    *(u32 *)(param_1 + 0x8c) = 0;
    return param_1;
}

} /* extern "C" */
