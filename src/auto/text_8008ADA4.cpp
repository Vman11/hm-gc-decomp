// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B308;
extern f32 lbl_803600BC;
extern f32 lbl_803600C0;
extern f32 lbl_803600C4;
s32 fn_802416D4(void *, void *);
void fn_8023C314(void *, f32, f32, f32);

s32 fn_8008ADA4(u8 *p, void *a) {
    s32 r;
    *(s32 *)(p + 280) = *(s32 *)(lbl_8035B308 + 72);
    r = fn_802416D4(p, a);
    fn_8023C314(p + 304, lbl_803600BC, lbl_803600C0, lbl_803600C4);
    return r;
}

} /* extern "C" */
