// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8013E888(void);

s32 __ct__9C8018D1A4Fv(s32 param_1) {
    fn_8013E888();
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    return param_1;
}

} /* extern "C" */
