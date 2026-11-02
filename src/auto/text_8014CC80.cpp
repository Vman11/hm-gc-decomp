// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Pl { V3 n; f32 d; };
struct Cam { u8 pad[0x3c]; f32 x0, y0, x1, y1, nearz, farz; u8 pad54[0x10]; s32 ortho; };
struct Fr {
    Pl p[6];
    V3 v60;
    V3 c[8];
    s32 ortho;
    s32 n;
    V3 vd4;
    V3 dir;
};
extern f32 lbl_803644E8;
void fn_801072C0(Cam *, V3 *);
void fn_80107370(Cam *, V3 *);
void fn_80107244(Cam *, V3 *);
void fn_80104004(Cam *, V3 *, V3 *);
void fn_80101820(V3 *);

static inline f32 NDot(const V3 *a, const V3 *b) { return -(a->x * b->x + a->y * b->y + a->z * b->z); }
static inline void Cross(V3 *o, const V3 *a, const V3 *b) {
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}
static inline void Sub(V3 *o, const V3 *a, const V3 *b) {
    o->x = a->x - b->x;
    o->y = a->y - b->y;
    o->z = a->z - b->z;
}

void fn_8014CC80(Fr *f, Cam *cam) {
    f32 nz, fz, x0, y0, x1, y1, d, b, a, c, k;
    V3 q, t;
    V3 e0, e1;
    fn_801072C0(cam, &f->dir);
    fn_80107370(cam, &f->vd4);
    fn_80107244(cam, &f->v60);
    nz = cam->nearz;
    fz = cam->farz;
    x0 = cam->x0;
    y0 = cam->y0;
    x1 = cam->x1;
    y1 = cam->y1;
    f->ortho = cam->ortho;
    if (f->ortho) {
        k = lbl_803644E8;
        f->n = 9;
    } else {
        k = fz / nz;
        f->n = 5;
    }
    a = k * x0;
    b = k * y0;
    q.x = a; q.y = b; q.z = fz;
    fn_80104004(cam, &q, &f->c[0]);
    c = k * x1;
    q.x = c; q.y = b; q.z = fz;
    fn_80104004(cam, &q, &f->c[1]);
    d = k * y1;
    q.x = a; q.y = d; q.z = fz;
    fn_80104004(cam, &q, &f->c[2]);
    q.x = c; q.y = d; q.z = fz;
    fn_80104004(cam, &q, &f->c[3]);
    q.x = x0; q.y = y0; q.z = nz;
    fn_80104004(cam, &q, &f->c[4]);
    q.x = x1; q.y = y0; q.z = nz;
    fn_80104004(cam, &q, &f->c[5]);
    q.x = x0; q.y = y1; q.z = nz;
    fn_80104004(cam, &q, &f->c[6]);
    q.x = x1; q.y = y1; q.z = nz;
    fn_80104004(cam, &q, &f->c[7]);

    f->p[0].n = f->dir;
    f->p[0].d = NDot(&f->c[7], &f->dir);
    t.x = -f->dir.x;
    t.y = -f->dir.y;
    t.z = -f->dir.z;
    f->p[1].n = t;
    f->p[1].d = NDot(&f->c[0], &t);

    Sub(&e1, &f->c[2], &f->c[4]);
    Sub(&e0, &f->c[0], &f->c[4]);
    Cross(&t, &e1, &e0);
    fn_80101820(&t);
    f->p[2].n = t;
    f->p[2].d = NDot(&f->c[0], &t);

    Sub(&e1, &f->c[1], &f->c[4]);
    Cross(&t, &e0, &e1);
    fn_80101820(&t);
    f->p[3].n = t;
    f->p[3].d = NDot(&f->c[0], &t);

    Sub(&e1, &f->c[1], &f->c[7]);
    Sub(&e0, &f->c[3], &f->c[7]);
    Cross(&t, &e1, &e0);
    fn_80101820(&t);
    f->p[4].n = t;
    f->p[4].d = NDot(&f->c[3], &t);

    Sub(&e1, &f->c[2], &f->c[7]);
    Cross(&t, &e0, &e1);
    fn_80101820(&t);
    f->p[5].n = t;
    f->p[5].d = NDot(&f->c[3], &t);
}

} /* extern "C" */
