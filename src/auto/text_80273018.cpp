// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F3644[];
void __ct__9C80249F58Fv(void);

u32 * fn_80273018(u32 *param_1) {
    __ct__9C80249F58Fv();
    *param_1 = (u32)lbl_802F3644;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    return param_1;
}

} /* extern "C" */
