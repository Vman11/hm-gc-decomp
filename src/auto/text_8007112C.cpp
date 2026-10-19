// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B7BC;
void fn_8026AE28(int, int, int, int);

void fn_8007112C(s32 param_1) {
    fn_8026AE28((int)(lbl_8035B7BC), (int)(param_1), (int)(param_1 + 0x13c), (int)(0));
}

} /* extern "C" */
