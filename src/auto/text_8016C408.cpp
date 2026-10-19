// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void __ct__9C80152B64Fv(void *);

void fn_8016C408(u8 *p, s32 i, void *b) {
    u8 t[0x48];
    __ct__9C80152B64Fv(t);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(t, (*(void ***)(p + 0x2AA0))[i]);
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(b, *(void **)(p + 0x2A84), t);
}

} /* extern "C" */
