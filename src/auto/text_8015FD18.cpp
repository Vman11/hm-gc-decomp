// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80132E1C(int, int, int);

void fn_8015FD18(u32 param_1, u32 param_2, u32 param_3) {
    fn_80132E1C((int)(param_1), (int)(param_2), (int)(param_3 | 0x100));
}

} /* extern "C" */
