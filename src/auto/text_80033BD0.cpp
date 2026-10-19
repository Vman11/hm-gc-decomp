// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F069C[];
void __dl__FPv(int);
void __dt__9C80031B94Fv(int, int);
void fn_80222BE8(int);

s32 dtor_80033BD0(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 4) = lbl_802F069C;
        fn_80222BE8((int)(param_1));
        __dt__9C80031B94Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
