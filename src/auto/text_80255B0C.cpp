// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B690;
extern s32 lbl_8035B694;
void __dl__FPv(int);

s32 fn_80255B0C(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        lbl_8035B690 = 0;
        lbl_8035B694 = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
