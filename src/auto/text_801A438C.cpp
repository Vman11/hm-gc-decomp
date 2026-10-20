// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A5184(void *, void *, void *, void *, void *, s32, s32, s32, s32, s32);

void fn_801A438C(void *p, void *a, void *b, void *c, void *d) {
    fn_801A5184(p, a, b, c, d, 0, 0, 0, 1, 0);
}

} /* extern "C" */
