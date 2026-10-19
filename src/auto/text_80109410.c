// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E2548[];
void __ct__9C800F92E8Fv();
void fn_80108F90();
void __ct__9C80109020Fv();

s32 __ct__9C80109410Fv(s32 param_1) {
    __ct__9C800F92E8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802E2548;
    __ct__9C80109020Fv(param_1 + 0x14);
    fn_80108F90(param_1 + 0x14);
    return param_1;
}
