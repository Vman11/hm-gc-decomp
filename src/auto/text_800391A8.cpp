// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035A1DC;
void fn_80060664(int);
void fn_80060748(int);

void fn_800391A8(s32 param_1, s32 param_2) {
    *(s32 *)(param_1 + 0x18) = param_2;
    if (param_2 == 0) {
        fn_80060664((int)(lbl_8035A1DC));
    }
    else {
        fn_80060748((int)(lbl_8035A1DC));
    }
}

} /* extern "C" */
