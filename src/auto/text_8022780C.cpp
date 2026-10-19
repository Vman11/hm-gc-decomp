// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80238CF4(void);

void fn_8022780C(s32 param_1) {
    fn_80238CF4();
    *(u32 *)(param_1 + 0x94) = 2;
}

} /* extern "C" */
