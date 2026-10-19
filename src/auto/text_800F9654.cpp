// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F6E88(void);

void fn_800F9654(s32 param_1) {
    fn_800F6E88();
    *(u32 *)(param_1 + 0xc) = 1;
}

} /* extern "C" */
