// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C800F5578[];
void fn_800FB48C(void);

s32 __ct__9C800F6BDCFv(s32 param_1) {
    fn_800FB48C();
    *(u8 **)(param_1 + 0x124) = __vt__9C800F5578;
    *(u8 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 0x168) = 0;
    *(u32 *)(param_1 + 0x16c) = 0;
    return param_1;
}

} /* extern "C" */
