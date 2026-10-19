// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E46D8[];
void fn_8012163C(int);
void fn_80121E1C(int);

u8 * __ct__9C8012EE18Fv(u8 *param_1) {
    *(u8 **)(param_1 + 0x38) = lbl_802E46D8;
    fn_80121E1C((int)(param_1 + 0x1c));
    *param_1 = 0;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0xc) = 0;
    *(u16 *)(param_1 + 0x10) = 0;
    *(u16 *)(param_1 + 0x12) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u16 *)(param_1 + 0x18) = 0xffff;
    *(u16 *)(param_1 + 0x1a) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    fn_8012163C((int)(param_1 + 0x34));
    return param_1;
}

} /* extern "C" */
