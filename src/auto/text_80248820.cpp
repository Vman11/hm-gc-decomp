// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803662BC;
extern f32 lbl_803662C0;
s32 fn_8026B090(void *, void *, void *, s32, s32);
s32 __cvt_fp2unsigned(f32);
void fn_8026AE28(void *, void *, void *, s32, f32);

void fn_80248820(u8 *p, s32 i, f32 f) {
    f32 g;
    *(s32 *)(p + 0x30) = 0;
    g = lbl_803662BC * f;
    if (fn_8026B090(*(void **)(p + 0x14), p, *(u8 **)(p + 0x28) + i * 4, (s32)g, 0) != 0) {
        fn_8026AE28(*(void **)(p + 0x14), p, *(u8 **)(p + 0x28) + i * 4, __cvt_fp2unsigned(g), lbl_803662C0);
    }
}

} /* extern "C" */
