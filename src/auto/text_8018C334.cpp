// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8E58[];
void fn_800FD4A4(void);

s32 __ct__9C8018C334Fv(s32 param_1) {
    fn_800FD4A4();
    *(u8 **)(param_1 + 0x30) = lbl_802E8E58;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    return param_1;
}

} /* extern "C" */
