// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E85C8[];
void __dl__FPv(int);
void fn_80103958(int);
void fn_801039A4(int, int);

s32 fn_8017AD60(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 4) = lbl_802E85C8;
        fn_80103958((int)(param_1));
        *(u32 *)(param_1 + 0x18) = 0;
        fn_801039A4((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
