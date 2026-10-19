// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035FD94;
void fn_80084A54(void *, s32, s32, f32);
void fn_8023FE08(void *, f32);

void fn_80084994(u8 *p, f32 f) {
    *(f32 *)(p + 0x13C) += f;
    if (*(s32 *)(p + 0x60) == 2) {
        f32 x = **(f32 **)(p + 0x12C);
        fn_80084A54(p, lbl_8035FD94 == x, 1, *(f32 *)(p + 0x13C) / x);
    } else if (*(s32 *)(p + 0x60) == 4) {
        f32 x = **(f32 **)(p + 0x130);
        fn_80084A54(p, lbl_8035FD94 == x, 0, (x - *(f32 *)(p + 0x13C)) / x);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
