// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0040[];
extern u8 lbl_802F0148[];
extern u8 lbl_802F0678[];
void fn_80216E7C(void);

s32 fn_80217048(s32 param_1) {
    fn_80216E7C();
    *(u8 **)(param_1 + 0xc) = lbl_802F0148;
    *(u8 **)(param_1 + 0x10) = lbl_802F0040;
    *(u8 **)(param_1 + 0x10) = lbl_802F0678;
    return param_1;
}

} /* extern "C" */
