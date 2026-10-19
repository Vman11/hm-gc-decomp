// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EEB08[];
void __ct__9C801F786CFv(void);

u32 * fn_801F73E0(u32 *param_1) {
    __ct__9C801F786CFv();
    *param_1 = (u32)lbl_802EEB08;
    param_1[1] = 0x17;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    return param_1;
}

} /* extern "C" */
