// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A0284[];
void fn_800FA5D8(int, int);

u32 fn_8014DD3C(s32 *param_1) {
    s32 *piVar1;

    fn_800FA5D8((int)(*param_1 + 0x24), (int)(lbl_802A0284)); /* "GameCube GamePad Controller" */
    param_1[1] = 4;
    piVar1 = (s32 *)*param_1;
    *piVar1 = 0xc;
    piVar1[0x2a] = *piVar1 + piVar1[1] + piVar1[2];
    piVar1 = (s32 *)*param_1;
    piVar1[1] = 6;
    piVar1[0x2a] = *piVar1 + piVar1[1] + piVar1[2];
    piVar1[0x2b] = piVar1[1] + piVar1[2];
    piVar1 = (s32 *)*param_1;
    piVar1[2] = 0;
    piVar1[0x2a] = *piVar1 + piVar1[1] + piVar1[2];
    piVar1[0x2b] = piVar1[1] + piVar1[2];
    return 0;
}

} /* extern "C" */
