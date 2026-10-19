// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801150CC(int);
void fn_8011558C(int);

void fn_80114F30(u32 *param_1) {
    fn_8011558C((int)(param_1 + 2));
    fn_801150CC((int)(param_1 + 1));
    *param_1 = 0;
}

} /* extern "C" */
