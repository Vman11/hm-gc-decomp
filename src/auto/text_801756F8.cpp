// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);
void fn_8017563C(void);

s32 __dt__9C80175748Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        fn_8017563C();
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
