// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B308;
void fn_802416D4(int, int);

void fn_8008434C(s32 param_1, s32 param_2) {
    *(u32 *)(param_1 + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
    fn_802416D4((int)(param_1), (int)(param_2));
}

} /* extern "C" */
