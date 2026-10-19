// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DD63C(int, int);

void fn_801BA388(s32 param_1, s32 param_2) {
    if (param_2 != 0) {
        *(u32 *)(param_1 + 0x6c) = *(u32 *)(param_1 + 0x6c) | 1;
        fn_801DD63C((int)(*(u32 *)(param_1 + 0x11c)), (int)(param_1));
    }
    else {
        *(u32 *)(param_1 + 0x6c) = *(u32 *)(param_1 + 0x6c) & 0xfffffffe;
    }
}

} /* extern "C" */
