// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803645B0;
extern f32 lbl_803645B4;
extern u32 lbl_80359728;
void fn_800D7984(void *, f32, f32, f32);
void fn_800D79F4(void *, u32 *);
void fn_800D7A0C(void *, s32);

void fn_801576A0(u8 *p) {
    u32 c;
    *(s32 *)(p + 1148) = 1;
    fn_800D7984(p + 2076, lbl_803645B0, lbl_803645B0, lbl_803645B4);
    c = lbl_80359728;
    fn_800D79F4(p + 2076, &c);
    fn_800D7A0C(p + 2076, 1);
}

} /* extern "C" */
