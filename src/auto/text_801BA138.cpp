// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[88];
    f32 x;
    f32 y;
    f32 x2;
    f32 y2;
} E801BA138;
typedef struct {
    u8 pad[88];
    f32 x;
    f32 y;
    f32 x2;
    f32 y2;
    u8 pad104[368 - 104];
    s32 enabled;
    E801BA138 **arr;
    u8 pad376[384 - 376];
    f32 bx;
    f32 by;
    f32 dx;
    f32 dy;
    f32 w;
    f32 h;
    s32 n;
} S801BA138;
void fn_801DB744(S801BA138 *p);

typedef struct { f32 x, y, x2, y2; } R801BA138;
s32 fn_801BA138(S801BA138 *p) {
    R801BA138 r;
    u32 i;
    E801BA138 *e;
    fn_801DB744(p);
    r.x = p->bx;
    r.y = p->by;
    r.x2 = r.x + p->w;
    r.y2 = r.y + p->h;
    for (i = 0; i < p->n; i++) {
        e = p->arr[i];
        e->x = r.x;
        e->y = r.y;
        e->x2 = r.x2;
        e->y2 = r.y2;
        r.x += p->dx;
        r.y += p->dy;
        r.x2 += p->dx;
        r.y2 += p->dy;
    }
    if (p->enabled != 0) {
        if (p->dx < p->w) p->x2 = p->bx + (p->x + p->w);
        else p->x2 = p->bx + (p->dx * p->n + p->x);
        if (p->dy < p->h) p->y2 = p->by + (p->y + p->h);
        else p->y2 = p->by + (p->dy * p->n + p->y);
    }
    return 0;
}

} /* extern "C" */
