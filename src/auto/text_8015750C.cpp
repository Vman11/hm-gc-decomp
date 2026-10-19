// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80155080(int);
void fn_8016CBF8(int, int);

void fn_8015750C(s32 param_1) {
    if (*(u32 *)(param_1 + 0x50) != 0) {
        fn_8016CBF8((int)(*(u32 *)(param_1 + 0x50)), (int)(param_1));
    }
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    fn_80155080((int)(param_1));
}

} /* extern "C" */
