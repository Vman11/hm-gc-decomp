// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80116390(int);
void fn_8011640C(int, int);

void fn_80115090(u32 param_1, u32 param_2) {
    fn_80116390((int)(param_2));
    fn_8011640C((int)(param_2), (int)(1));
}

} /* extern "C" */
