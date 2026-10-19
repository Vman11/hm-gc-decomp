// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF658[];
void fn_801FC7AC(void);

s32 __ct__9C801FFB44Fv(s32 param_1) {
    fn_801FC7AC();
    *(u8 **)(param_1 + 0x10) = lbl_802EF658;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    return param_1;
}

} /* extern "C" */
