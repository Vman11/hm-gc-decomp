// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct P5DD4;
struct Handler5DD4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 Handle(P5DD4 *p, s32 a, f32 x, f32 y);
};
struct Node5DD4 {
    Handler5DD4 *obj;
    s32 enabled;
    Node5DD4 *next;
};
struct Rect5DD4 { f32 x0, y0, x1, y1; };
struct Q5DD4 {
    u8 pad[412];
    Rect5DD4 rect;
};
struct P5DD4 {
    u8 pad0[136];
    Node5DD4 *list;
    u8 pad1[324 - 140];
    s32 state;
    u8 pad2[364 - 328];
    Q5DD4 *q;
};
static inline bool InRect(const Rect5DD4 *r, f32 x, f32 y) {
    return x >= r->x0 && x <= r->x1 && y >= r->y0 && y <= r->y1;
}
extern "C" {

s32 fn_801C5DD4(P5DD4 *p, s32 a, f32 x, f32 y) {
    Node5DD4 *n;
    s32 handled = 0;
    for (n = p->list; n != 0; n = n->next) {
        if (n->enabled != 0) {
            if (n->obj->Handle(p, a, x, y) == 0) {
                handled = 1;
            }
        }
    }
    if (handled != 0) {
        return 1;
    }
    switch (p->state) {
    case 2:
    case 16:
    case 256:
        if (InRect(&p->q->rect, x, y)) {
            p->state = 64;
        }
        break;
    }
    return 1;
}

} /* extern "C" */
