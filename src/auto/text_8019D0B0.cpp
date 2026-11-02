// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_803301F8[], lbl_80330204[], lbl_80330210[];
extern f64 lbl_80364CD8;
extern f32 lbl_8035AD9C;
void fn_801009DC(void *, char *, char *, f32 *, char *, void *, void *, int);
void fn_8019D0B0(u8 *o) {
    u32 b; u32 a; f32 f;
    f = lbl_80364CD8 * lbl_8035AD9C;
    fn_801009DC(o + 28, lbl_803301F8, lbl_80330204, &f, lbl_80330210, &b, &a, 0);
}

} /* extern "C" */
