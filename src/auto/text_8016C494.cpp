// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_8016C494(u8 *p, s32 i, void *b) {
    if (*(s32 *)(p + 0x2A94) == 0) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x2A90), *(void **)(p + 0x2A84));
        *(s32 *)(p + 0x2A94) = 1;
    }
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(b, (*(void ***)(p + 0x2AA0))[i], *(void **)(p + 0x2A90));
}

} /* extern "C" */
