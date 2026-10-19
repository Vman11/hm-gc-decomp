// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
extern void *memset(void *, int, unsigned long);

void fn_80160EE0(u16 *param_1) {
    if (*(void **)(param_1 + 0xc) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0xc)));
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(u32 *)(param_1 + 10) = 0;
    memset(param_1 + 4,0,0xc);
    *(u32 *)(param_1 + 0xc) = 0;
}

} /* extern "C" */
