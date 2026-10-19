// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8014C784(int, int);

void fn_802207F4(u32 param_1, s32 *param_2, u32 param_3) {
    fn_8014C784((int)(param_3), (int)(*param_2 + 0x10));
}

} /* extern "C" */
