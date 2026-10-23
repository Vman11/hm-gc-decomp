// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2CB4[];
void __ct__9C80261CB0Fv(void);

u32 * __ct__9C80265A64Fv(u32 *param_1) {
    __ct__9C80261CB0Fv();
    *param_1 = (u32)lbl_802F2CB4;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    return param_1;
}

} /* extern "C" */
