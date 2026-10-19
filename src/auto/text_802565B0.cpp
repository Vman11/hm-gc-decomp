// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80261AD4(void);

void fn_802565B0(s32 param_1) {
    *(u32 *)(param_1 + 0xc4) = 0;
    *(u32 *)(param_1 + 0xcc) = 0;
    *(u32 *)(param_1 + 0xd0) = 0;
    *(u32 *)(param_1 + 0xd4) = 0;
    *(u32 *)(param_1 + 0xbc) = 0;
    *(u32 *)(param_1 + 200) = 0;
    *(u32 *)(param_1 + 0xd8) = 0;
    *(u32 *)(param_1 + 0xdc) = 0;
    *(u32 *)(param_1 + 0xc0) = 0;
    fn_80261AD4();
}

} /* extern "C" */
