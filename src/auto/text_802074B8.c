// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EF910[];
void __ct__9C800F9688Fv();
void __ct__9C800F9B64Fv();
void __ct__9C801124F8Fv();
void fn_801129C4();

s32 __ct__9C802074B8Fv(s32 param_1) {
    *(u8 **)(param_1 + 0x78) = lbl_802EF910;
    __ct__9C800F9688Fv(param_1 + 4);
    __ct__9C800F9B64Fv(param_1 + 0x1c);
    __ct__9C801124F8Fv(param_1 + 0x40);
    fn_801129C4(param_1 + 0x54);
    return param_1;
}
