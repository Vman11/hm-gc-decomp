// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E4198(void);

void fn_801A2578(s32 param_1) {
    fn_801E4198();
    *(u32 *)(param_1 + 0xf0) = 0;
}

} /* extern "C" */
