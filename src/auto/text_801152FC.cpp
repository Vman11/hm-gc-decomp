// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef union { u32 i; f32 f; } U_801152FC;

u32 fn_801152FC(void *x, void *y, u32 *s) {
    U_801152FC a;
    U_801152FC b;
    U_801152FC r;
    a.i = s[1];
    b.i = s[2];
    r.f = a.f * b.f;
    return r.i;
}

} /* extern "C" */
