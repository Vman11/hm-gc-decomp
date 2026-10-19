// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F1C8;
extern f32 lbl_8035F1BC;
s32 fn_800724A4(void *);
void fn_8007115C(void *);
void fn_80241588(void *, s32, void *, f32);
void fn_802490E0(void *, s32, f32);

void fn_8006DB6C(u8 *p) {
    if (*(s32 *)(p + 0x15C) != 0) {
        f32 v = lbl_8035F1C8;
        if (*(f32 **)(p + 0x160) != NULL) {
            v = **(f32 **)(p + 0x160);
        }
        if (*(s32 *)(p + 0xDC) == 14 && fn_800724A4(*(void **)(p + 0x118)) == 0) {
            fn_8007115C(p);
        }
        fn_80241588(p, 40, 0, lbl_8035F1BC);
        *(s32 *)(p + 0x15C) = 0;
        fn_802490E0(p, 10, v);
    }
}

} /* extern "C" */
