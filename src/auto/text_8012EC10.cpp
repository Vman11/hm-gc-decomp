// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_8012EC10(s32 param_1) {
    if ((*(u32 *)(param_1 + 8) & 0x10) != 0) {
        if (*(u32 *)(param_1 + 0x2c) != 0) {
            if (*(u32 *)(param_1 + 0x2c) != 0) {
                __dla__FPv((int)(*(u32 *)(param_1 + 0x2c) + -0x10));
            }
            *(u32 *)(param_1 + 0x2c) = 0;
        }
        *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xffffffef;
    }
}

} /* extern "C" */
