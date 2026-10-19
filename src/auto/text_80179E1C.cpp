// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8578[];
void fn_80131BB8(void);

s32 __ct__9C80179E1CFv(s32 param_1) {
    fn_80131BB8();
    *(u8 **)(param_1 + 0x10) = lbl_802E8578;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    return param_1;
}

} /* extern "C" */
