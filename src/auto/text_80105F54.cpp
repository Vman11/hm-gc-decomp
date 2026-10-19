// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FF994(int, int, int);

void fn_80105F54(s32 *param_1) {
    fn_800FF994((int)(param_1[5] + 0x40), (int)(*param_1 + 0x14), (int)(param_1 + 8));
}

} /* extern "C" */
