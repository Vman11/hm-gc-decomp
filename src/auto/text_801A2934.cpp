// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8011C314(void);

void fn_801A2934(s32 param_1) {
    fn_8011C314();
    *(u32 *)(param_1 + 0x80) = 0;
    *(u32 *)(param_1 + 0x84) = 0;
    *(u32 *)(param_1 + 0x88) = 0;
}

} /* extern "C" */
