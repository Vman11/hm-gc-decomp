// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80249C7C(void);

void fn_80045108(s32 param_1) {
    *(u32 *)(param_1 + 0x7c) = 0;
    fn_80249C7C();
}

} /* extern "C" */
