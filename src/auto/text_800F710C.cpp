// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile u32 lbl_8035A9E8;
u32 fn_800FBB9C(void);

u32 fn_800F710C(void) {
    lbl_8035A9E8 = fn_800FBB9C() & 0x7FF;
    return lbl_8035A9E8;
}

} /* extern "C" */
