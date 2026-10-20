// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef union { u32 i; f32 f; } U_8011526C;

u32 fn_8011526C(void *x, void *y, u32 *s) {
    U_8011526C a;
    U_8011526C b;
    U_8011526C r;
    a.i = s[1];
    b.i = s[2];
    r.f = a.f - b.f;
    return r.i;
}

} /* extern "C" */
