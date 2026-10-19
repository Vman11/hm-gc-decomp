// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0590[];
void fn_801A312C(void);

s32 fn_80220940(s32 param_1) {
    fn_801A312C();
    *(u8 **)(param_1 + 0x274) = lbl_802F0590;
    *(u32 *)(param_1 + 0x278) = 0;
    return param_1;
}

} /* extern "C" */
