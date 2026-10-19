// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80207328(void);

void fn_80119F24(s32 param_1) {
    fn_80207328();
    *(u32 *)(param_1 + 0x7c) = 0;
}

} /* extern "C" */
