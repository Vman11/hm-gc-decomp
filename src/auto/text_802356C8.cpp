// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8024AFF8(void *);

void fn_802356C8(u8 *p) {
    u8 *q = p;
    s32 i;
    for (i = 0; i < 4; i++) {
        fn_8024AFF8(q + 4);
        q += 196;
    }
    *(s32 *)p = 0;
}

} /* extern "C" */
