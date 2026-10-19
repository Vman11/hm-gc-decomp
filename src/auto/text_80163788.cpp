// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802A0C10[];
void fn_8016C3CC(int, int);

void fn_80163788(s32 param_1, s32 param_2) {
    fn_8016C3CC((int)(*(u32 *)(param_1 + 0x1934)), (int)(*(u32 *)(lbl_802A0C10 + param_2 * 4)));
}

} /* extern "C" */
