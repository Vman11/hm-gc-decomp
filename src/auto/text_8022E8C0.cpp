// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F13F4[];
void __ct__9C8022DFC8Fv(void);

u32 * __ct__9C8022E8C0Fv(u32 *param_1) {
    __ct__9C8022DFC8Fv();
    *param_1 = (u32)lbl_802F13F4;
    param_1[0x45] = 0;
    return param_1;
}

} /* extern "C" */
