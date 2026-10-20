// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A6EC8(void *, s32);

void fn_801BB4E8(u8 *p, s32 a) {
    switch (a) {
    case 93:
        *(s32 *)(p + 364) = 1;
        *(s32 *)(p + 368) = 1;
        break;
    case 94:
        *(s32 *)(p + 364) = 1;
        *(s32 *)(p + 368) = 0;
        break;
    default:
        fn_801A6EC8(p, a);
        break;
    }
}

} /* extern "C" */
