// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E23A8[];
void fn_8010344C(void);

s32 fn_80103A2C(s32 param_1) {
    fn_8010344C();
    *(u8 **)(param_1 + 4) = lbl_802E23A8;
    *(u32 *)(param_1 + 0x10) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0xc) = 0;
    return param_1;
}

} /* extern "C" */
