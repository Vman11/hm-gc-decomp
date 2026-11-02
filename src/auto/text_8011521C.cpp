// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { s32 f0; s32 f4; } A3;
f64 fn_800EFE78(f64 x);
s32 fn_8011521C(void *p, void *b, A3 *c) {
    s32 i = c->f4;
    f32 x = *(f32 *)&i;
    f32 r = x - (f32)fn_800EFE78(x);
    return *(s32 *)&r;
}

} /* extern "C" */
