// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80161244(int, int);

void fn_80163A18(s32 param_1) {
    if (*(u32 *)(param_1 + 0x1ac8) != 0) {
        fn_80161244((int)(*(u32 *)(param_1 + 0x1ac8)), (int)(param_1));
    }
}

} /* extern "C" */
