// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80229108(int, int, int);

void fn_802290E4(u32 param_1, s32 param_2) {
    fn_80229108((int)(param_1), (int)(param_2), (int)(param_2 + 8));
}

} /* extern "C" */
