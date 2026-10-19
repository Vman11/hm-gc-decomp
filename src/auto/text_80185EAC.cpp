/* Functions from 0x80185EAC to 0x80185FF0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035AE18;
extern s32 lbl_8035AE18;

typedef struct {
    f32 *data;
    s32 width;
    s32 height;
    s32 border;
} FloatGrid;

void fn_80185EAC(s32 arg0) {
    lbl_8035AE18 = arg0;
}

extern f32 lbl_80364988;
void fn_80185EB4(FloatGrid *dst, FloatGrid *a, FloatGrid *b, f32 t) {
    f32 *pa;
    f32 *pb;
    f32 *p;
    f32 *end;
    s32 border2 = dst->border + dst->border;
    f32 s;

    p = dst->data;
    end = p + (dst->width + border2) * (dst->height + border2);
    s = lbl_80364988 - t;
    pa = a->data;
    pb = b->data;

    for (; p < end; p++) {
        *p = s * *pa++ + t * *pb++;
    }
}

} /* extern "C" */
