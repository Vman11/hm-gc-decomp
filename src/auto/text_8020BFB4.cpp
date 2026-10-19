// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_802089D4(void);

void fn_8020BFB4(s32 param_1) {
    fn_802089D4();
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0xc) = 0;
}

} /* extern "C" */
