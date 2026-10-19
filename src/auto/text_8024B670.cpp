// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1E38[];
void __ct__9C8023B4DCFv(int);

u32 * fn_8024B670(u32 *param_1) {
    param_1[0x30] = (u32)lbl_802F1E38;
    __ct__9C8023B4DCFv((int)(param_1 + 7));
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    return param_1;
}

} /* extern "C" */
