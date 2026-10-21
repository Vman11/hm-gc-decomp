// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF678[];
extern u8 lbl_802EF6D4[];
void __ct__9C801FEA4CFv(int);

u32 * fn_802007C4(u32 *param_1) {
    *param_1 = (u32)lbl_802EF6D4;
    *param_1 = (u32)lbl_802EF678;
    __ct__9C801FEA4CFv((int)(param_1 + 1));
    param_1[0x32] = 0;
    return param_1;
}

} /* extern "C" */
