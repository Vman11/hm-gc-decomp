// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E87A0[];
void __ct__9C8018E2ACFv(void);

s32 __ct__9C801805A0Fv(s32 param_1) {
    __ct__9C8018E2ACFv();
    *(u8 **)(param_1 + 0xc) = lbl_802E87A0;
    *(u32 *)(param_1 + 4) = 3;
    *(u32 *)(param_1 + 0x10) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    return param_1;
}

} /* extern "C" */
