// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035BE98;
extern f64 lbl_8035BF70;
extern f64 lbl_8035BF78;
struct V3 { f32 x, y, z; };
f32 fn_8003714C(V3 * __restrict v) {
    f32 d = v->x * v->x + v->y * v->y + v->z * v->z;
    if (d > lbl_8035BE98) {
        volatile f32 y;
        f64 g = __frsqrte((f64)d);
        g = lbl_8035BF70 * g * (lbl_8035BF78 - g * g * d);
        g = lbl_8035BF70 * g * (lbl_8035BF78 - g * g * d);
        g = lbl_8035BF70 * g * (lbl_8035BF78 - g * g * d);
        y = (f32)(d * g);
        d = y;
    }
    return d;
}

} /* extern "C" */
