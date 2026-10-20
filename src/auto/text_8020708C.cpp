// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_800FB2E0(void *);

void fn_8020708C(f32 *p, void *q) {
    p[0] = fn_800FB2E0(q);
    p[1] = fn_800FB2E0(q);
    p[2] = fn_800FB2E0(q);
    p[3] = fn_800FB2E0(q);
}

} /* extern "C" */
