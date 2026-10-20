// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void fn_801BB4E8(void *, s32, void *, void *);

void fn_8009F200(u8 *p, s32 a, void *b, void *c) {
    switch (a) {
    case 232:
        fn_800FB064(c, p + 372);
        break;
    case 233:
        fn_800FB064(c, p + 380);
        break;
    case 234:
        fn_800FB064(c, p + 388);
        break;
    default:
        fn_801BB4E8(p, a, b, c);
        break;
    }
}

} /* extern "C" */
