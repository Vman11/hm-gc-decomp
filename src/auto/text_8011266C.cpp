// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801123A4(int);

void fn_8011266C(u32 param_1, s32 param_2) {
    if (*(void **)(param_2 + 0x1dc) != 0) {
        fn_801123A4((int)(*(void **)(param_2 + 0x1dc)));
    }
}

} /* extern "C" */
