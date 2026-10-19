// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0578[];
void fn_80220058(void);

s32 __ct__9C802205DCFv(s32 param_1) {
    fn_80220058();
    *(u8 **)(param_1 + 0x10) = lbl_802F0578;
    *(u32 *)(param_1 + 0x4c) = 0;
    return param_1;
}

} /* extern "C" */
