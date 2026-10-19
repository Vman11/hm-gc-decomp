// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E4418[];
void __ct__9C800F92E8Fv();
void fn_80129B88();

s32 __ct__9C8012C28CFv(s32 param_1) {
    *(u8 **)(param_1 + 0xa4) = lbl_802E4418;
    __ct__9C800F92E8Fv(param_1 + 0x28);
    __ct__9C800F92E8Fv(param_1 + 0x3c);
    __ct__9C800F92E8Fv(param_1 + 0x50);
    __ct__9C800F92E8Fv(param_1 + 100);
    fn_80129B88(param_1);
    return param_1;
}
