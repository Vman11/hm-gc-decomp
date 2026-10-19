// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8022FD1C(void);

void fn_80229E1C(s32 param_1) {
    fn_8022FD1C();
    *(u32 *)(param_1 + 0x260) = 0;
}

} /* extern "C" */
