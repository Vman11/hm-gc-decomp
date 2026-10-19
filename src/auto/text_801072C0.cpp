// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80104870(void *, void *);
void fn_80101820(void *);

void fn_801072C0(u8 *p, void *a) {
    if (*(u32 *)p == 0) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x14C))(*(void **)(p + 0x10), a);
    } else {
        fn_80104870(p, a);
        if (*(u32 *)(p + 0x20) & 0x10) {
            (*(void (**)(void *, void *))(lbl_803286D0 + 0x14C))(*(void **)(p + 0x14), a);
            fn_80101820(a);
        } else {
            (*(void (**)(void *, void *))(lbl_803286D0 + 0x14C))(*(void **)(p + 0x14), a);
        }
    }
}

} /* extern "C" */
