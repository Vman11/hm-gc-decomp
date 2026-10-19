// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F1C8;
s32 fn_800724A4(void *);
void fn_800711D0(void *, s32, f32);
void fn_8007115C(void *);
void fn_80241588(void *, s32, void *, f32);

void fn_8006EAD0(u8 *p, s32 a, void *b, f32 f) {
    if (*(s32 *)(p + 0xDC) != 14 && a == 14 && fn_800724A4(*(void **)(p + 0x118)) == 0) {
        fn_800711D0(p, 0, lbl_8035F1C8);
    } else if (*(s32 *)(p + 0xDC) == 14 && a != 14 && fn_800724A4(*(void **)(p + 0x118)) == 0) {
        fn_8007115C(p);
    }
    fn_80241588(p, a, b, f);
}

} /* extern "C" */
