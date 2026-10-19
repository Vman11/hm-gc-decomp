// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A7598(void);

void fn_801BBB00(s32 param_1, s32 param_2) {
    fn_801A7598();
    *(u32 *)(param_1 + 0x168) = *(u32 *)(param_2 + 0x168);
    *(u32 *)(param_1 + 0x16c) = *(u32 *)(param_2 + 0x16c);
    *(u32 *)(param_1 + 0x170) = *(u32 *)(param_2 + 0x170);
}

} /* extern "C" */
