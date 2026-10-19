// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800EC8D0(int);

void fn_800FB7A0(s32 param_1) {
    fn_800EC8D0((int)(*(u32 *)(param_1 + 0x10)));
}

} /* extern "C" */
