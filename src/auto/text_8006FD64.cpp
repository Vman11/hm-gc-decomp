// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F308;
extern f32 lbl_8035F0C0;
extern f64 lbl_8035F250;
extern f64 lbl_8035F258;
extern f32 lbl_8035F30C;
extern f32 lbl_8035F210;
extern s32 fn_800724A4(u8 *q);
extern void fn_8007115C(u8 *p);
extern void fn_80241588(u8 *p, s32 a, s32 b, f32 t);
extern void fn_802494A4(u8 *p, s32 a);

void fn_8006FD64(u8 *p) {
    u8 *q;
    f32 d;
    volatile f32 y;
    f64 guess;
    if (*(s32 *)(p + 332) == 0) {
        q = *(u8 **)(p + 280);
        if (*(f32 *)(q + 288) < lbl_8035F308) {
            d = *(f32 *)(q + 1280) * *(f32 *)(q + 1280) + *(f32 *)(q + 1284) * *(f32 *)(q + 1284);
            if (d > lbl_8035F0C0) {
                guess = __frsqrte((f64)d);
                guess = lbl_8035F250 * guess * (lbl_8035F258 - guess * guess * d);
                guess = lbl_8035F250 * guess * (lbl_8035F258 - guess * guess * d);
                guess = lbl_8035F250 * guess * (lbl_8035F258 - guess * guess * d);
                y = (f32)(d * guess);
                d = y;
            }
            if (d > lbl_8035F30C) {
                if (*(s32 *)(p + 220) == 14 && fn_800724A4(*(u8 **)(p + 280)) == 0) {
                    fn_8007115C(p);
                }
                fn_80241588(p, 46, 0, lbl_8035F210);
            } else {
                if (*(s32 *)(p + 220) == 14 && fn_800724A4(*(u8 **)(p + 280)) == 0) {
                    fn_8007115C(p);
                }
                fn_80241588(p, 47, 0, lbl_8035F210);
            }
        } else {
            fn_802494A4(p, 0);
        }
    }
}

} /* extern "C" */
