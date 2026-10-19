// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80148118(int);

void fn_8014CA5C(u32 *param_1) {
    fn_80148118((int)(param_1 + 2));
    *param_1 = 0;
    param_1[1] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
}

} /* extern "C" */
