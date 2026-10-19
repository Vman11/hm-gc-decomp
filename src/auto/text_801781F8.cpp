// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801781F8[];
void fn_8013BE24(void);

s32 __ct__9C801781F8Fv(s32 param_1) {
    fn_8013BE24();
    *(u8 **)(param_1 + 0x18) = __vt__9C801781F8;
    return param_1;
}

} /* extern "C" */
