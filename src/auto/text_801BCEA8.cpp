// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_801B3110(int);

void fn_801BCEA8(s32 param_1) {
    if (*(void **)(param_1 + 0x164) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x164)));
    }
    fn_801B3110((int)(param_1));
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x16c) = 0;
    *(u32 *)(param_1 + 0x168) = 0;
}

} /* extern "C" */
