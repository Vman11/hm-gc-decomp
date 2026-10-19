// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800A29A4(void);
void fn_80241E0C(int);

void fn_800A2ABC(u32 param_1) {
    fn_800A29A4();
    fn_80241E0C((int)(param_1));
}

} /* extern "C" */
