#include "common.h"
namespace m80121158 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

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

} /* namespace m80121158 */

namespace m80121298 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
static inline void lerp(f32 t, u8 *out, const u8 *a, const u8 *b)
{
    out[0] = (s32)(t * (f32)(b[0] - a[0]) + (f32)a[0]);
    out[1] = (s32)(t * (f32)(b[1] - a[1]) + (f32)a[1]);
    out[2] = (s32)(t * (f32)(b[2] - a[2]) + (f32)a[2]);
    out[3] = (s32)(t * (f32)(b[3] - a[3]) + (f32)a[3]);
}
void fn_80121298(f32 t, u8 *out, const f32 *a, const f32 *b)
{
    u8 ca[4];
    u8 cb[4];
    ca[0] = (s32)a[0];
    ca[1] = (s32)a[1];
    ca[2] = (s32)a[2];
    ca[3] = (s32)a[3];
    cb[0] = (s32)b[0];
    cb[1] = (s32)b[1];
    cb[2] = (s32)b[2];
    cb[3] = (s32)b[3];
    lerp(t, out, ca, cb);
}

} /* extern "C" */

} /* namespace m80121298 */

namespace m80121458 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

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

} /* namespace m80121458 */

namespace m8012163C {
/* Functions from 0x8012163C to 0x80121670, found by decomp-toolkit. */

extern "C" {

void fn_8012163C(u8 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0xFF;
}

void fn_80121658(u8 *arg0) {
    arg0[0] = 0xFF;
    arg0[1] = 0xFF;
    arg0[2] = 0xFF;
    arg0[3] = 0xFF;
}

} /* extern "C" */

} /* namespace m8012163C */

namespace m80121670 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_800FB33C(int);

void fn_80121670(u8 *param_1, u32 param_2) {
    u8 uVar1;

    uVar1 = fn_800FB33C((int)(param_2));
    *param_1 = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[1] = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[2] = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[3] = uVar1;
}

} /* extern "C" */

} /* namespace m80121670 */

namespace m801216D4 {
/* Functions from 0x801216D4 to 0x801217EC, found by decomp-toolkit. */

extern "C" {

u8 fn_801216D4(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 ret = 0;
    if ((arg1[0] >> arg2) == (arg0[0] >> arg2) && (arg1[1] >> arg2) == (arg0[1] >> arg2) &&
        (arg1[2] >> arg2) == (arg0[2] >> arg2)) {
        ret = 1;
    }
    return ret;
}

u8 fn_8012172C(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 ret = 0;
    if ((arg1[0] >> arg2) == (arg0[0] >> arg2) && (arg1[1] >> arg2) == (arg0[1] >> arg2) &&
        (arg1[2] >> arg2) == (arg0[2] >> arg2) && (arg1[3] >> arg2) == (arg0[3] >> arg2)) {
        ret = 1;
    }
    return ret;
}

s32 fn_8012179C(u8 *arg0, u8 *arg1) {
    s32 d0 = arg1[0] - arg0[0];
    s32 d1 = arg1[1] - arg0[1];
    s32 d2 = arg1[2] - arg0[2];
    s32 d3 = arg1[3] - arg0[3];
    return d0 * d0 + d1 * d1 + d2 * d2 + d3 * d3;
}

} /* extern "C" */

} /* namespace m801216D4 */

namespace m801217EC {
extern "C" {
void fn_801217EC(u8 *c, const f32 *v) { c[0] = (s32)v[0]; c[1] = (s32)v[1]; c[2] = (s32)v[2]; c[3] = (s32)v[3]; }
}
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

} /* namespace m801217EC */

namespace m80121848 {
extern "C" {
void fn_80121848(u8 *c, const f32 *v) { c[0] = (s32)(255.0f * v[0]); c[1] = (s32)(255.0f * v[1]); c[2] = (s32)(255.0f * v[2]); c[3] = (s32)(255.0f * v[3]); }
}
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

} /* namespace m80121848 */
