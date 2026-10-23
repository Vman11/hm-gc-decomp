// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_803637F0;
extern f32 lbl_803637F4;
extern f64 lbl_803637F8;
extern f64 lbl_80363800;

typedef struct S80100880 {
    f32 x, y, z, r;
} S80100880;

f32 fn_8010155C(S80100880 *, const S80100880 *);

void fn_80100880(S80100880 *a, const S80100880 *b) {
    f32 d;
    f32 r;
    f32 t;
    volatile f32 y;
    f64 guess;
    d = fn_8010155C(a, b);
    if (a->r > b->r) {
        t = a->r - b->r;
        if (d >= t * t) {
            return;
        }
        r = a->r;
    } else {
        t = b->r - a->r;
        if (d >= t * t) {
            a->x = b->x;
            a->y = b->y;
            a->z = b->z;
            a->r = b->r;
            return;
        }
        r = b->r;
    }
    a->x += b->x;
    a->y += b->y;
    a->z += b->z;
    a->x *= lbl_803637F0;
    a->y *= lbl_803637F0;
    a->z *= lbl_803637F0;
    if (d > lbl_803637F4) {
        guess = __frsqrte((f64)d);
        guess = lbl_803637F8 * guess * (lbl_80363800 - guess * guess * d);
        guess = lbl_803637F8 * guess * (lbl_80363800 - guess * guess * d);
        guess = lbl_803637F8 * guess * (lbl_80363800 - guess * guess * d);
        y = (f32)(d * guess);
        d = y;
    }
    a->r = r + d;
}

} /* extern "C" */
