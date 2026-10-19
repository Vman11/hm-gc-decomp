// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80330210[];
extern u8 lbl_8033021C[];
extern f32 lbl_8035AD9C;
void fn_800FEEA0(f64, int, int, int);

void fn_8017D308(s32 param_1) {
    fn_800FEEA0((f64)lbl_8035AD9C, (int)(param_1 + 0x1c), (int)(lbl_80330210), (int)(lbl_8033021C));
}

} /* extern "C" */
