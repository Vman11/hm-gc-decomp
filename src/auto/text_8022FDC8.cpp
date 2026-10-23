// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F15C8[];
void __ct__9C80239B40Fv(void);

u32 * __ct__9C8022FDC8Fv(u32 *param_1) {
    __ct__9C80239B40Fv();
    *param_1 = (u32)lbl_802F15C8;
    *(u8 *)(param_1 + 0x95) = 0;
    param_1[0x97] = 0;
    return param_1;
}

} /* extern "C" */
