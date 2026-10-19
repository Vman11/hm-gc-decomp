// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_80185518(int);

void fn_8018C98C(s32 param_1) {
    if (*(void **)(param_1 + 0xa0) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0xa0)));
    }
    fn_80185518((int)(param_1));
    *(u32 *)(param_1 + 0xa0) = 0;
    *(u32 *)(param_1 + 0xa4) = 0;
}

} /* extern "C" */
