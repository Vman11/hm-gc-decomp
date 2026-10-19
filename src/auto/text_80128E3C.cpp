// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E41B8[];
void fn_8012D530(void);

s32 __ct__9C80128E3CFv(s32 param_1) {
    fn_8012D530();
    *(u8 **)(param_1 + 0x34) = lbl_802E41B8;
    *(u32 *)(param_1 + 0x38) = 0xffffffff;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x4c) = 0;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    return param_1;
}

} /* extern "C" */
