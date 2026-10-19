// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1940[];
void __dl__FPv(int);

s32 __dt__9C8023B4DCFv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xa0) = lbl_802F1940;
        *(u32 *)(param_1 + 0x1c) = 0;
        *(u32 *)(param_1 + 0x90) = 0;
        *(u32 *)(param_1 + 0x94) = 0;
        *(u32 *)(param_1 + 0x98) = 0;
        *(u32 *)(param_1 + 0x9c) = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
