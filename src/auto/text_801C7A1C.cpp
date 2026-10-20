// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801D791C(void *);

s32 fn_801C7A1C(u8 *p) {
    fn_801D791C(p);
    switch (*(s32 *)(p + 324)) {
    case 2:
        *(s32 *)(p + 324) = 16;
        break;
    case 256:
        *(s32 *)(p + 324) = 16;
        break;
    }
    return 0;
}

} /* extern "C" */
