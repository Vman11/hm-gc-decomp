// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E7058[];
void fn_80133FF4(void);

s32 __ct__9C8016096CFv(s32 param_1) {
    fn_80133FF4();
    *(u8 **)(param_1 + 0x10) = lbl_802E7058;
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    return param_1;
}

} /* extern "C" */
