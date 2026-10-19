// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EF130[];
void __ct__9C800F9688Fv();
void __ct__9C800F9B64Fv();

u32 * __ct__9C801FAA9CFi(u32 *param_1, u32 param_2) {
    param_1[0x40] = (u32)lbl_802EF130;
    __ct__9C800F9688Fv(param_1 + 3);
    __ct__9C800F9B64Fv(param_1 + 9);
    __ct__9C800F9688Fv(param_1 + 0x12);
    __ct__9C800F9B64Fv(param_1 + 0x18);
    __ct__9C800F9688Fv(param_1 + 0x21);
    __ct__9C800F9B64Fv(param_1 + 0x27);
    __ct__9C800F9688Fv(param_1 + 0x30);
    __ct__9C800F9B64Fv(param_1 + 0x36);
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0x3f] = 0;
    return param_1;
}
