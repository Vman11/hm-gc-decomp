// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B7E4;
void fn_801C2368(int, int, int);

void fn_80272ED0(s32 param_1) {
    if (*(u32 *)(lbl_8035B7E4 + 4) != 0) {
        fn_801C2368((int)(*(u32 *)(lbl_8035B7E4 + 4)), (int)(*(u32 *)(param_1 + 0x80)), (int)(1));
    }
}

} /* extern "C" */
