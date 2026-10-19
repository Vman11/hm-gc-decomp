// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF770[];
void fn_801FCF8C(void);

s32 __ct__9C80201C28Fv(s32 param_1) {
    fn_801FCF8C();
    *(u8 **)(param_1 + 0x1c) = lbl_802EF770;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    return param_1;
}

} /* extern "C" */
