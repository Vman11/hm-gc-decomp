// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_801340B0(int);

void fn_801631D4(s32 param_1) {
    if (*(u32 *)(param_1 + 0x44) != 0) {
        if (*(u32 *)(param_1 + 0x44) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0x44) + -0x10));
        }
    }
    fn_801340B0((int)(param_1));
    *(u32 *)(param_1 + 0x44) = 0;
    *(u8 *)(param_1 + 0x48) = 0;
    *(u8 *)(param_1 + 0x40) = 0;
}

} /* extern "C" */
