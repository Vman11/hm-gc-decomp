// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D99AC(int);

void fn_800D99AC(int);

void fn_8016B848(s32 param_1) {
    *(u32 *)(param_1 + 0x2c) = *(u32 *)(param_1 + 0x2c) & 0xffffdfff;
    if (*(u8 *)(param_1 + 0x2401) == 0) {
        *(u8 *)(param_1 + 0x2401) = 1;
        fn_800D99AC((int)(*(u8 *)(param_1 + 0x2401)));
    }
}

} /* extern "C" */
