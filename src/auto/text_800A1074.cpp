// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_80242210(int);

void fn_800A1074(s32 param_1) {
    if (*(void **)(param_1 + 0x1fc) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x1fc)));
    }
    *(u32 *)(param_1 + 0x1fc) = 0;
    if (*(void **)(param_1 + 0x200) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x200)));
    }
    *(u32 *)(param_1 + 0x200) = 0;
    fn_80242210((int)(param_1));
}

} /* extern "C" */
