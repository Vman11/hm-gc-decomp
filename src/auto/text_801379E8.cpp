// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E5568[];
void __dl__FPv(int);

u32 * dtor_801379E8(u32 *param_1, s16 param_2) {
    if ((param_1 != (u32 *)0x0) && (*param_1 = (u32)lbl_802E5568, 0 < param_2)) {
        __dl__FPv((int)(param_1));
    }
    return param_1;
}

} /* extern "C" */
