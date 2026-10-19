// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8022D9AC(void);

void fn_8022E790(s32 param_1) {
    *(u32 *)(param_1 + 0x114) = 0;
    fn_8022D9AC();
}

} /* extern "C" */
