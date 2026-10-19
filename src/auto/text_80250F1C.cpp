// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B818;
void fn_802729E0(int);

void fn_80250F1C(s32 param_1) {
    if ((*(u8 *)(param_1 + 0x11c) & 4) != 0) {
        fn_802729E0((int)(lbl_8035B818));
    }
}

} /* extern "C" */
