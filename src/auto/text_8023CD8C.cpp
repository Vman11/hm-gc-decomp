// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8035758C[];
void fn_800F8274(int, int);

void fn_8023CD8C(u32 param_1) {
    fn_800F8274((int)(lbl_8035758C), (int)(param_1));
}

} /* extern "C" */
