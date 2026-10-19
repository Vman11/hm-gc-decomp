// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802AA2F8[];
extern char lbl_802AA308[];
s32 fn_80261114(int, int, int);
void fn_80267CF8(int, int);

void fn_80266834(s32 param_1, u32 param_2) {
    u32 uVar1;

    uVar1 = fn_80261114((int)(param_1), (int)(lbl_802AA2F8), (int)(1)); /* "PathCurvyness" */
    *(u32 *)(param_1 + 0xfc) = uVar1;
    uVar1 = fn_80261114((int)(param_1), (int)(lbl_802AA308), (int)(1)); /* "DesiredHeadingDelta" */
    *(u32 *)(param_1 + 0x100) = uVar1;
    fn_80267CF8((int)(param_1), (int)(param_2));
}

} /* extern "C" */
