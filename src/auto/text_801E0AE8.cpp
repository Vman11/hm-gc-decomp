// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED664[];
void fn_801E070C(void);

u32 * fn_801E0AE8(u32 *param_1) {
    fn_801E070C();
    *param_1 = (u32)lbl_802ED664;
    param_1[1] = 0xb;
    param_1[0xe] = 0;
    return param_1;
}

} /* extern "C" */
