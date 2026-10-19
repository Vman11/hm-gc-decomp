// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8E58[];
void __dl__FPv(int);
void fn_800FCFA8(int);
void fn_800FD3CC(int, int);

s32 __dt__9C8018C334Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x30) = lbl_802E8E58;
        fn_800FCFA8((int)(param_1));
        fn_800FD3CC((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
