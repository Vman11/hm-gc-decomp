#include "common.h"
namespace m8023C1BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_8036604C;
extern f32 lbl_80366050;
extern f32 lbl_80366054;
extern f32 lbl_80366044;
extern f32 lbl_80366058;
extern f32 lbl_8036605C;
u32 rand(void);
f64 fn_800EFDA4(f64);

typedef struct { f32 x0; f32 x4; f32 x8; f32 xC; } S;

static inline u32 RandN(u32 n) {
    u32 r = 0;
    if (n != 0) {
        r = rand() % n;
    }
    return r;
}

static inline f32 RandF(f32 range) {
    s32 n = (s32)(lbl_8036604C * range);
    if (n < 0) {
        n = -n;
        return lbl_80366050 * (f32)(-(s32)RandN(n));
    }
    return lbl_80366050 * (f32)(s32)RandN(n);
}

f32 fn_8023C1BC(S *p, f32 dt) {
    f32 s = p->x8 * dt;
    f32 v;
    p->xC += RandF(s) - lbl_80366054 * s;
    if (p->xC > lbl_80366044) {
        p->xC -= lbl_80366058;
    } else if (p->xC < lbl_8036605C) {
        p->xC += lbl_80366058;
    }
    v = (f32)fn_800EFDA4(p->xC);
    v = lbl_80366054 * v + lbl_80366054;
    return v * p->x4 + p->x0;
}

void fn_8023C314(f32 *p, f32 a, f32 b, f32 c) {
    p[0] = a;
    p[1] = b - a;
    p[2] = c;
    p[3] = lbl_80366050 * (f32)(s32)RandN(62831);
}

} /* extern "C" */

} /* namespace m8023C1BC */

namespace m8023C398 {
extern "C" {
/* Functions from 0x8023C398 to 0x8023C3BC, found by decomp-toolkit. */
extern f32 lbl_80366020;
extern f32 lbl_8036602C;

void fn_8023C398(f32 *arg0) {
    arg0[0] = lbl_8036602C;
    arg0[1] = lbl_80366020;
    arg0[2] = lbl_80366020;
    arg0[3] = lbl_8036602C;
}

} /* extern "C" */
} /* namespace m8023C398 */

namespace m8023C3BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B404;
extern f32 lbl_8035B400;
__declspec(section ".sdata2") f64 lbl_80366068 = 0.3490658402442932;
double fn_800EFDA4(double);

void fn_8023C3BC(void) {
    lbl_8035B404 = lbl_803596E0[0];
    lbl_8035B400 = fn_800EFDA4(*(volatile f64 *)&lbl_80366068);
}

__declspec(section ".ctors") static void (*const ctor_8023C3BC)(void) = fn_8023C3BC;

} /* extern "C" */

} /* namespace m8023C3BC */
