// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017A61C(int);
void fn_8018E0BC(void);

void fn_8018832C(s32 param_1) {
    fn_8018E0BC();
    fn_8017A61C((int)(param_1 + 0xa8));
}

} /* extern "C" */
