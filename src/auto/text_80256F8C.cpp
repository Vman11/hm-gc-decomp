#include "common.h"
extern "C" {
struct V3 { f32 x, y, z; };
struct B { u8 pad[16]; void *h; u8 pad2[12]; u32 flags; };
struct FT {
    u8 pad0[12]; void (*setPos)(void *, V3 *);
    u8 pad1[32]; void (*setRot)(void *, V3 *, V3 *);
    u8 pad2[252]; void (*getPos)(void *, V3 *);
    u8 pad3[20]; void (*getUp)(void *, V3 *);
    void (*getAt)(void *, V3 *);
};
struct Sub {
    u8 pad[596];
    f32 fov;   /* 596 */
    f32 fov2;  /* 600 */
    f32 fov3;  /* 604 */
    f32 f260;  /* 608 */
    u8 pad2[8];
    f32 r0;    /* 620 */
    f32 r1;    /* 624 */
    u8 pad3[8];
    s32 alt;   /* 636 */
    s32 snap;  /* 640 */
};
struct Cam {
    u8 pad[80];
    V3 pos;    /* 80 */
    V3 at;     /* 92 */
    V3 up;     /* 104 */
    u8 pad2[40];
    Sub *sub;  /* 156 */
    u8 pad3[16];
    B *b;      /* 176 */
    f32 *fov;  /* 180 */
    f32 *rate; /* 184 */
};
double fn_800F049C(double);
void fn_8012962C(B *, f32, f32, f32, f32);
extern FT lbl_803286D0;
extern u32 lbl_803666B4;
extern f32 lbl_803666B0, lbl_803666B8, lbl_803666BC, lbl_803666C0, lbl_803666C4, lbl_803666C8, lbl_803666CC, lbl_803666D0;

#define Lerp(A, B, K) { V3 *a_ = (A); const V3 *b_ = (B); \
    f32 dx = b_->x - a_->x; f32 dy = b_->y - a_->y; f32 dz = b_->z - a_->z; \
    f32 e = lbl_803666BC - (f32)fn_800F049C(K); \
    a_->x = e * dx + a_->x; a_->y = e * dy + a_->y; a_->z = e * dz + a_->z; }

inline void SetPos(B *b, V3 *v)
{
    lbl_803286D0.setPos(b->h, v);
    b->flags |= lbl_803666B4;
}

inline void SetRot(B *b, V3 *v, V3 *w)
{
    lbl_803286D0.setRot(b->h, v, w);
    b->flags |= lbl_803666B4;
}

inline void Damp(f32 &cur, f32 d, f32 r, f32 dt)
{
    if ((f32)__fabs(d) > lbl_803666B8) { f32 e = lbl_803666BC - (f32)fn_800F049C(-r * dt); cur = e * d + cur; }
}

void fn_80256F8C(Cam *o, f32 dt)
{
    Sub *s = o->sub;
    f32 d;
    f32 cur = s->fov;
    d = *o->fov - cur;
    V3 nu;
    f32 t;
    if ((f32)__fabs(d) > lbl_803666B8) {
        Damp(cur, d, *o->rate, dt);
        s->fov = cur;
        s->fov2 = cur;
        s->fov3 = cur;
        s->f260 = lbl_803666B0;
        fn_8012962C(o->b, lbl_803666C0 * cur, lbl_803666C4, lbl_803666C8, lbl_803666CC);
    }
    s = o->sub;
    nu.x = -o->up.x;
    nu.y = -o->up.y;
    nu.z = -o->up.z;
    t = s->alt ? s->r1 : s->r0;
    if (s->snap || t >= lbl_803666D0) {
        s->snap = 0;
        SetPos(o->b, &o->pos);
        SetRot(o->b, &o->at, &nu);
    } else {
        V3 p, u, q;
        lbl_803286D0.getPos(o->b->h, &p);
        lbl_803286D0.getAt(o->b->h, &q);
        lbl_803286D0.getUp(o->b->h, &u);
        Lerp(&p, &o->pos, -t * dt);
        Lerp(&q, &o->at, -t * dt);
        Lerp(&u, &nu, -t * dt);
        SetPos(o->b, &p);
        SetRot(o->b, &q, &u);
    }
}
}
