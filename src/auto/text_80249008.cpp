// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B488;
void fn_8023E914(int, int);

void fn_80249008(s32 param_1, s32 param_2) {
    fn_8023E914((int)(lbl_8035B488), (int)(*(u32 *)(*(s32 *)(param_1 + 0x70) + param_2 * 4)));
    *(u32 *)(*(s32 *)(param_1 + 0x70) + param_2 * 4) = 0;
}

} /* extern "C" */
