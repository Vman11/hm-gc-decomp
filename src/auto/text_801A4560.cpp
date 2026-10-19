// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801B2C64(void);

void fn_801A4560(s32 param_1) {
    fn_801B2C64();
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
}

} /* extern "C" */
