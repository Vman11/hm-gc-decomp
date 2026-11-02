// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364544;
extern volatile f32 lbl_8036453C;
f64 fn_800F030C(f64 x);
f64 fn_800EFDA4(f64 x);
typedef f32 M34[3][4];
void fn_801513E0(void *p, M34 m);
void fn_801510CC(void *p, f32 a) {
    f32 z;
    volatile M34 m;
    f32 s = fn_800F030C(a);
    f32 c = fn_800EFDA4(a);
    m[0][0] = c;
    m[0][1] = z = lbl_80364544; m[0][2] = -s;
    m[1][0] = z; m[1][1] = lbl_8036453C; m[1][2] = z;
    m[2][0] = s; m[2][1] = z; m[2][2] = c;
    fn_801513E0(p, (f32 (*)[4])m);
}

} /* extern "C" */
