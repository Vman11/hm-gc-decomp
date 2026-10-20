// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 **fn_80110444(void *, void *, s32);
void fn_800FA474(void *, void *, void *);

void fn_801164AC(void *p, void *q, u8 *a, void *b) {
    u8 **r;
    *a = 0;
    r = fn_80110444(p, q, 0);
    if (r != NULL) {
        u8 *o = *r;
        fn_800FA474(*(s32 *)(o + 52) != 0 ? o + 32 : o + 12, a, b);
    }
}

} /* extern "C" */
