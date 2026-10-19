// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802AA28C[];
s32 fn_80261114(int, int, int);
void fn_80261B18(int, int);

void fn_80265E6C(s32 param_1, u32 param_2) {
    u32 uVar1;

    uVar1 = fn_80261114((int)(param_1), (int)(lbl_802AA28C), (int)(0)); /* "SlowStop" */
    *(u32 *)(param_1 + 0xb0) = uVar1;
    fn_80261B18((int)(param_1), (int)(param_2));
}

} /* extern "C" */
