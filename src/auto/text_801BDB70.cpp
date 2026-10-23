// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Rect { f32 x0, y0, x1, y1; } Rect;
extern f32 lbl_803596E0[];
extern void fn_8010069C(Rect *a, Rect *b);
struct VCall_fn_801BDB70_0 { char vptr_pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(void *, void *, void *, u32, u32, u32, Rect *, u32, u32, u32, f32); };
typedef struct Elem { u8 pad[72]; Rect rect; } Elem;
typedef struct Self {
    u32 x0;
    s32 types[4];
    Elem *elems[4];
    f32 margins[4];
    u8 pad52[72 - 52];
    u8 x72[104 - 72];
    u32 x104;
    u32 flags;
    VCall_fn_801BDB70_0 *obj;
} Self;

void fn_801BDB70(Self *self, void *a, void *b, void *c, Rect *clip, f32 t) {
    Rect box;
    Rect r;
    Rect *cur;
    u32 i;
    box.x1 = lbl_803596E0[0];
    box.x0 = -lbl_803596E0[0];
    box.y0 = -lbl_803596E0[0];
    box.y1 = lbl_803596E0[0];
    cur = clip;
    if (clip) fn_8010069C(&box, clip);
    for (i = 0; i < 4; i++) {
        if (self->types[i] == 0x8000) {
            r = self->elems[i]->rect;
            r.y0 += self->margins[i];
            r.x0 += self->margins[i];
            r.y1 -= self->margins[i];
            r.x1 -= self->margins[i];
            fn_8010069C(&box, &r);
            cur = &box;
        }
    }
    if (self->flags & 1) {
        self->obj->m(a, self->x72, c, 0xFFFF, 0xFFFF, self->x104, cur, 0, 0, 0, t);
    }
}

} /* extern "C" */
