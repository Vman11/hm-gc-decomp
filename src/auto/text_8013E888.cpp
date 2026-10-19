// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801071F8(void);

s32 fn_8013E888(s32 param_1) {
    fn_801071F8();
    *(u32 *)(param_1 + 0x10) = 0;
    return param_1;
}

} /* extern "C" */
