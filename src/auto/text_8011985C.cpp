// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80108800(void);

void fn_8011985C(s32 param_1) {
    fn_80108800();
    *(u32 *)(param_1 + 0x80) = 0;
}

} /* extern "C" */
