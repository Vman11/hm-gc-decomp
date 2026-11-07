#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Sph { f32 x, y, z, r; };
void fn_80100CF4(Sph *);

struct O {
    u32 flags; u8 pad[32]; f32 dist; u8 pad2[104 - 40];
    virtual void v0(); virtual void v1(); virtual void v2();
};
struct HB {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void a10(); virtual void a11(); virtual void a12();
    virtual void Get(V3 *, V3 *, V3 *, V3 *, int);
    virtual void Set(V3 *, V3 *, V3 *, V3 *, int);
    virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19();
    virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
    virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
    virtual void a30(); virtual void a31(); virtual void a32();
    virtual void Snd(const char *, int, int, int, int);
};
struct H : HB {
    u8 p4[0x9c - 4]; O *o; u8 pa0[0x118 - 0xa0]; V3 vel; u8 p124[0x154 - 0x124]; f32 spd;
};
struct Cam {
    u8 p0[0x14];
    V3 pos0, fwd0, up0, right0, vel0; /* 0x14 */
    V3 pos, fwd, up, right, vel;      /* 0x50 */
    u8 p8c[4];
    f32 spd0, spd;                    /* 0x90 */
    u8 p98[4];
    H *h;                             /* 0x9c */
};
extern V3 lbl_802F2A7C[7];
extern char lbl_80366A6C[7];
extern f32 lbl_80366A60, lbl_80366A64, lbl_80366A68;

f32 fn_80101590(V3 *, V3 *);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, s32 *g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);
void fn_80264AC0(s32 n, V3 *a, V3 *b, Sph *c, s32 *d, V3 *e, V3 *f, s32 *g, s32 *h, s32 *i, void **j, s32 k, s32 l, s32 m, s32 n2, s32 o, s32 q, s32 r);

static inline f32 dist(O *o) { if (o->flags & 4) o->v2(); return o->dist; }
static inline void madd(V3 *d, f32 s, V3 *v) { d->x += s * v->x; d->y += s * v->y; d->z += s * v->z; }
static inline void cp(V3 *d, V3 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }

void fn_8026091C(Cam *p, V3 *a, V3 *b) {
    V3 from[6];
    V3 to[6];
    V3 pts[6];
    V3 nrm[6];
    s32 hit[6];
    s32 x7c[6];
    s32 x64[6];
    s32 x4c[6];
    Sph s;
    V3 c;
    f32 d;
    u32 i;
    int moved;

    fn_80100CF4(&s);
    s.x = lbl_80366A60;
    s.y = lbl_80366A60;
    s.z = lbl_80366A60;
    s.r = lbl_80366A60;
    p->h->Get(&p->pos0, &p->fwd0, &p->up0, &p->right0, 0);
    {
        H *h = p->h;
        p->vel0.x = h->vel.x;
        p->vel0.y = h->vel.y;
        p->vel0.z = h->vel.z;
        p->spd0 = h->spd;
    }
    cp(&p->pos0, a);
    cp(&p->pos, b);
    cp(&p->fwd, &p->fwd0);
    cp(&p->up, &p->up0);
    cp(&p->right, &p->right0);
    cp(&p->vel, &p->vel0);
    p->spd = p->spd0;
    d = dist(p->h->o);
    {
        f32 s0 = lbl_802F2A7C[0].x * d;
        f32 s2 = lbl_802F2A7C[0].z * d;
        cp(&c, &p->pos0);
        *(volatile f32 *)&c.x = c.x + s0 * p->fwd.x; *(volatile f32 *)&c.y = c.y + s0 * p->fwd.y; *(volatile f32 *)&c.z = c.z + s0 * p->fwd.z;
        {
            f32 s1 = lbl_802F2A7C[0].y * (*(volatile f32 *)&lbl_80366A64 + d);
            madd(&c, s1, &p->up);
        }
        madd(&c, s2, &p->right);
        for (i = 0; i < 6; i++) {
            f32 k0, k1, k2;
            from[i] = c;
            cp(&to[i], &p->pos);
            k0 = d * lbl_802F2A7C[i + 1].x;
            k1 = d * lbl_802F2A7C[i + 1].y;
            k2 = d * lbl_802F2A7C[i + 1].z;
            madd(&to[i], k0, &p->fwd);
            madd(&to[i], k1, &p->up);
            madd(&to[i], k2, &p->right);
            s.x += from[i].x;
            s.y += from[i].y;
            s.z += from[i].z;
            s.x += to[i].x;
            s.y += to[i].y;
            s.z += to[i].z;
        }
        s.x *= lbl_80366A68;
        s.y *= lbl_80366A68;
        s.z *= lbl_80366A68;
        for (i = 0; i < 6; i++) {
            f32 r = fn_80101590(&from[i], (V3 *)&s);
            s.r = s.r > r ? s.r : r;
            r = fn_80101590(&to[i], (V3 *)&s);
            s.r = s.r > r ? s.r : r;
        }
        fn_80264AC0(6, from, to, &s, hit, pts, nrm, x7c, x64, x4c, 0, 0, 0, 0, 0, 0, 0, 1);
    }
    moved = 0;
    for (i = 0; i < 6; i++) {
        if (hit[i]) {
            f32 dx = pts[i].x - to[i].x;
            f32 dy = pts[i].y - to[i].y;
            f32 dz = pts[i].z - to[i].z;
            moved = 1;
            p->pos.x += dx;
            p->pos.y += dy;
            p->pos.z += dz;
        }
    }
    if (moved) p->h->Snd(lbl_80366A6C, 0, 0, 0, 0);
    {
        f32 s0 = lbl_802F2A7C[0].x * d;
        f32 s1 = lbl_802F2A7C[0].y * d;
        f32 s2 = lbl_802F2A7C[0].z * d;
        cp(&c, &p->pos0);
        madd(&c, s0, &p->fwd);
        madd(&c, s1, &p->up);
        madd(&c, s2, &p->right);
        cp(&to[0], &p->pos);
        madd(&to[0], s0, &p->fwd);
        madd(&to[0], s1, &p->up);
        madd(&to[0], s2, &p->right);
    }
    if ((hit[0] = fn_80264E0C(&c, to, pts, nrm, x7c, x64, x4c, 0, 0, 0, 0, 0, 0, 0, 1)) != 0) {
        cp(&p->pos, &p->pos0);
    }
    p->h->Set(&p->pos, &p->fwd, &p->up, &p->right, 0);
    {
        f32 spd = p->spd;
        H *h = p->h;
        h->vel.x = p->vel.x;
        h->vel.y = p->vel.y;
        h->vel.z = p->vel.z;
        h->spd = spd;
    }
}

}
