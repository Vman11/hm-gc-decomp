// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 r, g, b, a; } Color;

typedef struct {
    u8 pad[1172];
    s32 active;
    s32 id;
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;
    Color c;
} Obj;

void fn_800D9610(s32 id, f32 a, f32 b, f32 c, f32 d, Color col);

void fn_80157704(Obj *p, s32 id, f32 a, f32 b, f32 c, f32 d, const Color *col) {
    if (p->active == 0 || id != p->id || a != p->f0 || b != p->f1 || c != p->f2 || d != p->f3 ||
        p->c.r != col->r || p->c.g != col->g || p->c.b != col->b || p->c.a != col->a) {
        p->active = 1;
        p->id = id;
        p->f0 = a;
        p->f1 = b;
        p->f2 = c;
        p->f3 = d;
        p->c.r = col->r;
        p->c.g = col->g;
        p->c.b = col->b;
        p->c.a = col->a;
        fn_800D9610(p->id, p->f0, p->f1, p->f2, p->f3, p->c);
    }
}

} /* extern "C" */
