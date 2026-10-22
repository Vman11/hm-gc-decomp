// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } Vec;
typedef struct { f32 w; Vec v; } Entry;
typedef struct { u8 pad0[4]; Entry *entries; u8 pad8[4]; u32 count; } Obj;
typedef struct { f32 *arr; } Weights;
extern f32 lbl_80363864;
void fn_80101624(Vec *, Vec *, Vec *, f32);
static inline void VecCopy(Vec *d, Vec *s) {
    f32 y;
    f32 x;
    x = s->x;
    y = s->y;
    d->x = x;
    x = s->z;
    d->y = y;
    d->z = x;
}
static inline void Add(Entry *e, Vec *v, f32 w) {
    if (lbl_80363864 != e->w) {
        e->w += w;
        fn_80101624(&e->v, &e->v, v, w / e->w);
    } else {
        e->w = w;
        VecCopy(&e->v, v);
    }
}
void fn_80102CD0(Obj *o, u32 idx, Vec *v, Weights *wt, f32 w) {
    if (idx < o->count) {
        if (wt) w *= wt->arr[idx];
        if (lbl_80363864 != w) {
            Add(&o->entries[idx], v, w);
        }
    }
}

} /* extern "C" */
