// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B64C;
void __dl__FPv(int);

u32 * fn_8025396C(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        lbl_8035B64C = 0;
        *param_1 = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
