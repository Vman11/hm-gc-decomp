// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void __dl__FPv(int);
void dtor_801F5E3C(int, int);
void fn_801F2ED8(int, int);

u32 * fn_80149B34(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        if (param_1[0x1c] != 0) {
            __dla__FPv((int)(param_1[0x1c]));
        }
        if (param_1[0x1d] != 0) {
            __dla__FPv((int)(param_1[0x1d]));
        }
        if (*param_1 != 0) {
            __dla__FPv((int)(*param_1));
        }
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x13] = 0;
        param_1[0x24] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x25] = 0;
        param_1[0x24f6] = 0;
        *param_1 = 0;
        fn_801F2ED8((int)(param_1 + 0x28), (int)(0xffffffff));
        dtor_801F5E3C((int)(param_1 + 1), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
