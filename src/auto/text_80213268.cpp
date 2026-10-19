// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80213428Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);

void fn_80213268(u32 *param_1) {
    if (param_1[1] != 0) {
        if (param_1[1] != 0) {
            __dla__FPv((int)(param_1[1] + -0x10));
        }
    }
    if (*param_1 != 0) {
        fn_800E1E88((int)(*param_1), (int)(__dt__9C80213428Fv));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(u16 *)(param_1 + 3) = 0;
    *(u16 *)((u32)param_1 + 0xe) = 0;
    *(u16 *)(param_1 + 4) = 0;
    *(u16 *)((u32)param_1 + 0x12) = 0;
}

} /* extern "C" */
