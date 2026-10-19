// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80104870(void *, s32, s32);

void fn_80104004(u8 *p, s32 a, s32 b) {
    fn_80104870(p, a, b);
    (*(void (**)(void *, s32, s32))(lbl_803286D0 + 0x188))(*(void **)(p + 0x14), a, b);
}

} /* extern "C" */
