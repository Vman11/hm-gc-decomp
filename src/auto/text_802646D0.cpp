// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802AA1F8[];
s32 fn_80261114(void *, int, int);
void fn_80261B18(void *, int);

void fn_802646D0(void *param_1, u32 param_2) {
    u32 *puVar1;

    puVar1 = (u32 *)fn_80261114(param_1, (int)(lbl_802AA1F8), 0); /* "TargetRelative" */
    if (puVar1 != (u32 *)0x0) {
        *(u32 *)((u8 *)param_1 + 200) = *puVar1;
    }
    fn_80261B18(param_1, (int)(param_2));
}

} /* extern "C" */
