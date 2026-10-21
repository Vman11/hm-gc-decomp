// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6C28[];
extern u8 lbl_802E6CBC[];
void __ct__9C80154634Fv(int);

u32 * fn_8015A948(u32 *param_1) {
    *param_1 = (u32)lbl_802E6CBC;
    *param_1 = (u32)lbl_802E6C28;
    __ct__9C80154634Fv((int)(param_1 + 1));
    return param_1;
}

} /* extern "C" */
