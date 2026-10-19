// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035AD80;
extern s32 lbl_8035AD8C;
extern s32 lbl_8035AD94;
extern s32 lbl_8035AD98;
void fn_8017C3F0(void);

void fn_8017C824(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    lbl_8035AD80 = param_2;
    lbl_8035AD8C = param_3;
    lbl_8035AD98 = param_4;
    lbl_8035AD94 = 0xffffffff;
    fn_8017C3F0();
}

} /* extern "C" */
