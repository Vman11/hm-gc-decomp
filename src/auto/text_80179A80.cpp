// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void __dl__FPv(int);

u32 * __dt__9C80179B00Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2]));
        }
        if (*param_1 != 0) {
            __dla__FPv((int)(*param_1));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
