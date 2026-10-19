// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3D30[];
void __ct__9C80115044Fv(int);

u32 * fn_8011AE1C(u32 *param_1) {
    param_1[0x9ef] = (u32)lbl_802E3D30;
    __ct__9C80115044Fv((int)(param_1 + 2));
    param_1[1] = 0;
    *param_1 = 0;
    return param_1;
}

} /* extern "C" */
