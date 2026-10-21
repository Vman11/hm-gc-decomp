// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec801A08C0;

typedef struct {
    u8 pad[40];
    f32 sx;
    f32 sy;
    f32 sz;
} Xf801A08C0;

typedef struct {
    u32 flags;
    u8 pad4[4];
    Vec801A08C0 pos;
    f32 scale;
    Vec801A08C0 wpos;
    f32 wscale;
    u8 pad40[8];
    void *parent2;
    u8 pad52[120 - 52];
    Xf801A08C0 *parent;
} N801A08C0;

void fn_80104004(void *, Vec801A08C0 *, Vec801A08C0 *);

void fn_801A08C0(N801A08C0 *p) {
    Xf801A08C0 *q;
    f32 y;
    if (p->parent != 0) {
        fn_80104004(p->parent, &p->pos, &p->wpos);
        q = p->parent;
        y = q->sy;
        if (q->sx > y) {
            if (q->sx > q->sz) {
                p->wscale = p->scale * q->sx;
            } else {
                p->wscale = p->scale * q->sz;
            }
        } else {
            if (y > q->sz) {
                p->wscale = p->scale * y;
            } else {
                p->wscale = p->scale * q->sz;
            }
        }
    } else if (p->parent2 != 0) {
        fn_80104004(p->parent2, &p->pos, &p->wpos);
        p->wscale = p->scale;
    } else {
        p->wpos.x = p->pos.x;
        p->wpos.y = p->pos.y;
        p->wpos.z = p->pos.z;
        p->wscale = p->scale;
    }
    p->flags &= ~4;
}

} /* extern "C" */
