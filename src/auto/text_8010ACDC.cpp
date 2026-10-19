// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memcpy(void *, const void *, unsigned long);

void fn_8010ACDC(s32 param_1, void *param_2) {
    memcpy((void *)(param_1 + 0xc),param_2,8);
}

} /* extern "C" */
