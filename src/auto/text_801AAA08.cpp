// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A6860(int, int, int);
void fn_801A6A98(int, int, int, int);

void fn_801AAA08(s32 param_1, u32 param_2, u32 param_3, s8 *param_4) {
    if ((param_4 == (s8 *)0x0) || (*param_4 == '\0')) {
        fn_801A6860((int)(param_1 + 0xd8), (int)(param_2), (int)(param_3));
    }
    else {
        fn_801A6A98((int)(param_1 + 0xec), (int)(param_2), (int)(param_4), (int)(param_3));
    }
}

} /* extern "C" */
