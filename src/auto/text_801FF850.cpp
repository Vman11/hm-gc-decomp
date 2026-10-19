// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF5E8[];
void fn_801FC0DC(void);

s32 __ct__9C801FF850Fv(s32 param_1) {
    fn_801FC0DC();
    *(u8 **)(param_1 + 0x58) = lbl_802EF5E8;
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 100) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 0x68) = 0;
    *(u32 *)(param_1 + 0x6c) = 0;
    return param_1;
}

} /* extern "C" */
