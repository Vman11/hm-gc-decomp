// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);
void fn_800FC1FC(int);
extern void *memset(void *, int, unsigned long);

void fn_80132B5C(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x2c) != 0) && (4 < *(u16 *)(param_1 + 0x2a))) {
        __dl__FPv((int)(*(u32 *)(param_1 + 0x2c)));
    }
    *(u32 *)(param_1 + 0x34) = 0;
    memset((void *)(param_1 + 0x38),0,4);
    fn_800FC1FC((int)(param_1));
}

} /* extern "C" */
