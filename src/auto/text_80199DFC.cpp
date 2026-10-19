// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80190F14(void);

void fn_80199DFC(s32 param_1) {
    fn_80190F14();
    *(u32 *)(param_1 + 0x6c) = 0;
}

} /* extern "C" */
