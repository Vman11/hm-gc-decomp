// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801BBB50(void);

void fn_8009F27C(s32 param_1) {
    fn_801BBB50();
    *(u8 *)(param_1 + 0x174) = 0;
    *(u8 *)(param_1 + 0x17c) = 0;
}

} /* extern "C" */
