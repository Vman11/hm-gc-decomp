// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8016E400(int, int);

void fn_8015C95C(s32 param_1, u32 param_2, s32 param_3) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        fn_8016E400((int)(param_1 + param_3 * 0x1c + 0x48), (int)(param_2));
    }
}

} /* extern "C" */
