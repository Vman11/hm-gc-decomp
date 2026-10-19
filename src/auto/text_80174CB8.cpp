// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D5F20(int, int, int, int, int, int);
void fn_800D944C(int, int, int, int);

void fn_80174CB8(u32 *param_1) {
    if ((*param_1 != 0) || (param_1[7] != 0)) {
        fn_800D944C((int)(*(u8 *)((u32)param_1 + 0x21)), (int)(0xff), (int)(0xff), (int)(4));
        fn_800D5F20((int)(0), (int)(0), (int)(4), (int)(0x3c), (int)(0), (int)(0x7d));
        *param_1 = 0;
        param_1[7] = 0;
    }
}

} /* extern "C" */
