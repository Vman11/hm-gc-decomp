// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364FE8;
void fn_801D6D7C(void *, void *, void *);

void fn_801C405C(u8 *p, void *a, void *b) {
    *(f32 *)(p + 0x1AC) = lbl_80364FE8;
    fn_801D6D7C(p, a, b);
}

} /* extern "C" */
