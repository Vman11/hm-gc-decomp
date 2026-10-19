// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E44C0[];
void __dl__FPv(int);
void fn_800FB6D8(int);

s32 __dt__9C8012C3F0Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x74) = lbl_802E44C0;
        fn_800FB6D8((int)(param_1 + 0x3c));
        fn_800FB6D8((int)(param_1 + 0x50));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
