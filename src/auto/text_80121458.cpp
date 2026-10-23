// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
static inline void lerp(f32 t, u8 *out, const u8 *a, const u8 *b)
{
    out[0] = (s32)(t * (f32)(b[0] - a[0]) + (f32)a[0]);
    out[1] = (s32)(t * (f32)(b[1] - a[1]) + (f32)a[1]);
    out[2] = (s32)(t * (f32)(b[2] - a[2]) + (f32)a[2]);
    out[3] = (s32)(t * (f32)(b[3] - a[3]) + (f32)a[3]);
}
void fn_80121458(f32 t, u8 *out, const f32 *a, const f32 *b)
{
    u8 ca[4];
    u8 cb[4];
    ca[0] = (s32)(a[0] * 255.0f);
    ca[1] = (s32)(a[1] * 255.0f);
    ca[2] = (s32)(a[2] * 255.0f);
    ca[3] = (s32)(a[3] * 255.0f);
    cb[0] = (s32)(b[0] * 255.0f);
    cb[1] = (s32)(b[1] * 255.0f);
    cb[2] = (s32)(b[2] * 255.0f);
    cb[3] = (s32)(b[3] * 255.0f);
    lerp(t, out, ca, cb);
}

} /* extern "C" */
