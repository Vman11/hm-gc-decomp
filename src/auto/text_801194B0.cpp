// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3A38[];
void fn_800F7E10(int);

u32 * fn_801194B0(u32 *param_1) {
    param_1[0xa6] = (u32)lbl_802E3A38;
    fn_800F7E10((int)(param_1 + 1));
    *param_1 = 0;
    return param_1;
}

} /* extern "C" */
