// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E85C8[];
void fn_80103A2C(void);

s32 fn_8017ADD0(s32 param_1) {
    fn_80103A2C();
    *(u8 **)(param_1 + 4) = lbl_802E85C8;
    *(u32 *)(param_1 + 0x18) = 0;
    return param_1;
}

} /* extern "C" */
