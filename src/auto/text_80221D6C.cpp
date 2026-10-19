// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80216738(int);
void fn_80279498(int);

void fn_80221D6C(s32 param_1) {
    if (*(u32 *)(param_1 + 100) != 0) {
        fn_80279498((int)(*(u32 *)(param_1 + 100)));
        *(u32 *)(param_1 + 100) = 0;
    }
    fn_80216738((int)(param_1));
}

} /* extern "C" */
