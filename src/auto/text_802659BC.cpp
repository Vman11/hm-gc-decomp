// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80261AD4(void);

void fn_802659BC(s32 param_1) {
    *(u32 *)(param_1 + 0xb0) = 0;
    *(u32 *)(param_1 + 0xb4) = 0;
    *(u32 *)(param_1 + 0xb8) = 0;
    *(u32 *)(param_1 + 0xbc) = 0;
    fn_80261AD4();
}

} /* extern "C" */
