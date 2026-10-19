// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_801A15D8(int);

void fn_8018DE44(s32 param_1) {
    if (*(u32 *)(param_1 + 0x98) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x98)));
    }
    if (*(u32 *)(param_1 + 0xa0) != 0) {
        if (*(u32 *)(param_1 + 0xa0) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xa0) + -0x10));
        }
    }
    fn_801A15D8((int)(param_1));
    *(u32 *)(param_1 + 0x90) = 0;
    *(u32 *)(param_1 + 0x94) = 0;
    *(u32 *)(param_1 + 0x98) = 0;
    *(u32 *)(param_1 + 0x9c) = 0;
    *(u32 *)(param_1 + 0xa0) = 0;
    *(u32 *)(param_1 + 0xa4) = 0;
}

} /* extern "C" */
