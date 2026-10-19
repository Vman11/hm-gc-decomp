// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F9398(int, int);
void fn_800F9788(int, int, int);

void fn_801AAA5C(s32 param_1, u32 param_2, s8 *param_3) {
    if ((param_3 == (s8 *)0x0) || (*param_3 == '\0')) {
        fn_800F9398((int)(param_1 + 0x24), (int)(param_2));
    }
    else {
        fn_800F9788((int)(param_1 + 0x3c), (int)(param_3), (int)(param_2));
    }
}

} /* extern "C" */
