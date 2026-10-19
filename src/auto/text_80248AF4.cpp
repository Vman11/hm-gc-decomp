// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B7BC;
void fn_8026B280(int);
void fn_8026B2CC(int, int, int);

void fn_80248AF4(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    if ((*(s32 *)(param_1 + 0x2c) != 0) && (param_2 != 0)) {
        fn_8026B280((int)(lbl_8035B7BC));
        fn_8026B2CC((int)(lbl_8035B7BC), (int)(param_2), (int)(param_4));
    }
}

} /* extern "C" */
