// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E4580[];
extern u8 lbl_802E68E0[];
void __ct__9C801544CCFv();

u32 * fn_80154634(u32 *param_1) {
    *param_1 = (u32)lbl_802E4580;
    *param_1 = (u32)lbl_802E68E0;
    __ct__9C801544CCFv(param_1 + 1);
    return param_1;
}
