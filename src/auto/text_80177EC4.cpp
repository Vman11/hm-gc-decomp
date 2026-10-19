// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void *fn_80177EC4(u8 *p, s32 i) {
    s32 *q = (s32 *)(p + i * 4);
    if (q[0x32B0 / 4] == 0) {
        if (*(s32 *)(p + 0x2A94) == 0) {
            (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x2A90), *(void **)(p + 0x2A84));
            *(s32 *)(p + 0x2A94) = 1;
        }
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(u8 **)(p + 0x32A8) + i * 64, (*(void ***)(p + 0x2AA0))[i], *(void **)(p + 0x2A90));
        q[0x32B0 / 4] = 1;
    }
    return *(u8 **)(p + 0x32A8) + i * 64;
}

} /* extern "C" */
