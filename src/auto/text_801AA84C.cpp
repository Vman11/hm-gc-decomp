// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F9324(int, int, int);
void fn_800F96F0(int, int, int, int);

void fn_801AA84C(s32 param_1, u32 param_2, u32 param_3, s8 *param_4) {
    if ((param_4 == (s8 *)0x0) || (*param_4 == '\0')) {
        fn_800F9324((int)(param_1 + 0x24), (int)(param_2), (int)(param_3));
    }
    else {
        fn_800F96F0((int)(param_1 + 0x3c), (int)(param_4), (int)(param_2), (int)(param_3));
    }
}

} /* extern "C" */
