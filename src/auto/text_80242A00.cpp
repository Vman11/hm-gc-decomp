// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B4A4;
void fn_801154D8(int);

void fn_80242A00(u32 *param_1) {
    fn_801154D8((int)(param_1[1]));
    *param_1 = 0;
    lbl_8035B4A4 = 0;
}

} /* extern "C" */
