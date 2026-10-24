// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct Vec { f32 x, y, z; };
struct O { u32 flags; u8 pad[32]; f32 dist; u8 pad2[104 - 40]; virtual void v0(); virtual void v1(); virtual void v2(); };
struct H { u8 pad[156]; O *o; };
struct Cam { u8 pad[80]; Vec pos; Vec fwd; Vec up; Vec right; u8 pad2[156 - 128]; H *h; };
extern f32 lbl_802F26D8[3];
extern f32 lbl_803667B0;
extern f32 lbl_803667B4;
extern f32 lbl_803667C8;
extern f64 lbl_803667B8;
extern f64 lbl_803667C0;
void fn_80100F24(Vec *a, Vec *b);
void fn_80101664(Vec *a);

static inline void madd(Vec *d, f32 s, Vec *v) { d->x += s * v->x; d->y += s * v->y; d->z += s * v->z; }
static inline void msub(Vec *d, f32 s, Vec *v) { d->x -= s * v->x; d->y -= s * v->y; d->z -= s * v->z; }
void fn_80258EE8(Cam *p, Vec *up) {
    O *o = p->h->o;
    f32 d, d2, s, len;
    f64 guess;
    volatile f32 y;
    f32 uz, uy, ux;
    if (o->flags & 4) o->v2();
    d = o->dist;
    ux = up->x; uy = up->y; uz = up->z;
    s = lbl_802F26D8[0] * d;
    madd(&p->pos, s, &p->fwd);
    d2 = lbl_803667B0 + d;
    s = lbl_802F26D8[1] * d2;
    madd(&p->pos, s, &p->up);
    s = lbl_802F26D8[2] * d;
    madd(&p->pos, s, &p->right);
    p->up.x = ux; p->up.y = uy; p->up.z = uz;
    fn_80100F24(&p->fwd, &p->up);
    fn_80101664(&p->fwd);
    p->right.x = p->fwd.y * p->up.z - p->fwd.z * p->up.y;
    p->right.y = p->fwd.z * p->up.x - p->fwd.x * p->up.z;
    p->right.z = p->fwd.x * p->up.y - p->fwd.y * p->up.x;
    len = p->right.x * p->right.x + p->right.y * p->right.y + p->right.z * p->right.z;
    if (len > lbl_803667B4) {
        guess = __frsqrte((f64)len);
        guess = lbl_803667B8 * guess * (lbl_803667C0 - guess * guess * len);
        guess = lbl_803667B8 * guess * (lbl_803667C0 - guess * guess * len);
        guess = lbl_803667B8 * guess * (lbl_803667C0 - guess * guess * len);
        y = (f32)(len * guess);
        len = y;
    }
    if (lbl_803667B4 == len) {
        p->right.x = lbl_803667C8;
        p->right.y = lbl_803667B4;
        p->right.z = lbl_803667B4;
    } else {
        f32 inv = lbl_803667C8 / len;
        p->right.x *= inv;
        p->right.y *= inv;
        p->right.z *= inv;
    }
    s = lbl_802F26D8[0] * d;
    msub(&p->pos, s, &p->fwd);
    s = lbl_802F26D8[1] * d2;
    msub(&p->pos, s, &p->up);
    s = lbl_802F26D8[2] * d;
    msub(&p->pos, s, &p->right);
}
}

} /* extern "C" */
