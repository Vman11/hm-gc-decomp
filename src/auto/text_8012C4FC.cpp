// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8014CAA0(int, int);

void fn_8012C4FC(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    *param_1 = param_2;
    fn_8014CAA0((int)(param_1 + 1), (int)(param_3));
    param_1[0xb] = param_4;
    *(u8 *)(param_1 + 10) = 0x80;
    *(u8 *)((s32)param_1 + 0x29) = 0x80;
    *(u8 *)((s32)param_1 + 0x2a) = 0x80;
    *(u8 *)((s32)param_1 + 0x2b) = 0x80;
}

} /* extern "C" */
