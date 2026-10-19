// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802C2510[];
void fn_8005D3E0(void);

u32 * fn_800799E0(u32 *param_1) {
    fn_8005D3E0();
    *param_1 = (u32)lbl_802C2510;
    param_1[0xd1] = 0;
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
    return param_1;
}

} /* extern "C" */
