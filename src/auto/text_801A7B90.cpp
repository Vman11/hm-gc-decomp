// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DB220(void *, void *);

void fn_801A7B90(u8 *p, void *a) {
    u8 *q = *(u8 **)(p + 0x168);
    if (q != NULL) {
        switch (*(s32 *)(p + 0x144)) {
        case 2:
        case 16:
        case 64:
        case 256:
            *(s32 *)(q + 0xC) = 1;
            break;
        }
        fn_801DB220(p, a);
    }
}

} /* extern "C" */
