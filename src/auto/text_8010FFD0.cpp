// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010FEDC(int, int, int, int);

void fn_8010FFD0(u32 param_1, u32 param_2, u32 param_3) {
    fn_8010FEDC((int)(param_1), (int)(0), (int)(param_2), (int)(param_3));
}

} /* extern "C" */
