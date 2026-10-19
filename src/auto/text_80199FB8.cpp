// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018F370(int);

void fn_80199FB8(u32 *param_1, u32 param_2) {
    if (*param_1 != 0) {
        fn_8018F370((int)(param_2 + 0x210));
    }
}

} /* extern "C" */
