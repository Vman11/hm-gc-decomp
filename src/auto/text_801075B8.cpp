// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80104870(void *, void *);
void fn_80101820(void *);
void fn_800FFA4C(void *, f32 *, f32 *, f32 *);

void fn_801075B8(u8 *p, void *a) {
    if (*(u32 *)p == 0) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x12C))(*(void **)(p + 0x10), a);
    } else {
        fn_80104870(p, a);
        if (*(u32 *)(p + 0x20) & 0x10) {
            f32 x[3];
            f32 y[3];
            f32 z[3];
            (*(void (**)(void *, f32 *, f32 *, f32 *))(lbl_803286D0 + 0x134))(*(void **)(p + 0x14), x, y, z);
            fn_80101820(x);
            fn_80101820(y);
            fn_80101820(z);
            fn_800FFA4C(a, x, y, z);
        } else {
            (*(void (**)(void *, void *))(lbl_803286D0 + 0x12C))(*(void **)(p + 0x14), a);
        }
    }
}

} /* extern "C" */
