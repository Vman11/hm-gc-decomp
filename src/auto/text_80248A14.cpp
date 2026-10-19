// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B7BC;
void fn_8026B3F0(int);
void fn_8026B43C(int, int, int);

void fn_80248A14(s32 param_1, u32 param_2) {
    if ((*(s32 *)(param_1 + 0x2c) != 0) && (param_2 != 0)) {
        fn_8026B3F0((int)(lbl_8035B7BC));
        fn_8026B43C((int)(lbl_8035B7BC), (int)(param_2), (int)(0));
    }
}

} /* extern "C" */
