// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E6230(void);

void fn_801EF0AC(s32 param_1) {
    fn_801E6230();
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
}

} /* extern "C" */
