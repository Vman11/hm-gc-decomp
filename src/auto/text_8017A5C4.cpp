// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_80102E34(int);

void fn_8017A5C4(u32 *param_1) {
    fn_80102E34((int)(param_1 + 3));
    if (param_1[2] != 0) {
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2] + -0x10));
        }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
}

} /* extern "C" */
