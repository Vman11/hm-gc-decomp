// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F9FE0(int, int);

void fn_800F58C8(u32 *param_1) {
    param_1[2] = 0x15;
    fn_800F9FE0((int)(*param_1), (int)(0x2f));
}

} /* extern "C" */
