// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF980[];
void fn_80208ADC(void);

s32 __ct__9C80209008Fv(s32 param_1) {
    fn_80208ADC();
    *(u8 **)(param_1 + 4) = lbl_802EF980;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    return param_1;
}

} /* extern "C" */
