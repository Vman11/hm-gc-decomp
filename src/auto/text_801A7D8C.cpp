// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A75B8(void);

void fn_801A7D8C(u32 *param_1) {
    fn_801A75B8();
    *param_1 = 0;
    param_1[0x5a] = 0;
}

} /* extern "C" */
