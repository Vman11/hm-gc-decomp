// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EF9B8[];
void __ct__9C80209008Fv();
void __ct__9C802113F8Fv();

s32 __ct__9C8020A1A4Fv(s32 param_1) {
    __ct__9C802113F8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802EF9B8;
    __ct__9C80209008Fv(param_1 + 0x1c);
    __ct__9C80209008Fv(param_1 + 0x68);
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0xb4) = 0;
    *(u32 *)(param_1 + 0x14) = 0xffffffff;
    return param_1;
}
