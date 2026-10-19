// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8011A894(int);
void fn_8021C9C0(int);

void fn_8021E3AC(s32 param_1) {
    fn_8021C9C0((int)(param_1 + 0xc));
    fn_8011A894((int)(param_1));
}

} /* extern "C" */
