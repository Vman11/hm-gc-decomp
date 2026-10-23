// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct Vec8024ADD4 { f32 x, y, z; } Vec8024ADD4;
typedef struct Tri8024ADD4 { Vec8024ADD4 v[3]; u8 pad[64]; s32 f100; u8 pad2[4]; } Tri8024ADD4;
typedef struct S8024ADD4 {
    u32 count;
    Tri8024ADD4 *tris;
    Vec8024ADD4 *verts;
    u32 f12;
    void *f16;
    u32 f20;
    s32 f24;
    u8 f28[4];
} S8024ADD4;
extern f32 lbl_80366378;
void fn_8023AFDC(void *, s32, Vec8024ADD4 *, u32, void *);

static inline void vzero(Vec8024ADD4 *v) { v->x = lbl_80366378; v->y = lbl_80366378; v->z = lbl_80366378; }
static inline void vcopy(Vec8024ADD4 *d, Vec8024ADD4 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }
void fn_8024ADD4(S8024ADD4 *p) {
    u32 i;
    u32 n;
    if (p->f24 != 0) {
        n = 0;
        for (i = 0; i < p->count; i++) {
            if (p->tris[i].f100 == 0) {
                vzero(&p->verts[n++]);
                vzero(&p->verts[n++]);
                vzero(&p->verts[n++]);
            } else {
                vcopy(&p->verts[n++], &p->tris[i].v[0]);
                vcopy(&p->verts[n++], &p->tris[i].v[1]);
                vcopy(&p->verts[n++], &p->tris[i].v[2]);
            }
        }
        fn_8023AFDC(p->f28, 0, p->verts, p->count * 3, p->f16);
    }
}

} /* extern "C" */
