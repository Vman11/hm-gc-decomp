// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8011511C(void *a, void *b, u32 *p) {
    u32 x = p[1]; u32 y = p[2];
    f32 fa = *(f32 *)&x; f32 fb = *(f32 *)&y;
    if (fa == fb) return 0;
    if (fa > fb) return 1;
    return -1;
}

} /* extern "C" */
