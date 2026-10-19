// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800BC0C4(int, int, int);

void fn_8014F8EC(u32 param_1, u32 param_2, u32 param_3) {
    fn_800BC0C4((int)(param_3), (int)(param_2), (int)(param_1));
}

} /* extern "C" */
