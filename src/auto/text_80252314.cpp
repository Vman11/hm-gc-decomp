// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B5E4;
void fn_80253250(int);

void fn_80252314(u32 param_1, u32 param_2, s32 param_3) {
    fn_80253250((int)(*(s32 *)(lbl_8035B5E4 + 0x70) + param_3 * 0x34));
}

} /* extern "C" */
