// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E96D0[];
void __ct__9C800F92E8Fv();
void __ct__9C80105EE8Fv();
void fn_80193BD0();

s32 __ct__9C80195170Fv(s32 param_1) {
    __ct__9C800F92E8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802E96D0;
    __ct__9C80105EE8Fv(param_1 + 0x14);
    fn_80193BD0(param_1);
    return param_1;
}
