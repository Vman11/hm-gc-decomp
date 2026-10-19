// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *, int, unsigned long);

void fn_80061244(s32 param_1, void *param_2) {
    memset(param_2,0,0x10);
    *(u32 *)((s32)param_2 + 4) = *(u32 *)(param_1 + 0x34e0);
}

} /* extern "C" */
