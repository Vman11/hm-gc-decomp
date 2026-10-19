// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80103958(void);

void fn_8017AD2C(s32 param_1) {
    fn_80103958();
    *(u32 *)(param_1 + 0x18) = 0;
}

} /* extern "C" */
