// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8011F36C(int);

void fn_80118D98(s32 *param_1) {
    *(u32 *)(*param_1 + 0x14) = 0x30000000;
    *(u32 *)(*param_1 + 0x10) = 4;
    param_1[1] = 1;
    param_1[2] = 1;
    fn_8011F36C((int)(*param_1));
}

} /* extern "C" */
