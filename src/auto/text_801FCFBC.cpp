// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F8DD0(void);

void fn_801FCFBC(s32 param_1) {
    fn_800F8DD0();
    *(u32 *)(param_1 + 0x14) = 0;
}

} /* extern "C" */
