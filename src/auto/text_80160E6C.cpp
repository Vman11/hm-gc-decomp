// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80147AD8(int, int, int);

void fn_80160E6C(s32 param_1, u32 param_2, s32 param_3) {
    fn_80147AD8((int)(*(u32 *)(param_1 + 0x14)), (int)(*(u16 *)(*(s32 *)(param_1 + 0x18) + param_3 * 2)), (int)(param_2));
}

} /* extern "C" */
