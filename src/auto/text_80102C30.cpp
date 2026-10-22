// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z;
} Vec80102C30;

typedef struct {
    f32 w;
    Vec80102C30 v;
} E80102C30;

typedef struct {
    u8 pad[8];
    E80102C30 *ents;
    u8 pad2[4];
    u32 count;
} P80102C30;

typedef struct {
    u8 pad[8];
    f32 *weights;
} Q80102C30;

extern f32 lbl_80363864;
void fn_80101624(Vec80102C30 *dst, Vec80102C30 *a, Vec80102C30 *b, f32 t);

void fn_80102C30(P80102C30 *p, u32 idx, Vec80102C30 *v, Q80102C30 *q, f32 w) {
    E80102C30 *e;
    f32 x;
    f32 y;
    if (idx < p->count) {
        if (q != 0) {
            w *= q->weights[idx];
        }
        if (lbl_80363864 != w) {
            e = &p->ents[idx];
            if (lbl_80363864 != e->w) {
                e->w += w;
                fn_80101624(&e->v, &e->v, v, w / e->w);
            } else {
                e->w = w;
                x = v->x;
                y = v->y;
                e->v.x = x;
                x = v->z;
                e->v.y = y;
                e->v.z = x;
            }
        }
    }
}

} /* extern "C" */
