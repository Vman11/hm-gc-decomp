// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *, int, unsigned long);

void fn_8006114C(s32 param_1, u32 *param_2) {
    memset(param_2,0,0xd4);
    *param_2 = 1;
    param_2[2] = *(u32 *)(param_1 + 0x34e0);
}

} /* extern "C" */
