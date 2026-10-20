// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80361C60;
void fn_8005D9EC(void *, void *, void *, void *, void *, s32, f32, f32);

void fn_800A3130(void *a, void *b, void *c, void *d, void *e, f32 f) {
    fn_8005D9EC(a, b, c, d, e, 0, f, lbl_80361C60);
}

} /* extern "C" */
