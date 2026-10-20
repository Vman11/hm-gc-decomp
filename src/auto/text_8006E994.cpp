// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F1C8;
extern f32 lbl_8035F0E0;
s32 fn_800724A4(void *);
void fn_800711D0(void *, s32, f32);
void fn_8007115C(void *);
void fn_80241588(void *, s32, s32, f32);

void fn_8006E994(u8 *p, s32 a, s32 b) {
    if (*(s32 *)(*(u8 **)(p + 280) + 1228) == 0) {
        if (*(s32 *)(p + 220) != 14 && a == 14 && fn_800724A4(*(void **)(p + 280)) == 0) {
            fn_800711D0(p, 0, lbl_8035F1C8);
        } else if (*(s32 *)(p + 220) == 14 && a != 14 && fn_800724A4(*(void **)(p + 280)) == 0) {
            fn_8007115C(p);
        }
        fn_80241588(p, a, 0, lbl_8035F0E0);
    } else {
        if (*(s32 *)(p + 220) != 14 && b == 14 && fn_800724A4(*(void **)(p + 280)) == 0) {
            fn_800711D0(p, 0, lbl_8035F1C8);
        } else if (*(s32 *)(p + 220) == 14 && b != 14 && fn_800724A4(*(void **)(p + 280)) == 0) {
            fn_8007115C(p);
        }
        fn_80241588(p, b, 0, lbl_8035F0E0);
    }
}

} /* extern "C" */
