// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802CFE30[];
void __ct__9C8005F938Fv(void);

u32 * __ct__9C800A3494Fv(u32 *param_1) {
    __ct__9C8005F938Fv();
    *param_1 = (u32)lbl_802CFE30;
    param_1[0x98] = 0x40;
    return param_1;
}

} /* extern "C" */
