// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1284[];
void __ct__9C8022FDC8Fv(void);

u32 * fn_80229EC4(u32 *param_1) {
    __ct__9C8022FDC8Fv();
    *param_1 = (u32)lbl_802F1284;
    param_1[0x98] = 0;
    return param_1;
}

} /* extern "C" */
