// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];

void *fn_80177F8C(u8 *p) {
    if (*(s32 *)(p + 0x2A9C) == 0) {
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(void **)(p + 0x2A98), *(void **)(p + 0x2A84), *(void **)(p + 0x2A7C));
        *(s32 *)(p + 0x2A9C) = 1;
    }
    return *(void **)(p + 0x2A98);
}

} /* extern "C" */
