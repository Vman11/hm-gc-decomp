// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B818;
void __dl__FPv(int);
void fn_80216B50(int, int);

u32 * fn_80272DDC(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        lbl_8035B818 = 0;
        if (param_1[5] != 0) {
            if (param_1[5] != 0) {
                fn_80216B50((int)(param_1[4]), (int)(param_1[5]));
            }
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[4] = 0;
            param_1[3] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
