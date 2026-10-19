// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EFC88[];
extern u8 lbl_802EFCB8[];
void fn_802128BC();

u32 * __ct__9C80210418Fv(u32 *param_1) {
    *param_1 = (u32)lbl_802EFCB8;
    *param_1 = (u32)lbl_802EFC88;
    fn_802128BC(param_1 + 1);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    return param_1;
}
