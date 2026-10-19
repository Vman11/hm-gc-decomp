// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EA628[];
void __ct__9C800F92E8Fv();
void fn_801A6380();

s32 __ct__9C801A67A8Fv(s32 param_1) {
    *(u8 **)(param_1 + 0x168) = lbl_802EA628;
    __ct__9C800F92E8Fv(param_1 + 0x78);
    __ct__9C800F92E8Fv(param_1 + 0x8c);
    __ct__9C800F92E8Fv(param_1 + 0xa0);
    __ct__9C800F92E8Fv(param_1 + 0xb4);
    __ct__9C800F92E8Fv(param_1 + 200);
    __ct__9C800F92E8Fv(param_1 + 0xdc);
    __ct__9C800F92E8Fv(param_1 + 0xf0);
    __ct__9C800F92E8Fv(param_1 + 0x104);
    __ct__9C800F92E8Fv(param_1 + 0x118);
    __ct__9C800F92E8Fv(param_1 + 300);
    __ct__9C800F92E8Fv(param_1 + 0x140);
    __ct__9C800F92E8Fv(param_1 + 0x154);
    fn_801A6380(param_1);
    return param_1;
}
