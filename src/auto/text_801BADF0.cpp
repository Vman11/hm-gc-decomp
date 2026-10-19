// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_801B3110(void);

void fn_801BADF0(s32 param_1) {
    fn_801B3110();
    if (*(void **)(param_1 + 0x174) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x174)));
    }
    if (*(void **)(param_1 + 0x178) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x178)));
    }
    *(u32 *)(param_1 + 0x174) = 0;
    *(u32 *)(param_1 + 0x198) = 0;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x16c) = 0;
    *(u32 *)(param_1 + 0x168) = 0;
    *(u32 *)(param_1 + 0x170) = 1;
    *(u32 *)(param_1 + 0x178) = 0;
    *(u32 *)(param_1 + 0x17c) = 0;
}

} /* extern "C" */
