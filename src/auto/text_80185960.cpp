// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8AA8[];
void __ct__9C801A1FC0Fv(void);

s32 __ct__9C80185960Fv(s32 param_1) {
    __ct__9C801A1FC0Fv();
    *(u8 **)(param_1 + 0x68) = lbl_802E8AA8;
    *(u16 *)(param_1 + 4) = 0xb;
    *(u32 *)(param_1 + 0x90) = 0;
    *(u32 *)(param_1 + 0x94) = 0;
    *(u32 *)(param_1 + 0x98) = 0;
    *(u32 *)(param_1 + 0x9c) = 0;
    return param_1;
}

} /* extern "C" */
