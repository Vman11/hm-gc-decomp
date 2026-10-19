// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800BFAA8(int);
void fn_8020B1E0(void);

void fn_80208B3C(s32 param_1) {
    fn_800BFAA8((int)(param_1 + 4));
    fn_8020B1E0();
}

} /* extern "C" */
