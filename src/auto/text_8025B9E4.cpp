// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366860;
void fn_80267E34(void *, void *, void *);

void fn_8025B9E4(u8 *p, void *a, void *b) {
    *(f32 *)(p + 0xFC) = lbl_80366860;
    fn_80267E34(p, a, b);
}

} /* extern "C" */
