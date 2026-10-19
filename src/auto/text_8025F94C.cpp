// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F29F0[];
void fn_8025F808(void);

s32 __ct__9C8025F94CFv(s32 param_1) {
    *(u8 **)(param_1 + 0xa0) = lbl_802F29F0;
    fn_8025F808();
    return param_1;
}

} /* extern "C" */
