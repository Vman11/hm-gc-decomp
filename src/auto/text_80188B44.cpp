// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Obj_80188B44 {
    u32 flags;
    u8 pad4[20];
    f32 pos[3];
    f32 radius;
    u8 pad28[52];
    u32 mask0;
    u32 mask1;
    u8 pad64[4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Node_80188B44 {
    f32 min;
    f32 max;
    u8 pad8[4];
    Obj_80188B44 *obj;
    u8 pad10[8];
    Node_80188B44 *next;
};

f32 fn_8010155C(f32 *, f32 *);
void fn_8017EE1C(void *, Obj_80188B44 *, Obj_80188B44 *);

inline int inl_80188B44(Obj_80188B44 *a, Obj_80188B44 *b)
{
    f32 r;
    if ((b->mask0 & a->mask1) | (b->mask1 & a->mask0)) {
        if (b->flags & 4) {
            b->v2();
        }
        if (a->flags & 4) {
            a->v2();
        }
        r = b->radius + a->radius;
        r = r * r;
        return fn_8010155C(a->pos, b->pos) <= r;
    }
    return 0;
}

void fn_80188B44(u8 *p, void *arg)
{
    Node_80188B44 *n;
    Node_80188B44 *m;
    Obj_80188B44 *a;
    Obj_80188B44 *b;

    for (n = *(Node_80188B44 **)(p + 24); n != 0; n = n->next) {
        a = n->obj;
        if (a->flags & 2) {
            for (m = n->next; m != 0 && m->min <= n->max; m = m->next) {
                b = m->obj;
                if (b->flags & 2) {
                    if (inl_80188B44(a, b)) {
                        fn_8017EE1C(arg, a, b);
                    }
                }
            }
        }
    }
}

} /* extern "C" */
