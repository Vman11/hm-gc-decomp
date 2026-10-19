// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B488;
extern f32 lbl_803610A0;
void fn_8009633C(void *, s32, s32, f32);
void fn_8023FE08(void *, f32);

void fn_80096274(u8 *p, f32 f) {
    *(f32 *)(p + 0x174) += *(f32 *)(lbl_8035B488 + 0x14);
    if (*(s32 *)(p + 0x60) == 2) {
        f32 x = **(f32 **)(p + 0x14C);
        fn_8009633C(p, lbl_803610A0 == x, 1, *(f32 *)(p + 0x174) / x);
    } else if (*(s32 *)(p + 0x60) == 4) {
        f32 x = **(f32 **)(p + 0x150);
        fn_8009633C(p, lbl_803610A0 == x, 0, (x - *(f32 *)(p + 0x174)) / x);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
