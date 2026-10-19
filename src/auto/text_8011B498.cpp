// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3DE8[];
void fn_80119A58(void);

s32 fn_8011B498(s32 param_1) {
    fn_80119A58();
    *(u8 **)(param_1 + 0x1c) = lbl_802E3DE8;
    return param_1;
}

} /* extern "C" */
