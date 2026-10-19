// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802AA1F8[];
s32 fn_80261114(int, int, int);
void fn_80261B18(int, int);

void fn_802646D0(s32 param_1, u32 param_2) {
    u32 *puVar1;

    puVar1 = (u32 *)fn_80261114((int)(param_1), (int)(lbl_802AA1F8), (int)(0)); /* "TargetRelative" */
    if (puVar1 != (u32 *)0x0) {
        *(u32 *)(param_1 + 200) = *puVar1;
    }
    fn_80261B18((int)(param_1), (int)(param_2));
}

} /* extern "C" */
