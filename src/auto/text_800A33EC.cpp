// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8005F620(void);

void fn_800A33EC(s32 param_1) {
    fn_8005F620();
    *(u32 *)(param_1 + 0x260) = 0x40;
}

} /* extern "C" */
