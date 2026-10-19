// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0FDC[];
void fn_80233124(void);

u32 * fn_80227BE4(u32 *param_1) {
    fn_80233124();
    *param_1 = (u32)lbl_802F0FDC;
    return param_1;
}

} /* extern "C" */
