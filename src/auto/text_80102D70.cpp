// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 w; f32 v[4]; } E80102D70;
extern f32 lbl_80363864;
void fn_80100060(f32 t, f32 *a, f32 *b);
void fn_80100104(f32 t, f32 *a, f32 *b);

void fn_80102D70(void *p, u32 idx, f32 w, f32 *q, f32 **wt) {
    E80102D70 *e;
    f32 a, b;
    if (idx < M2C_FIELD(p, u32 *, 12)) {
        if (wt != 0) w *= (*wt)[idx];
        if (lbl_80363864 != w) {
            e = &(*(E80102D70 **)p)[idx];
            if (lbl_80363864 != e->w) {
                e->w += w;
                w = w / e->w;
                if (M2C_FIELD(p, s32 *, 20) != 0) fn_80100060(w, e->v, e->v);
                else fn_80100104(w, e->v, e->v);
            } else {
                e->w = w;
                w = q[0];
                a = q[1];
                e->v[0] = w;
                b = q[2];
                e->v[1] = a;
                w = q[3];
                e->v[2] = b;
                e->v[3] = w;
            }
        }
    }
}

} /* extern "C" */
