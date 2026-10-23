// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2BA0[];
void __ct__9C80257738Fv(void);

u32 * __ct__9C80262540Fv(u32 *param_1) {
    __ct__9C80257738Fv();
    *param_1 = (u32)lbl_802F2BA0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    return param_1;
}

} /* extern "C" */
