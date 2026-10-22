// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F1BC;
s32 fn_800724A4(void *);
void fn_8007115C(void *);
void fn_80241588(void *, s32, s32, f32);

static inline void setstate_8006DC14(u8 *p, s32 st) {
    if (*(s32 *)(p + 0xDC) == 14 && fn_800724A4(*(void **)(p + 0x118)) == 0) {
        fn_8007115C(p);
    }
    fn_80241588(p, st, 0, lbl_8035F1BC);
}

void fn_8006DC14(u8 *p) {
    u8 *q;
    s32 v;
    u8 *x;
    x = *(u8 **)(p + 0x118);
    q = *(u8 **)(x + 0x5E4);
    *(s32 *)(x + 0x5E8) = 0;
    if (q != 0) {
        s32 *r = *(s32 **)(q + 0x94);
        v = r ? *r : 0;
        switch (v) {
        case 0:
            setstate_8006DC14(p, 1);
            break;
        case 1:
            setstate_8006DC14(p, 22);
            break;
        case 2:
            setstate_8006DC14(p, 21);
            break;
        }
    } else {
        setstate_8006DC14(p, 1);
    }
}

} /* extern "C" */
