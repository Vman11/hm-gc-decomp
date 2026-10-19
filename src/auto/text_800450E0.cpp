// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80249968(void);

void fn_800450E0(s32 param_1, s32 param_2) {
    *(u32 *)(param_1 + 0x7c) = *(u32 *)(param_2 + 0x20);
    fn_80249968();
}

} /* extern "C" */
