// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8024ADD4(void *, void *);

void fn_802353E4(u8 *p, void *a) {
    u8 *q = p;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s32 *)(q + 28) != 0) {
            fn_8024ADD4(q + 4, a);
        }
        q += 196;
    }
}

} /* extern "C" */
