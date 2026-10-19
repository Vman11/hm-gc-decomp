// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F37B8[];
void __dl__FPv(int);

u32 * fn_80273D38(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802F37B8;
        param_1[1] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        param_1[3] = 7;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
