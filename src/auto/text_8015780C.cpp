// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 r, g, b, a; } C8015780C;
typedef struct {
    u8 pad0[0x38];
    C8015780C col[4];
} S8015780C;

void fn_800D9188(u32, C8015780C);

void fn_8015780C(S8015780C *p, u32 i, const C8015780C *c) {
    if (p->col[i].r != c->r || p->col[i].g != c->g || p->col[i].b != c->b || p->col[i].a != c->a) {
        p->col[i].r = c->r;
        p->col[i].g = c->g;
        p->col[i].b = c->b;
        p->col[i].a = c->a;
        fn_800D9188(i, p->col[i]);
    }
}

} /* extern "C" */
