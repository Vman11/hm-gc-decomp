// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B1D0;
void fn_80208518(int, int, int);

void fn_8021141C(u32 *param_1) {
    fn_80208518((int)(lbl_8035B1D0 + 8), (int)(param_1), (int)(*param_1));
}

} /* extern "C" */
