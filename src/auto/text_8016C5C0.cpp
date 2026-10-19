// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];

void fn_8016C5C0(u8 *p, void *a) {
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x160))(*(void **)(p + 0x2A84), a);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x160))(*(void **)(p + 0x2A88), a);
    *(s32 *)(p + 0x2A94) = 0;
    *(s32 *)(p + 0x279D8) += 1;
}

} /* extern "C" */
