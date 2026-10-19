// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D9A04(int, int, int);

void fn_8016B8E0(s32 param_1) {
    *(u32 *)(param_1 + 0x2c) = *(u32 *)(param_1 + 0x2c) & 0xfffffbff;
    if (*(u8 *)(param_1 + 0x2400) == 0) {
        *(u8 *)(param_1 + 0x2400) = 1;
        fn_800D9A04((int)(*(u8 *)(param_1 + 0x23f8)), (int)(*(u32 *)(param_1 + 0x23fc)), (int)(*(u8 *)(param_1 + 0x2400)));
    }
}

} /* extern "C" */
