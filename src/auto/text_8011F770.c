// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E3E88[];
void __ct__9C800FB754Fv();
void __ct__9C80119180Fv();
void fn_8011F634();

s32 __ct__9C8011F770Fv(s32 param_1) {
    *(u8 **)(param_1 + 0xd0) = lbl_802E3E88;
    __ct__9C800FB754Fv(param_1 + 0x24);
    __ct__9C80119180Fv(param_1 + 0x38);
    fn_8011F634(param_1);
    return param_1;
}
