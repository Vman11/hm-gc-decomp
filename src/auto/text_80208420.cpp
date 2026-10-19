// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80208724Fv[];
void __dla__FPv(int);
void __dl__FPv(int);
void fn_800E1E88(int, int);

u32 * __dt__9C802084B0Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2]));
        }
        if (*param_1 != 0) {
            fn_800E1E88((int)(*param_1), (int)(__dt__9C80208724Fv));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
