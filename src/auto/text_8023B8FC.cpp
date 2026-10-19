// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef s32 (*F_8023B8FC)(void *);
F_8023B8FC *fn_800F8274(void *, void *);

s32 fn_8023B8FC(void *a, void *b, void *c) {
    F_8023B8FC *r = fn_800F8274(a, b);
    if (r == NULL) {
        return 0;
    }
    if (*r == NULL) {
        return 0;
    }
    if (*r) {
        return (*r)(c);
    }
    return 0;
}

} /* extern "C" */
