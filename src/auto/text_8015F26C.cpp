// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6F50[];
void __ct__9C8013282CFv(void);

s32 __ct__9C8015F26CFv(s32 param_1) {
    __ct__9C8013282CFv();
    *(u8 **)(param_1 + 0x14) = lbl_802E6F50;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x4c) = 0;
    return param_1;
}

} /* extern "C" */
