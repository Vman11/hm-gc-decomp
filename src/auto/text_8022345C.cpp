// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365A70;
extern u8 *lbl_8035B5E4;
void fn_80253250(void *);

void fn_8022345C(u8 *p, f32 f) {
    *(f32 *)(p + 740) = lbl_80365A70;
    *(s32 *)(p + 744) = 1;
    *(f32 *)(p + 692) = f;
    if (lbl_80365A70 == f) {
        fn_80253250(*(u8 **)(lbl_8035B5E4 + 112) + *(s32 *)(lbl_8035B5E4 + 104) * 52);
    }
}

} /* extern "C" */
