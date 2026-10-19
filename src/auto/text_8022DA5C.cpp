// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A85C8[];
extern char lbl_802A85D8[];
s32 fn_8023D13C(int, int, int);

u32 fn_8022DA5C(s32 param_1) {
    u32 uVar1;

    if (*(u32 *)(param_1 + 0x10) != 0) {
        uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_802A85C8), (int)(0)); /* "rUpdateDistance" */
        *(u32 *)(param_1 + 0xac) = uVar1;
        uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_802A85D8), (int)(0)); /* "bDisableDrawingDistance" */
        *(u32 *)(param_1 + 0xa8) = uVar1;
    }
    return 0;
}

} /* extern "C" */
