// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80148288(int, int, int, int, int, int, int);

void fn_80175938(u32 param_1, u32 param_2) {
    fn_80148288((int)(param_2), (int)(0x20), (int)(0xff000000), (int)(0xff0000), (int)(0xff00), (int)(0xff), (int)(0));
}

} /* extern "C" */
