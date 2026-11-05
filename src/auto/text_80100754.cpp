// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803637E0;
void fn_80100754(s16 *o, f32 *v) {
    f32 x = v[0];
    f32 y = v[1];
    f32 z = v[2];
    f32 w = v[3];
    x = lbl_803637E0 * x;
    o[0] = (s16)x;
    y = lbl_803637E0 * y;
    o[1] = (s16)y;
    z = lbl_803637E0 * z;
    o[2] = (s16)z;
    w = lbl_803637E0 * w;
    o[3] = (s16)w;
}

}
