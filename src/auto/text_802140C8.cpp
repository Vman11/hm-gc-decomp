// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80212B10(int, int);

void fn_802140C8(s32 param_1) {
    fn_80212B10((int)(param_1 + 0x28), (int)(*(u32 *)(*(s32 *)(param_1 + 0x1c) + 0x6e4)));
}

} /* extern "C" */
