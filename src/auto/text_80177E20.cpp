// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];

void *fn_80177E20(u8 *p, s32 i) {
    s32 *q = (s32 *)(p + i * 4);
    if (q[0x36BC / 4] == 0) {
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(u8 **)(p + 0x36B4) + i * 64, (*(void ***)(p + 0x2AA0))[i], *(void **)(p + 0x2A7C));
        q[0x36BC / 4] = 1;
    }
    return *(u8 **)(p + 0x36B4) + i * 64;
}

} /* extern "C" */
