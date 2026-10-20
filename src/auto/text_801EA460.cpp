// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void *fn_800FB33C(void *);
void fn_801DF888(void *, void *, s32);

void fn_801EA460(u8 *p, void *q, s32 c) {
    switch (c) {
    case 66:
        fn_800FB064(q, p + 84);
        *(void **)(p + 92) = fn_800FB33C(q);
        break;
    default:
        fn_801DF888(p, q, c);
        break;
    }
}

} /* extern "C" */
