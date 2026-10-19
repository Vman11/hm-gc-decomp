// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E4D28[];
void fn_800FBF24();
void __ct__9C800FC1D4Fv();
void __ct__9C8013ECE4Fv();

s32 __ct__9C8013282CFv(s32 param_1) {
    __ct__9C800FC1D4Fv();
    *(u8 **)(param_1 + 0x14) = lbl_802E4D28;
    __ct__9C8013ECE4Fv(param_1 + 0x1c);
    fn_800FBF24(param_1 + 0x24);
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    return param_1;
}
