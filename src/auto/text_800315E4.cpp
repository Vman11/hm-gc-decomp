// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802AFA20[];
void __ct__9C8025577CFv(void);

s32 fn_800315E4(s32 param_1) {
    __ct__9C8025577CFv();
    *(u8 **)(param_1 + 0x2f0) = lbl_802AFA20;
    *(u32 *)(param_1 + 0x31c) = 0;
    *(u32 *)(param_1 + 0x31c) = 0;
    *(u32 *)(param_1 + 0x288) = 0;
    *(u32 *)(param_1 + 0x310) = 0;
    *(u32 *)(param_1 + 0x32c) = 0;
    *(u32 *)(param_1 + 0x328) = 0;
    *(u32 *)(param_1 + 800) = 0;
    *(u32 *)(param_1 + 0x324) = 0;
    *(u32 *)(param_1 + 0x318) = 0;
    *(u32 *)(param_1 + 0x330) = 0;
    *(u32 *)(param_1 + 0x300) = 0;
    return param_1;
}

} /* extern "C" */
