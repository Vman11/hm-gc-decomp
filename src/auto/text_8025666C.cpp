// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2444[];
void __ct__9C80261CB0Fv(void);

u32 * __ct__9C8025666CFv(u32 *param_1) {
    __ct__9C80261CB0Fv();
    *param_1 = (u32)lbl_802F2444;
    param_1[0x31] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x2f] = 0;
    param_1[0x32] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x30] = 0;
    return param_1;
}

} /* extern "C" */
