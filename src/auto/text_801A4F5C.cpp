// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct R801A4F5C {
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
} R801A4F5C;
/* 0.5f is a literal: the original TU owns .sdata2 0x80364DD8 (0.5f) and 0x80364DE0 (int-to-float magic);
   an extern lbl_80364DD8 colours the registers differently */
static inline f64 fabs(f64 x) { return __fabs(x); }

void fn_801A4F5C(void *self, const R801A4F5C *a, const R801A4F5C *b, R801A4F5C *out, s32 hmode, s32 vmode) {
    f32 w;
    f32 h;
    w = fabs(b->x1 - b->x0);
    switch (hmode) {
    case 0:
        out->x1 = a->x1;
        out->x0 = out->x1 - w;
        break;
    case 2:
        out->x0 = (s32)(b->x0 + ((a->x0 + 0.5f * (a->x1 - a->x0)) - (b->x0 + 0.5f * w)));
        out->x1 = (s32)(out->x0 + w);
        break;
    case 1:
        out->x0 = a->x0;
        out->x1 = out->x0 + w;
        break;
    }
    h = fabs(b->y1 - b->y0);
    switch (vmode) {
    case 1:
        out->y1 = a->y1;
        out->y0 = out->y1 - h;
        break;
    case 2:
        out->y0 = (s32)(b->y0 + ((a->y0 + 0.5f * (a->y1 - a->y0)) - (b->y0 + 0.5f * h)));
        out->y1 = (s32)(out->y0 + h);
        break;
    case 0:
    default:
        out->y0 = a->y0;
        out->y1 = out->y0 + h;
        break;
    }
}

} /* extern "C" */
