// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80102EC0(int, int);

void fn_8017A61C(u32 *param_1) {
    if ((1 < (u32)param_1[1]) && (*param_1 != 0)) {
        fn_80102EC0((int)(param_1 + 3), (int)(*param_1));
    }
}

} /* extern "C" */
