// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB700(int, int, int);

void fn_8021164C(s32 param_1) {
    fn_800FB700((int)(param_1 + 0x4c), (int)(param_1 + 0xc), (int)(0x20));
}

} /* extern "C" */
