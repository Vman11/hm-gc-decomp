// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFAE8[];
void fn_80208ADC(void);

s32 fn_8020C0D8(s32 param_1) {
    fn_80208ADC();
    *(u8 **)(param_1 + 4) = lbl_802EFAE8;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0xc) = 0;
    return param_1;
}

} /* extern "C" */
