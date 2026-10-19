// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B374;
extern f32 lbl_80365F08;
extern f32 lbl_8035B3A0;
extern u32 lbl_80365F0C;
double fn_800EFDA4(double);
void fn_80236F28(void *, f32, f32, void *, s32, s32, s32, s32);

void fn_80236EA0(void *p, f32 f) {
    f32 v;
    f32 *q = *(f32 **)(lbl_8035B374 + 0x10);
    if (q != NULL) {
        v = fn_800EFDA4(lbl_80365F08 * *q);
    } else {
        v = lbl_8035B3A0;
    }
    fn_80236F28(p, f, v, &lbl_80365F0C, 1, 1, 0, 0);
}

} /* extern "C" */
