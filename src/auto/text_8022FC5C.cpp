// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A8764[];
void fn_80239024(int);
s32 fn_8023D13C(int, int, int);

void fn_8022FC5C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_802A8764), (int)(1)); /* "OneTimeOnly" */
    *(u32 *)(param_1 + 0x25c) = uVar1;
    fn_80239024((int)(param_1));
}

} /* extern "C" */
