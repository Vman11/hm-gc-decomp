// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018EE10(int, int);

void fn_8018E1B0(u32 *param_1, u32 param_2) {
    if ((*param_1 & 2) == 0) {
        fn_8018EE10((int)(param_2), (int)(param_1));
    }
}

} /* extern "C" */
