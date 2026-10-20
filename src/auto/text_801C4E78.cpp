// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801CECE8(void *, void *, void *, void *);

void fn_801C4E78(u8 *p, void *a, void *b) {
    u8 *q = *(u8 **)(p + 0x16C);
    fn_801CECE8(q, a, b, *(void **)(q + 0x198));
}

} /* extern "C" */
