// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_803637E4;
void fn_801007D0(const s16 *in, f32 *out) {
    out[0] = lbl_803637E4 * (f32)in[0];
    out[1] = lbl_803637E4 * (f32)in[1];
    out[2] = lbl_803637E4 * (f32)in[2];
    out[3] = lbl_803637E4 * (f32)in[3];
}

} /* extern "C" */
