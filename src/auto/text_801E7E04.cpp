// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDD20[];
void __ct__9C801EFA90Fv(void);

u32 * fn_801E7E04(u32 *param_1) {
    __ct__9C801EFA90Fv();
    *param_1 = (u32)lbl_802EDD20;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[1] = 0x10;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return param_1;
}

} /* extern "C" */
