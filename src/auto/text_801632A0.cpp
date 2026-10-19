// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E7400[];
void fn_80134544(void);

s32 __ct__9C801632A0Fv(s32 param_1) {
    fn_80134544();
    *(u8 **)(param_1 + 0xc) = lbl_802E7400;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u8 *)(param_1 + 0x48) = 0;
    *(u8 *)(param_1 + 0x40) = 0;
    return param_1;
}

} /* extern "C" */
