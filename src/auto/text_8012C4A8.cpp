// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8014CA5C(int);

void fn_8012C4A8(u32 *param_1) {
    *param_1 = 0;
    fn_8014CA5C((int)(param_1 + 1));
    param_1[0xb] = 0;
    *(u8 *)(param_1 + 10) = 0x80;
    *(u8 *)((s32)param_1 + 0x29) = 0x80;
    *(u8 *)((s32)param_1 + 0x2a) = 0x80;
    *(u8 *)((s32)param_1 + 0x2b) = 0x80;
}

} /* extern "C" */
