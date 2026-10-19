// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019A348(void);
extern void *memset(void *, int, unsigned long);

void fn_80189618(s32 param_1) {
    fn_8019A348();
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
    memset((void *)(param_1 + 0x14),0,0x10);
}

} /* extern "C" */
