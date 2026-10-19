// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);
extern void *memset(void *, int, unsigned long);

void * fn_8020804C(void *param_1, s16 param_2) {
    if (param_1 != (void *)0x0) {
        memset(param_1,0,0x80);
        memset((void *)((s32)param_1 + 0x80),0,0x10c);
        memset((void *)((s32)param_1 + 0x18c),0,0x10c);
        memset((void *)((s32)param_1 + 0x298),0,0x400);
        *(u32 *)((s32)param_1 + 0x698) = 0;
        *(u32 *)((s32)param_1 + 0x69c) = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
