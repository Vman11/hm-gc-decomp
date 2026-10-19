// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E2508[];
void __ct__9C800F9688Fv();
void __ct__9C800F9B64Fv();

s32 __ct__9C80108990Fv(s32 param_1) {
    *(u8 **)(param_1 + 0x7c) = lbl_802E2508;
    __ct__9C800F9688Fv(param_1 + 4);
    __ct__9C800F9B64Fv(param_1 + 0x1c);
    __ct__9C800F9688Fv(param_1 + 0x40);
    __ct__9C800F9B64Fv(param_1 + 0x58);
    return param_1;
}
