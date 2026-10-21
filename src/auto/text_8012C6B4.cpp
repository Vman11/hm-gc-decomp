// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E4550[];
void __ct__9C800FB754Fv(s32);

s32 __ct__9C8012C6B4Fv(s32 param_1) {
    *(u8 **)(param_1 + 0x28) = lbl_802E4550;
    __ct__9C800FB754Fv(param_1);
    __ct__9C800FB754Fv(param_1 + 0x14);
    return param_1;
}

} /* extern "C" */
