// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __dt__9C801FE9ECFv[];
extern u8 fn_801FEAB0[];
extern u8 lbl_802EF1C8[];
extern u8 lbl_802EF5C0[];
void __construct_array();

u32 * fn_801FEA4C(u32 *param_1) {
    *param_1 = (u32)lbl_802EF1C8;
    *param_1 = (u32)lbl_802EF5C0;
    __construct_array(param_1 + 1,(u32)fn_801FEAB0,(u32)__dt__9C801FE9ECFv,0xc0,1);
    return param_1;
}
