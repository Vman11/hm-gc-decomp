// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801487C8(void);

void fn_80120D3C(s32 param_1) {
    fn_801487C8();
    *(u32 *)(param_1 + 0x540) = 0;
    *(u32 *)(param_1 + 0x544) = 0;
    *(u32 *)(param_1 + 0x548) = 0;
}

} /* extern "C" */
