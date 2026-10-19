// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3A88[];
void __ct__9C80108990Fv(void);

s32 fn_80119904(s32 param_1) {
    *(u8 **)(param_1 + 0x84) = lbl_802E3A88;
    __ct__9C80108990Fv();
    *(u32 *)(param_1 + 0x80) = 0;
    return param_1;
}

} /* extern "C" */
