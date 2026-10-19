// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8021B8C4(void);

void fn_8021BB88(u32 *param_1) {
    fn_8021B8C4();
    *param_1 = *param_1 | 0x150;
}

} /* extern "C" */
