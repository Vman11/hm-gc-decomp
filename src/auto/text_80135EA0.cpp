// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F9594(int);
void fn_800F9838(int, int, int);

void fn_80135EA0(u32 param_1, u32 param_2, u32 param_3) {
    if (param_3 == 0) {
        fn_800F9594((int)(param_1 + 0x168));
    }
    else {
        fn_800F9838((int)(param_1 + 0x180), (int)(param_3), (int)(param_2));
    }
}

} /* extern "C" */
