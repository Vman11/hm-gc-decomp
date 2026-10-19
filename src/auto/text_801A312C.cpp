// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EA100[];
void __ct__9C8017FFACFv(int);

u32 * fn_801A312C(u32 *param_1) {
    param_1[0x9d] = (u32)lbl_802EA100;
    __ct__9C8017FFACFv((int)(param_1 + 2));
    param_1[1] = 0;
    *param_1 = 0;
    return param_1;
}

} /* extern "C" */
