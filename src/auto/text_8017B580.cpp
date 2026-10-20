// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_8019C210(void *, void *);
void fn_8019A058(void *, void *, void *, void *, s32);

void fn_8017B580(u8 *p, void *a, void *b, void *c, s32 d) {
    switch (d) {
    case 72:
        *(void **)(p + 12) = fn_8019C210(b, c);
        break;
    case 73:
        *(void **)(p + 16) = fn_8019C210(b, c);
        break;
    default:
        fn_8019A058(p, a, b, c, d);
        break;
    }
}

} /* extern "C" */
