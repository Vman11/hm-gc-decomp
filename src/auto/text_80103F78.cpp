// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80101820(void *);
void fn_80104870(void *, void *, void *);

void fn_80103F78(u8 *p, void *a, void *b, s32 c) {
    fn_80104870(p, a, b);
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x194))(*(void **)(p + 0x14), a, b);
    if (c != 0 && (*(u32 *)(p + 0x20) & 0x10)) {
        fn_80101820(b);
    }
}

} /* extern "C" */
