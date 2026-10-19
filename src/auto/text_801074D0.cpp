// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80104870(void *, void *, void *, void *);
void fn_80101820(void *);

void fn_801074D0(u8 *p, void *a, void *b, void *c) {
    if (*(u32 *)p == 0) {
        (*(void (**)(void *, void *, void *, void *))(lbl_803286D0 + 0x134))(*(void **)(p + 0x10), a, b, c);
    } else {
        fn_80104870(p, a, b, c);
        if (*(u32 *)(p + 0x20) & 0x10) {
            (*(void (**)(void *, void *, void *, void *))(lbl_803286D0 + 0x134))(*(void **)(p + 0x14), a, b, c);
            fn_80101820(a);
            fn_80101820(b);
            fn_80101820(c);
        } else {
            (*(void (**)(void *, void *, void *, void *))(lbl_803286D0 + 0x134))(*(void **)(p + 0x14), a, b, c);
        }
    }
}

} /* extern "C" */
