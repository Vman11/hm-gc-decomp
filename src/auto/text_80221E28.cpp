// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0600[];
void fn_80216AD8(void);

s32 fn_80221E28(s32 param_1) {
    fn_80216AD8();
    *(u8 **)(param_1 + 0x60) = lbl_802F0600;
    *(u32 *)(param_1 + 100) = 0;
    return param_1;
}

} /* extern "C" */
