// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_80121158(f32 t, u8 *out, const u8 *a, const u8 *b)
{
    out[0] = (s32)(t * (f32)(b[0] - a[0]) + (f32)a[0]);
    out[1] = (s32)(t * (f32)(b[1] - a[1]) + (f32)a[1]);
    out[2] = (s32)(t * (f32)(b[2] - a[2]) + (f32)a[2]);
    out[3] = (s32)(t * (f32)(b[3] - a[3]) + (f32)a[3]);
}

} /* extern "C" */
