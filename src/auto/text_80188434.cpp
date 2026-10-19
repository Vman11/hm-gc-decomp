// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80199F18(void);

s32 fn_80188434(s32 param_1) {
    fn_80199F18();
    *(u32 *)(param_1 + 0x1c) = 0;
    return param_1;
}

} /* extern "C" */
