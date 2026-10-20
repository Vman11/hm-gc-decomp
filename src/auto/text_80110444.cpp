// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_80111EEC(void *, void *, void *);

void *fn_80110444(u8 *p, void *a, void *b) {
    u8 *q = p;
    u32 i;
    for (i = 0; i < 13; i++) {
        void *r = fn_80111EEC(q + 56, a, b);
        if (r != NULL) {
            return r;
        }
        q += 32;
    }
    return NULL;
}

} /* extern "C" */
