// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018B76C(int, int, int);

void fn_801909F4(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    fn_8018B76C((int)(param_2), (int)(param_1), (int)(param_4));
}

} /* extern "C" */
