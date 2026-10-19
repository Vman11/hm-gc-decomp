// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF578[];
void fn_801FB5E0(void);

s32 __ct__9C801FE2ECFv(s32 param_1) {
    fn_801FB5E0();
    *(u8 **)(param_1 + 0x24) = lbl_802EF578;
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    return param_1;
}

} /* extern "C" */
