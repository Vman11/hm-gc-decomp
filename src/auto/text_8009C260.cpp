// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035A0A4;
void fn_80249AC4(void);

void fn_8009C260(s32 param_1) {
    *(u32 *)(param_1 + 0x84) = lbl_8035A0A4;
    fn_80249AC4();
}

} /* extern "C" */
