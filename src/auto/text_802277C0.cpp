// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80238BF4(void);

void fn_802277C0(s32 param_1) {
    fn_80238BF4();
    *(u32 *)(param_1 + 0x254) = 1;
    *(u32 *)(param_1 + 600) = 0;
}

} /* extern "C" */
