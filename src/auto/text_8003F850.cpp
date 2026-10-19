// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80040C48(void);

void fn_8003F850(s32 param_1) {
    *(u32 *)(param_1 + 0x178) = 0;
    *(u32 *)(param_1 + 0x17c) = 0;
    fn_80040C48();
}

} /* extern "C" */
