// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035A9F0;
void fn_800F771C(int, int);

void fn_80221510(u32 param_1) {
    fn_800F771C((int)(lbl_8035A9F0), (int)(param_1));
}

} /* extern "C" */
