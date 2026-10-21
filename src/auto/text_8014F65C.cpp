// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800BC0C4(int, void *, int);
void fn_80153A0C(void *, int);

void fn_8014F65C(u32 param_1, u32 param_2) {
    u8 auStack_48 [64];

    fn_80153A0C(auStack_48, (int)(param_1));
    fn_800BC0C4((int)(param_2), auStack_48, (int)(param_1));
}

} /* extern "C" */
