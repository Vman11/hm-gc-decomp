// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AB30;
void fn_800F7894(int, int);
void fn_80119344(int);

void fn_8011B00C(u32 param_1) {
    if (lbl_8035AB30 != 0) {
        fn_800F7894((int)(param_1 + 4), (int)(lbl_8035AB30));
        lbl_8035AB30 = 0;
    }
    fn_80119344((int)(param_1));
}

} /* extern "C" */
