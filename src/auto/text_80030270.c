// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802AF9BC[];
void __ct__9C8003EFF4Fv();
void fn_8008E44C();
void __ct__9C80255A20Fv();

s32 __ct__9C80030270Fv(s32 param_1) {
    __ct__9C80255A20Fv();
    *(u8 **)(param_1 + 0xc0) = lbl_802AF9BC;
    __ct__9C8003EFF4Fv(param_1 + 0xc4);
    fn_8008E44C(param_1 + 0x1c8);
    *(u32 *)(param_1 + 0xac) = 0;
    *(u32 *)(param_1 + 0x1c4) = 0;
    *(u32 *)(param_1 + 0x1c0) = 0;
    return param_1;
}
