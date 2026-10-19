// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *, int, unsigned long);

void fn_8015B1CC(s32 param_1) {
    memset((void *)(param_1 + 0x50),0,8);
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 0x58) = 0;
    *(u32 *)(param_1 + 100) = 0;
}

} /* extern "C" */
