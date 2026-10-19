// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_80137B40(int);
extern void *memset(void *, int, unsigned long);

void fn_8015563C(s32 param_1) {
    if (*(void **)(param_1 + 0x38) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x38)));
    }
    fn_80137B40((int)(param_1));
    memset((void *)(param_1 + 0x18),0,0x20);
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
}

} /* extern "C" */
