// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E3E40[];
void __ct__9C800F9688Fv();
void __ct__9C800F9B64Fv();

u32 * __ct__9C8011C518Fv(u32 *param_1) {
    param_1[0x1f] = (u32)lbl_802E3E40;
    __ct__9C800F9688Fv(param_1 + 1);
    __ct__9C800F9688Fv(param_1 + 7);
    __ct__9C800F9B64Fv(param_1 + 0xd);
    __ct__9C800F9B64Fv(param_1 + 0x16);
    *param_1 = 0;
    return param_1;
}
