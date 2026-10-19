// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DB4B0(void *, void *);

void fn_801A7B28(u8 *p, void *a) {
    u8 *q = *(u8 **)(p + 0x168);
    if (q != NULL) {
        switch (*(s32 *)(p + 0x144)) {
        case 8:
        case 32:
        case 128:
        case 512:
            *(s32 *)(q + 0xC) = 0;
            break;
        }
        fn_801DB4B0(p, a);
    }
}

} /* extern "C" */
