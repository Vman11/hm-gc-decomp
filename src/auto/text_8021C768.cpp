// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8021B908(void);

void fn_8021C768(s32 param_1) {
    fn_8021B908();
    *(u32 *)(param_1 + 0x14) = 0;
}

} /* extern "C" */
