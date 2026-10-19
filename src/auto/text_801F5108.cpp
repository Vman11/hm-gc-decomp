// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *, int, unsigned long);

void * fn_801F5108(void *param_1) {
    *(u32 *)((s32)param_1 + 0x380) = 0;
    memset(param_1,0,0x80);
    return param_1;
}

} /* extern "C" */
