// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F74F4(int);

void fn_800F7CDC(u32 *param_1) {
    u32 *puVar1;
    u32 *end;

    puVar1 = param_1 + 3;
    end = param_1 + 0xa3;
    for (; puVar1 < end; puVar1 = puVar1 + 10) {
        if (puVar1[2] != 0) {
            fn_800F74F4((int)(puVar1));
        }
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0xa3] = 0;
}

} /* extern "C" */
