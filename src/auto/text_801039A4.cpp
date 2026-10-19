// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E23A8[];
void __dla__FPv(int);
void __dl__FPv(int);
void __dt__9C80031B94Fv(int, int);

s32 fn_801039A4(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 4) = lbl_802E23A8;
        if (*(void **)(param_1 + 0x10) != 0) {
            __dla__FPv((int)(*(void **)(param_1 + 0x10)));
        }
        *(u32 *)(param_1 + 0x10) = 0;
        *(u32 *)(param_1 + 0x14) = 0;
        *(u32 *)(param_1 + 8) = 0;
        *(u32 *)(param_1 + 0xc) = 0;
        __dt__9C80031B94Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
