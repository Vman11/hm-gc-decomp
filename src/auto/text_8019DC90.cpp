// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E99F8[];
void __ct__9C80185960Fv(void);

s32 __ct__9C8019DC90Fv(s32 param_1) {
    __ct__9C80185960Fv();
    *(u8 **)(param_1 + 0x68) = lbl_802E99F8;
    *(u16 *)(param_1 + 4) = 0xc;
    *(u32 *)(param_1 + 0xa0) = 0;
    return param_1;
}

} /* extern "C" */
