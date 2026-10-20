// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void fn_801EF720(void *, void *, s32);

void fn_801EDE64(u8 *p, void *q, s32 c) {
    switch (c) {
    case 135:
        fn_800FB064(q, p + 40);
        break;
    case 167:
        *(s32 *)(p + 12) = 26;
        break;
    case 168:
        *(s32 *)(p + 12) = 27;
        break;
    default:
        fn_801EF720(p, q, c);
        break;
    }
}

} /* extern "C" */
