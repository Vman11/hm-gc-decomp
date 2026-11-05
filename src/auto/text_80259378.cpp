// fn_80259378: camera/physics bounce update (NonMatching draft).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct V4 { f32 x, y, z, w; };
struct Sph { f32 x, y, z, r; };
void fn_80100CF4(Sph *);

struct O {
    u32 flags; u8 pad[32]; f32 dist; u8 pad2[104 - 40];
    virtual void v0(); virtual void v1(); virtual void v2();
};
struct Rb { u32 flags; u8 p4[4]; f32 v; u8 pc[4]; f32 *len; u8 p14[16]; f32 rate; u8 p28[8]; u32 f30; };
struct Ob { u8 p0[16]; void *x10; u8 p14[12]; u32 x20; };
struct En { Ob *o; u8 p4[12]; void *x10; u8 p14[12]; u32 x20; };
struct Gs { u8 p0[0x1c]; u32 n; u8 p20[4]; u8 *a; u8 *b; };
struct G { u8 p0[0x30]; Ob *o30; u8 p34[0xa8 - 0x34]; Gs *gs; void *ac; };
struct HB {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
    virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19();
    virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
    virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
    virtual void a30(); virtual void a31(); virtual void a32();
    virtual void Snd(const char *, int, int, int, int);
};
struct H : HB {
    u8 p4[0x9c - 4]; O *o; G *g; u8 pa4[0x1c0 - 0xa4]; f32 *k1c0; f32 *k1c4;
};
struct Tri { u8 p0[0x34]; s32 *dead; s32 *h1; s32 *h2; };
struct CB {
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
    virtual void b10(); virtual void b11(); virtual void b12();
    virtual void Moved(V3 *, V3 *);
};
struct Cam : CB {
    u8 p4[16];
    V3 pos0, fwd0, up0, right0, vel0; /* 0x14 */
    V3 pos, fwd, up, right, vel;      /* 0x50 */
    u8 p8c[4];
    f32 spd0, spd;                    /* 0x90 */
    u8 p98[4];
    H *h;                             /* 0x9c */
    u8 pa0[16];
    f32 *grav;                        /* 0xb0 */
    s32 *b4;
    s32 *b8;
    f32 *minspd;
    s32 *c0;
    f32 fall;                         /* 0xc4 */
};
struct FT { u8 p0[0x18]; void (*set)(void *, V4 *); u8 p1c[0x12c - 0x1c]; void (*get)(void *, V4 *); };
extern FT lbl_803286D0;
extern V3 lbl_80357E90;
extern V3 lbl_802F26D8[7];
extern f32 *lbl_80357B28[5];
extern f32 *lbl_80357B3C[5];
extern char lbl_802A9AE0[];
extern char lbl_802A9AEC[];
extern char lbl_803667DC[8];
extern char lbl_803667F0[8];
extern char lbl_80366820[5];
extern char lbl_80366828[8];
extern f32 lbl_803667B0, lbl_803667B4, lbl_803667C8, lbl_803667D0, lbl_803667D4, lbl_803667D8;
extern f32 lbl_803667E4, lbl_803667E8, lbl_803667EC, lbl_803667F8, lbl_80366810, lbl_80366814;
extern f32 lbl_80366818, lbl_8036681C, lbl_80366830, lbl_80366834;
extern f64 lbl_803667B8, lbl_803667C0, lbl_80366800, lbl_80366808;
extern u32 lbl_803667CC;

void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
f64 fn_800F049C(f64);
void fn_80100F24(V3 *, V3 *);
void fn_80101820(V3 *);
f32 fn_80101590(V3 *, V3 *);
void fn_80101744(V3 *, V3 *);
void fn_800FFE84(V4 *, V3 *, f32);
void fn_8010041C(V4 *, V4 *);
void fn_80190C98(G *);
Rb *fn_8022D694(H *);
void fn_80258EE8(Cam *, V3 *);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, s32 *g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);
void fn_80264AC0(s32 n, V3 *a, V3 *b, Sph *c, s32 *d, V3 *e, V3 *f, s32 *g, s32 *h, s32 *i, Tri **j, s32 k, s32 l, s32 m, s32 n2, s32 o, s32 q, s32 r);

static inline void madd(V3 *d, f32 s, V3 *v) { d->x += s * v->x; d->y += s * v->y; d->z += s * v->z; }
static inline void msub(V3 *d, f32 s, V3 *v) { d->x -= s * v->x; d->y -= s * v->y; d->z -= s * v->z; }
static inline void cp(V3 *d, V3 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }
static inline f32 dot(V3 *a, V3 *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
static inline f32 Len(V3 *v) {
    f32 len = v->x * v->x + v->y * v->y + v->z * v->z;
    if (len > lbl_803667B4) {
        f64 guess;
        volatile f32 y;
        guess = __frsqrte((f64)len);
        guess = lbl_803667B8 * guess * (lbl_803667C0 - guess * guess * len);
        guess = lbl_803667B8 * guess * (lbl_803667C0 - guess * guess * len);
        guess = lbl_803667B8 * guess * (lbl_803667C0 - guess * guess * len);
        y = (f32)(len * guess);
        len = y;
    }
    return len;
}
#define RUMBLE(p, V) do { \
    H *h_ = (p)->h; \
    if (h_->g && h_->g->ac && fn_8022D694(h_)) { \
        if (*(p)->b8) { \
            Rb *r = fn_8022D694((p)->h); \
            if (r->f30 & 1) r->flags &= ~2; \
        } else if (*(p)->b4) { \
            Rb *r = fn_8022D694((p)->h); \
            r->v = (V); \
            if (r->len) r->rate = r->v / *(f32 *)((u8 *)r->len + 4); \
        } \
    } \
} while (0)
static inline void Face(Cam *p) {
    cp(&p->fwd, &p->vel);
    fn_80100F24(&p->fwd, &p->up);
    fn_80101820(&p->fwd);
}
static inline f32 getTableValue(f32 **table, s32 **idx) {
    if (*idx != 0 && table != 0) {
        if (**idx > 4) {
            **idx = 4;
        }
        if (table[**idx] != 0) {
            return *table[**idx];
        }
    }
    return lbl_803667B4;
}
static inline u8 IsHaz(Tri *t) {
    bool ret = lbl_803667B4 != getTableValue(lbl_80357B28, &t->h1);
    if (!ret) {
        ret = lbl_803667B4 != getTableValue(lbl_80357B3C, &t->h2);
    }
    return ret;
}
static inline s32 IsDead(Tri *t) { return t->dead ? *t->dead : 0; }

void fn_80259378(Cam *p, f32 dt) {
    V3 from[6];
    V3 to[6];
    V3 pts[6];
    V3 nrm[6];
    s32 hit[6];
    Tri *objs[6];
    s32 x144[6];
    s32 x12c[6];
    s32 x114[6];
    V3 a;
    V3 b;
    V3 n1;
    V3 h1;
    V3 diff;
    Sph s;
    V3 avg;
    V3 vc;
    V4 q;
    V3 axis;
    V4 q2;
    V3 o78;
    V3 a2;
    V3 b2;
    V3 h2;
    V3 n2;
    s32 i44, i40, i3c;
    O *o;
    f32 d;
    u32 i;
    int bounce, land;

    fn_802610A0(p);
    cp(&p->pos, &p->pos0);
    cp(&p->fwd, &p->fwd0);
    cp(&p->up, &p->up0);
    cp(&p->right, &p->right0);
    cp(&p->vel, &p->vel0);
    p->spd = p->spd0;
    p->vel.z -= dt * *p->grav;
    madd(&p->pos, dt, &p->vel);
    if (p->c0 && *p->c0 == 1) {
        f32 dx = lbl_80357E90.x - p->up.x;
        f32 dy = lbl_80357E90.y - p->up.y;
        f32 dz = lbl_80357E90.z - p->up.z;
        f32 s = lbl_803667C8 - (f32)fn_800F049C(lbl_803667D0 * dt);
        p->up.x += s * dx;
        p->up.y += s * dy;
        p->up.z += s * dz;
        fn_80100F24(&p->fwd, &p->up);
        fn_80101820(&p->fwd);
        p->right.x = p->fwd.y * p->up.z - p->fwd.z * p->up.y;
        p->right.y = p->fwd.z * p->up.x - p->fwd.x * p->up.z;
        p->right.z = p->fwd.x * p->up.y - p->fwd.y * p->up.x;
    }
    o = p->h->o;
    if (o->flags & 4) o->v2();
    d = o->dist;
    {
        f32 s0 = lbl_802F26D8[0].x * d;
        f32 s1 = lbl_802F26D8[0].y * d;
        f32 s2 = lbl_802F26D8[0].z * d;
        a = p->pos0;
        madd(&a, s0, &p->fwd0);
        madd(&a, s1, &p->up0);
        madd(&a, s2, &p->right0);
        b = p->pos;
        madd(&b, s0, &p->fwd);
        madd(&b, s1, &p->up);
        madd(&b, s2, &p->right);
    }
    if (fn_80264E0C(&a, &b, &h1, &n1, &i44, &i40, &i3c, 0, 0, 0, 0, 0, 0, 0, 1)) {
        diff.x = a.x - h1.x;
        diff.y = a.y - h1.y;
        diff.z = a.z - h1.z;
        fn_80101820(&diff);
        diff.x *= lbl_803667D4;
        diff.y *= lbl_803667D4;
        diff.z *= lbl_803667D4;
        h1.x += diff.x;
        h1.y += diff.y;
        h1.z += diff.z;
        p->pos = h1;
        msub(&p->pos, lbl_802F26D8[0].x * d, &p->fwd);
        msub(&p->pos, lbl_802F26D8[0].y * d, &p->up);
        msub(&p->pos, lbl_802F26D8[0].z * d, &p->right);
    }
    {
        f32 cx, cy, cz;
        f32 s0, s1, s2;
        V3 *t, *f, *e;
        f32 z;
        fn_80100CF4(&s);
        z = lbl_803667B4;
        *(volatile f32 *)&s.x = z;
        *(volatile f32 *)&s.y = z;
        *(volatile f32 *)&s.z = z;
        *(volatile f32 *)&s.r = z;
        s2 = lbl_802F26D8[0].z * d;
        s0 = lbl_802F26D8[0].x * d;
        s1 = lbl_802F26D8[0].y * (*(volatile f32 *)&lbl_803667B0 + d);
        cx = p->pos.x;
        cx += s0 * p->fwd.x;
        cy = p->pos.y;
        cy += s0 * p->fwd.y;
        cz = p->pos.z;
        cz += s0 * p->fwd.z;
        cx += s1 * p->up.x;
        cy += s1 * p->up.y;
        cz += s1 * p->up.z;
        cx += s2 * p->right.x;
        cy += s2 * p->right.y;
        cz += s2 * p->right.z;
        for (i = 0; i < 6; i++) {
            f32 k0, k1, k2, r;
            V3 *e = &to[i];
            from[i].x = cx;
            from[i].y = cy;
            from[i].z = cz;
            k0 = d * lbl_802F26D8[i + 1].x;
            k1 = d * lbl_802F26D8[i + 1].y;
            k2 = d * lbl_802F26D8[i + 1].z;
            cp(e, &p->pos);
            madd(e, k0, &p->fwd);
            madd(e, k1, &p->up);
            madd(e, k2, &p->right);
            r = fn_80101590(e, &from[i]);
            if (r > s.r) s.r = r;
        }
        s.x = cx;
        s.y = cy;
        s.z = cz;
        fn_80264AC0(6, from, to, &s, hit, pts, nrm, x144, x12c, x114, objs, 0, 0, 0, 0, 0, 0, 1);
    }
    for (i = 0; i < 6; i++) {
        if (hit[i]) {
            f32 dx = pts[i].x - to[i].x;
            f32 dy = pts[i].y - to[i].y;
            f32 dz = pts[i].z - to[i].z;
            p->pos.x += dx;
            p->pos.y += dy;
            p->pos.z += dz;
        }
    }
    {
        f32 inv, w;
        bounce = 0;
        land = 0;
        {
            f32 dx = p->pos.x - p->pos0.x;
            f32 dy, dz;
            *(volatile f32 *)&avg.x = dx;
            dy = p->pos.y - p->pos0.y;
            *(volatile f32 *)&avg.y = dy;
            dz = p->pos.z - p->pos0.z;
            *(volatile f32 *)&avg.z = dz;
            inv = *(volatile f32 *)&lbl_803667C8 / dt;
            *(volatile f32 *)&avg.x = dx * inv;
            *(volatile f32 *)&avg.y = dy * inv;
            *(volatile f32 *)&avg.z = dz * inv;
        }
        w = *(volatile f32 *)&lbl_803667D8 * d;
        for (i = 0; i < 6; i++) {
            if (hit[i]) {
                V3 *n = &nrm[i];
                bounce = 1;
                p->h->Snd(lbl_803667DC, 0, 0, 0, 0);
                if (dot(n, &lbl_80357E90) > lbl_803667E4) {
                    f32 vd = __fabs(dot(&p->vel, n));
                    f32 k;
                    fn_80100F24(&p->vel, n);
                    k = p->h->k1c0 ? *p->h->k1c0 : lbl_803667E8;
                    madd(&p->vel, vd * k, n);
                    if ((f32)__fabs(dot(&p->vel, n)) < lbl_803667C8) {
                        f32 len;
                        cp(&vc, &p->vel);
                        fn_80101820(&vc);
                        k = p->h->k1c4 ? *p->h->k1c4 : lbl_803667EC;
                        k = dt * k;
                        vc.x *= k;
                        vc.y *= k;
                        vc.z *= k;
                        p->vel.x -= vc.x;
                        p->vel.y -= vc.y;
                        p->vel.z -= vc.z;
                        len = Len(&p->vel);
                        if (len < *p->minspd) {
                            fn_80258EE8(p, n);
                            land = 1;
                            p->vel.x = lbl_803667B4;
                            p->vel.y = lbl_803667B4;
                            p->vel.z = lbl_803667B4;
                            RUMBLE(p, lbl_803667B4);
                            p->h->Snd(lbl_803667F0, 0, 0, 0, 0);
                        } else if (*p->b4 || *p->b8) {
                            f32 t;
                            fn_80100F24(&avg, n);
                            t = Len(&p->vel) / w;
                            RUMBLE(p, lbl_803667F8 * t);
                            if (*p->b8) {
                                En *e;
                                Gs *gs = p->h->g->gs;
                                G *g;
                                Ob *ob;
                                f32 ang;
                                if (gs->n > 1) e = (En *)(gs->a + 0x28);
                                else e = (En *)(gs->b + (1 - gs->n) * 0x34);
                                lbl_803286D0.get(e->x10, &q);
                                axis.x = p->vel.y * lbl_80357E90.z - p->vel.z * lbl_80357E90.y;
                                axis.y = p->vel.z * lbl_80357E90.x - p->vel.x * lbl_80357E90.z;
                                axis.z = p->vel.x * lbl_80357E90.y - p->vel.y * lbl_80357E90.x;
                                fn_80101820(&axis);

                                {
                                    f32 z = lbl_803667B4;
                                    *(volatile f32 *)&q2.x = z;
                                    *(volatile f32 *)&q2.y = z;
                                    *(volatile f32 *)&q2.z = z;
                                    q2.w = *(volatile f32 *)&lbl_803667C8;
                                }
                                g = p->h->g;
                                ob = g->o30;
                                if (ob) {
                                    lbl_803286D0.set(ob->x10, &q2);
                                    ob->x20 |= lbl_803667CC;
                                    fn_80190C98(g);
                                }
                                ob = e->o;
                                lbl_803286D0.set(ob->x10, &q2);
                                ob->x20 |= lbl_803667CC;
                                ang = (f32)(lbl_80366800 * (lbl_80366808 * t) * dt);
                                while (ang > *(volatile f32 *)&lbl_80366814) ang -= *(volatile f32 *)&lbl_80366810;
                                while (ang < *(volatile f32 *)&lbl_80366818) ang += *(volatile f32 *)&lbl_80366810;
                                fn_800FFE84(&q2, &axis, ang);
                                fn_8010041C(&q, &q2);
                                lbl_803286D0.set(e->x10, &q);
                                e->x20 |= lbl_803667CC;
                            } else {
                                fn_80258EE8(p, n);
                                Face(p);
                            }
                        }
                    } else if (dot(n, &p->vel) < lbl_803667B4) {
                        if (*p->b8) {
                            p->h->Snd(lbl_802A9AE0, 0, 0, 0, 0);
                        } else if (*p->b4) {
                            fn_80101744(&o78, &avg);
                            fn_80101590(&o78, n);
                            RUMBLE(p, lbl_8036681C);
                            fn_80258EE8(p, n);
                            Face(p);
                            p->h->Snd(lbl_802A9AE0, 0, 0, 0, 0);
                        }
                    }
                } else if (dot(n, &p->vel) < lbl_803667B4) {
                    f32 vd = __fabs(dot(&p->vel, n));
                    f32 k = p->h->k1c0 ? *p->h->k1c0 : lbl_803667E8;
                    madd(&p->vel, vd * k + vd, n);
                    if (*p->b8) {
                        p->h->Snd(lbl_802A9AE0, 0, 0, 0, 0);
                    } else if (*p->b4) {
                        Face(p);
                        p->h->Snd(lbl_802A9AE0, 0, 0, 0, 0);
                    } else {
                        p->h->Snd(lbl_802A9AE0, 0, 0, 0, 0);
                    }
                }
                if (IsDead(objs[i])) p->h->Snd(lbl_80366820, 0, 0, 0, 0);
                if (IsHaz(objs[i])) p->h->Snd(lbl_80366828, 0, 0, 0, 0);
            }
        }
    }
    if (!bounce) p->vel = avg;
    {
        f32 s;
        f32 x = p->pos0.x, y, z;
        *(volatile f32 *)&a2.x = x;
        y = p->pos0.y;
        *(volatile f32 *)&a2.y = y;
        z = p->pos0.z;
        *(volatile f32 *)&a2.z = z;
        s = *(volatile f32 *)&lbl_80366830 * d;
        a2.x = s * p->up0.x + x;
        a2.y = s * p->up0.y + y;
        a2.z = s * p->up0.z + z;
        x = p->pos.x;
        *(volatile f32 *)&b2.x = x;
        y = p->pos.y;
        *(volatile f32 *)&b2.y = y;
        z = p->pos.z;
        *(volatile f32 *)&b2.z = z;
        b2.x = s * p->up.x + x;
        b2.y = s * p->up.y + y;
        b2.z = s * p->up.z + z;
    }
    if (fn_80264E0C(&a2, &b2, &h2, &n2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1)) {
        cp(&p->pos, &p->pos0);
        madd(&p->pos, lbl_802F26D8[0].x * d, &p->fwd0);
        madd(&p->pos, lbl_802F26D8[0].y * d, &p->up0);
        madd(&p->pos, lbl_802F26D8[0].z * d, &p->right0);
        msub(&p->pos, lbl_802F26D8[0].x * d, &p->fwd);
        msub(&p->pos, lbl_802F26D8[0].y * d, &p->up);
        msub(&p->pos, lbl_802F26D8[0].z * d, &p->right);
        fn_80100F24(&p->vel, &n2);
    }
    p->spd = Len(&p->vel);
    if (!*p->b8) {
        p->right.x = p->fwd.y * p->up.z - p->fwd.z * p->up.y;
        p->right.y = p->fwd.z * p->up.x - p->fwd.x * p->up.z;
        p->right.z = p->fwd.x * p->up.y - p->fwd.y * p->up.x;
        fn_80101820(&p->right);
    }
    p->fall += p->pos0.z - p->pos.z;
    while (p->fall >= lbl_80366834) {
        p->h->Snd(lbl_802A9AEC, 0, 0, 0, 0);
        p->fall -= lbl_80366834;
    }
    fn_8026102C(p);
    if (land) p->Moved(&p->pos0, &p->pos);
}

} /* extern "C" */
