// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801D6DD8(int, int);

void fn_8026F194(s32 param_1) {
    if (*(u32 *)(param_1 + 8) != 0) {
        fn_801D6DD8((int)(*(u32 *)(param_1 + 8)), (int)(param_1));
    }
    if (*(u32 *)(param_1 + 0xc) != 0) {
        fn_801D6DD8((int)(*(u32 *)(param_1 + 0xc)), (int)(param_1));
    }
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
}

} /* extern "C" */
