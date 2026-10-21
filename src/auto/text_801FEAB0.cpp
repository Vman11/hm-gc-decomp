// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801FE9EC[];
void fn_801FB798(void);

s32 __ct__9C801FE9ECFv(s32 param_1) {
    fn_801FB798();
    *(u8 **)(param_1 + 0x3c) = __vt__9C801FE9EC;
    return param_1;
}

} /* extern "C" */
