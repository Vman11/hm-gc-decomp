#include "common.h"

extern "C" {

struct Vec { f32 x, y, z; };
struct Res { Vec v; f32 max; };
struct Mat { u8 pad[0x34]; int *f34; int *f38; int *f3c; };
struct HV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void send(char *s, int a, int b, int c, int d); };
struct H : HV { u8 pad[0x238 - 4]; int f238; };
struct Cam {
    u8 pad0[0x14];
    Vec p14; Vec fwd20; Vec up2c; Vec right38; Vec vel44;
    Vec pos; Vec fwd; Vec up; Vec right; Vec vel;
    u8 pad8c[0x9c - 0x8c];
    H *h;
    u8 padA0[0xb4 - 0xa0];
    f32 *b4;
    u8 padB8[4];
    f32 maxspd;
    f32 *grav;
    int *c4;
    f32 fall;
    int *cc;
    int *d0;
    Vec d4;
    int e0;
    f32 *e4;
    f32 *e8;
    f32 ang;
    f32 timer;
    int *f4;
    f32 *f8;
};

extern volatile f32 lbl_80366C78;
extern f32 lbl_80366C7C, lbl_80366C80, lbl_80366C84;
extern f64 lbl_80366C88, lbl_80366C90, lbl_80366CB0;
extern f32 lbl_80366C98, lbl_80366C9C, lbl_80366CA0, lbl_80366CA4, lbl_80366CA8, lbl_80366CB8;
extern f32 lbl_80366CCC, lbl_80366CD0, lbl_80366CD4, lbl_80366CD8, lbl_80366CDC, lbl_80366CE0;
extern char lbl_80366CBC[5];
extern char lbl_80366CC4[7];
extern char lbl_802AA364[], lbl_802AA370[];
extern Vec lbl_802F2E38[];
extern Vec lbl_80357E90;
extern f32 *lbl_80357B28[];
extern f32 *lbl_80357B3C[];

void fn_80100CF4(Res *r);
f32 fn_80101590(Vec *a, Vec *b);
void fn_80264AC0(int n, Vec *a, Vec *b, Res *r, int *flags, Vec *d, Vec *c, int *e148, int *e128, int *e108, Mat **mats, int, int, int, int, int, int, int);
void fn_801012C0(Vec *out, Vec *axis, Vec *v, f32 angle);
f64 fn_800F049C(f64 x);
void fn_80100F24(Vec *a, Vec *n);
void fn_80101820(Vec *v);

static inline void Send(H *h, char *s) { h->send(s, 0, 0, 0, 0); }
#define SEND(h, s) Send(h, s)

static inline f32 Len(Vec *v) {
    f32 d; volatile f32 y; f64 guess;
    d = v->x * v->x + v->y * v->y + v->z * v->z;
    if (d > lbl_80366C78) {
        f64 half = lbl_80366C88;
        f64 three = lbl_80366C90;
        guess = __frsqrte((f64)d);
        guess = half * guess * (three - guess * guess * d);
        guess = half * guess * (three - guess * guess * d);
        guess = half * guess * (three - guess * guess * d);
        y = (f32)(d * guess);
        return y;
    }
    return d;
}
static inline f32 GetF(f32 *q, f32 def) { return q ? *q : def; }
static inline f32 GetF2(f32 *q, f32 def) { f32 r = def; if (q) r = *q; return r; }
static inline int IsZero(Vec *v) { return Len(v) >= lbl_80366C98 && Len(v) <= lbl_80366C9C; }
static inline f32 Dot(Vec *a, Vec *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
static inline void madd(Vec *d, f32 s, Vec *v) { d->x += s * v->x; d->y += s * v->y; d->z += s * v->z; }
static inline void Approach(Vec *v, Vec *t, f32 r, f32 dt) {
    f32 dz, dy, dx, k;
    dx = t->x - v->x;
    dy = t->y - v->y;
    dz = t->z - v->z;
    k = lbl_80366C7C - (f32)fn_800F049C(r * dt);
    v->x += k * dx;
    v->y += k * dy;
    v->z += k * dz;
}
static inline void Cross(Cam *p) {
    p->right.x = p->fwd.y * p->up.z - p->fwd.z * p->up.y;
    p->right.y = p->fwd.z * p->up.x - p->fwd.x * p->up.z;
    p->right.z = p->fwd.x * p->up.y - p->fwd.y * p->up.x;
}
static inline void Place(Vec *o, Cam *p, Vec *t, f32 h, f32 h2, f32 z0, f32 hz) {
    madd(o, t->x * h, &p->fwd);
    madd(o, t->y * h2, &p->up);
    madd(o, t->z * h, &p->right);
    o->x += z0;
    o->y += z0;
    o->z += hz;
}
static inline void PlaceB(Vec *o, Cam *p, Vec *t, f32 h, f32 z0, f32 hz) {
    madd(o, h * t->x, &p->fwd);
    madd(o, h * t->y, &p->up);
    madd(o, h * t->z, &p->right);
    o->x += z0;
    o->y += z0;
    o->z += hz;
}
static inline f32 Zero() { return lbl_80366C78; }
static inline f32 Zero2() { f32 r = lbl_80366C78; return r; }
static inline f32 GetF5(f32 *q, f32 def) { if (q) def = *q; return def; }
static inline int GetI(int *q, int def) { return q ? *q : def; }
static inline bool Haz(Mat **mats, int which, f32 **tbl) {
    f32 f;
    int *q = which ? mats[0]->f3c : mats[0]->f38;
    if (q != 0 && tbl != 0) {
        if (*q > 4) *q = 4;
        f32 *e = tbl[*(which ? mats[0]->f3c : mats[0]->f38)];
        if (e != 0) { f = *e; goto done; }
    }
    f = lbl_80366C78;
done:
    return lbl_80366C78 != f;
}

void fn_80266AD0(Cam *p, f32 dt) {
    Vec A[5];
    Vec B[5];
    Vec D[5];
    Vec C[5];
    Mat *mats[5];
    int flags[5];
    int e148[5];
    int e128[5];
    int e108[5];
    Res r;
    Vec tgt;
    f32 h2, h;
    Vec st;
    f32 hz, z0, ang;
    u32 i;

    fn_80100CF4(&r);
    z0 = Zero2();
    r.v.x = z0;
    r.v.y = z0;
    r.v.z = z0;
    r.max = z0;
    hz = GetF2(p->e4, z0);
    h = lbl_80366C7C;
    if (p->e8) h = *p->e8;
    h2 = lbl_80366C80 + h;
    st = p->p14;
    Place(&st, p, &lbl_802F2E38[0], h, h2, z0, hz);
    for (i = 0; i < 5; i++) {
        if (i == 0) {
            A[i] = p->pos;
            Place(&A[i], p, &lbl_802F2E38[0], h, h2, z0, hz);
        } else {
            A[i] = st;
        }
        B[i] = p->pos;
        PlaceB(&B[i], p, &lbl_802F2E38[i + 1], h, z0, hz);
        {
            f32 d = fn_80101590(&B[i], &A[i]);
            if (d > r.max) r.max = d;
        }
        *(volatile f32 *)&C[i].x = lbl_80366C78; *(volatile f32 *)&C[i].y = lbl_80366C78; C[i].z = lbl_80366C78;
    }
    r.v = A[0];
    fn_80264AC0(5, A, B, &r, flags, D, C, e148, e128, e108, mats, 0, 0, 0, 0, 0, 0, 1);

    if (flags[2] == 0) goto fail;
    if (p->cc && *p->cc == 0) goto fail;
    if (p->f4 && *p->f4 != 0) goto fail;
    {
        f32 d1 = fn_80101590(&A[2], &D[2]);
        if (!(fn_80101590(&p->p14, &p->d4) >= d1)) goto fail;
    }
    if (!(Dot(&C[2], &lbl_80357E90) < lbl_80366C84)) {
        if (!(Len(&C[2]) >= lbl_80366C98)) goto fail;
        if (!(Len(&C[2]) <= lbl_80366C9C)) goto fail;
    }
    {
        if (p->e0 == 0) {
            if (p->timer < lbl_80366C80) {
                ang = p->ang;
            } else {
                Vec c;
                f32 len;
                if (Len(&C[2]) >= lbl_80366C98 && Len(&C[2]) <= lbl_80366C9C) {
                    f32 k, y, x, z;
                    x = p->fwd20.x; *(volatile f32 *)&C[2].x = x;
                    y = p->fwd20.y; *(volatile f32 *)&C[2].y = y;
                    z = p->fwd20.z; *(volatile f32 *)&C[2].z = z;
                    k = *(volatile f32 *)&lbl_80366CA0;
                    C[2].x = x * k;
                    C[2].y = y * k;
                    C[2].z = z * k;
                }
                c.x = p->fwd20.y * C[2].z - p->fwd20.z * C[2].y;
                c.y = p->fwd20.z * C[2].x - p->fwd20.x * C[2].z;
                c.z = p->fwd20.x * C[2].y - p->fwd20.y * C[2].x;
                len = Len(&c);
                f32 zz;
                zz = lbl_80366C78;
                if (zz == len) {
                    c.x = lbl_80366C7C;
                    c.y = zz;
                    c.z = zz;
                } else {
                    f32 inv = lbl_80366C7C / len;
                    c.x *= inv;
                    c.y *= inv;
                    c.z *= inv;
                }
                if (Dot(&c, &lbl_80357E90) > lbl_80366C78) ang = lbl_80366CA4;
                else ang = lbl_80366CA8;
                p->ang = ang;
            }
            p->e0 = 1;
            p->timer = lbl_80366C78;
        } else {
            ang = p->ang;
        }
        fn_801012C0(&tgt, &p->up, &p->fwd20, ang);
        p->fwd = p->fwd20;
        {
            f32 rate = p->f8 ? *p->f8 : *p->b4;
            Approach(&p->fwd, &tgt, -rate, dt);
        }
        fn_80100F24(&p->fwd, &p->up);
        fn_80101820(&p->fwd);
        Cross(p);
    }
    goto skip;
fail:
    p->e0 = 0;
    if (p->timer < lbl_80366CB0) p->timer += dt;
skip:

    if (flags[0] != 0 && D[0].z >= p->pos.z) {
        H *h0 = p->h;
        if (h0->f238 == 0) {
            h0->f238 = 1;
            p->vel.z = lbl_80366C78;
            p->fall = lbl_80366C78;
        }
        if (D[0].z > p->pos.z) {
            p->pos.x = D[0].x;
            p->pos.y = D[0].y;
            p->pos.z = D[0].z;
        }
        if (p->d0 == 0 || *p->d0 == 0) {
            if (C[0].z < lbl_80366C88) {
                p->pos.x = p->p14.x; p->pos.y = p->p14.y; p->pos.z = p->p14.z;
                p->up.x = p->up2c.x; p->up.y = p->up2c.y; p->up.z = p->up2c.z;
                p->fwd.x = p->fwd20.x; p->fwd.y = p->fwd20.y; p->fwd.z = p->fwd20.z;
                p->right.x = p->right38.x; p->right.y = p->right38.y; p->right.z = p->right38.z;
                p->vel.x = p->vel44.x; p->vel.y = p->vel44.y; p->vel.z = p->vel44.z;
            } else {
                f32 s;
                Approach(&p->up, &C[0], lbl_80366CB8, dt);
                fn_80101820(&p->up);
                fn_80100F24(&p->fwd, &p->up);
                fn_80101820(&p->fwd);
                Cross(p);
                fn_80101820(&p->right);
                s = Len(&p->vel);
                if (s > p->maxspd) s = p->maxspd;
                fn_80100F24(&p->vel, &C[0]);
                fn_80101820(&p->vel);
                p->vel.x *= s;
                p->vel.y *= s;
                p->vel.z *= s;
            }
        } else {
            f32 s;
            Approach(&p->up, &lbl_80357E90, lbl_80366CB8, dt);
            fn_80101820(&p->up);
            fn_80100F24(&p->fwd, &p->up);
            fn_80101820(&p->fwd);
            Cross(p);
            fn_80101820(&p->right);
            s = Len(&p->vel);
            if (s > p->maxspd) s = p->maxspd;
            fn_80100F24(&p->vel, &C[0]);
            fn_80101820(&p->vel);
            p->vel.x *= s;
            p->vel.y *= s;
            p->vel.z *= s;
        }
        if (GetI(mats[0]->f34, 0) != 0) SEND(p->h, lbl_80366CBC);
        {
            bool b = Haz(mats, 0, lbl_80357B28) || Haz(mats, 1, lbl_80357B3C);
            if (b) SEND(p->h, lbl_80366CC4);
        }
    } else {
        if (GetI(p->c4, 1) == 0 && p->h->f238 != 0) {
            p->fall = lbl_80366C78;
            SEND(p->h, lbl_802AA364);
        } else {
            p->h->f238 = 0;
            if (p->vel.z > lbl_80366CCC) p->vel.z -= dt * *p->grav;
            { f32 k, v; v = *(volatile f32 *)&p->vel.z; k = *(volatile f32 *)&lbl_80366CCC; if (v < k) p->vel.z = k; }
            p->fall += p->p14.z - p->pos.z;
            while (p->fall >= lbl_80366CD8) {
                if (p->fall > lbl_80366CD0) p->fall = lbl_80366CD4;
                SEND(p->h, lbl_802AA370);
                p->fall -= lbl_80366CD8;
            }
        }
    }

    {
        Vec o;
        f32 len;
        o.x = lbl_80366C78; o.y = o.x; o.z = o.x;
        if (flags[1] != 0 && C[1].z < lbl_80366CDC) {
            o.x += D[1].x; o.y += D[1].y; o.z += D[1].z;
            o.x -= B[1].x; o.y -= B[1].y; o.z -= B[1].z;
        }
        if (flags[3] != 0 && C[3].z < lbl_80366CDC) {
            o.x += D[3].x; o.y += D[3].y; o.z += D[3].z;
            o.x -= B[3].x; o.y -= B[3].y; o.z -= B[3].z;
        }
        if (flags[4] != 0 && C[4].z < lbl_80366CDC) {
            o.x += D[4].x; o.y += D[4].y; o.z += D[4].z;
            o.x -= B[4].x; o.y -= B[4].y; o.z -= B[4].z;
        }
        len = Len(&o);
        if (lbl_80366C78 != len) {
            Vec t;
            t.x = p->pos.x + o.x;
            t.y = p->pos.y + o.y;
            t.z = p->pos.z + o.z;
            Approach(&p->pos, &t, lbl_80366CE0, dt);
        }
    }
}

} /* extern "C" */
