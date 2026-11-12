#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
};
struct Own {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void msg(const char *, int, int, int, int);
    u8 pad4[0x18c - 4];
    OB *o18c;
    u8 pad190[0x238 - 0x190];
    s32 i238;
};
struct St { V3 pos, fwd, up, a, vel; };
struct Cam {
    u8 pad0[0x14];
    St s0;
    St s1;
    u8 pad8c[0x9c - 0x8c];
    Own *own;
    u8 pada0[4];
    s32 *pa4;
    u8 pada8[8];
    f32 *pb0;
    f32 *pb4;
    u8 padb8[4];
    f32 fbc;
    u8 padc0[0xd0 - 0xc0];
    s32 *pd0;
    V3 tgt;
    s32 ie0;
    u8 pade4[0xf8 - 0xe4];
    f32 *pf8;
    V3 fixed;
    s32 i108;
    f32 ang;
    f32 t110;
    f32 f114, f118, f11c;
    f32 *p120;
    s32 *p124;
    f32 *p128;
    s32 *p12c;
};
extern V3 lbl_80357E90;
extern f32 lbl_80366710;
extern f32 lbl_80366718;
extern f32 lbl_8036671C;
extern f64 lbl_80366728;
extern f32 lbl_80366730;
extern char lbl_80366734[8];
extern f32 lbl_8036673C;
extern f32 lbl_80366740;
extern f64 lbl_80366748;
extern f64 lbl_80366750;
extern f32 lbl_80366758;
extern char lbl_802A9A28[];
void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
void fn_80266AD0(Cam *, f32);
void fn_80100E24(V3 *, V3 *, V3 *);
void fn_80101820(V3 *);
void fn_80100F24(V3 *, V3 *);
void fn_801012C0(V3 *, V3 *, V3 *, f32);
f64 fn_800F045C(f64);
f64 fn_800F049C(f64);

static inline f32 sq(f32 x) {
    if (x > lbl_80366710) {
        const f64 _half = lbl_80366748;
        const f64 _three = lbl_80366750;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline f32 sacos(f32 x) {
    if ((f32)__fabs(x) <= lbl_80366728) return (f32)fn_800F045C(x);
    if (x > lbl_80366710) return lbl_80366710;
    return lbl_80366730;
}
static inline bool flip(f32 a, f32 b) { return (a < lbl_80366710 && b > lbl_80366710) || (a > lbl_80366710 && b < lbl_80366710); }
static inline V3 CrossV(V3 a, V3 b) {
    V3 o;
    o.x = a.y * b.z - a.z * b.y;
    o.y = a.z * b.x - a.x * b.z;
    o.z = a.x * b.y - a.y * b.x;
    return o;
}
static inline f32 DotV(V3 a, V3 b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
static inline void cp(V3 *d, V3 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }
static inline int inbox(V3 *d, f32 *lp) {
    bool r = false;
    f32 l, x; x = d->x; l = *lp;
    if (x >= -l && x <= l && d->y >= -l && d->y <= l && d->z >= -l && d->z <= l) r = true;
    return r;
}
#define SPEED() \
    len = sq(c->s0.vel.x * c->s0.vel.x + c->s0.vel.y * c->s0.vel.y + c->s0.vel.z * c->s0.vel.z); \
    spd = len; \
    { f32 want = c->fbc; \
    if (c->pb0) { \
        dd = want - len; \
        kq = *c->pb0; \
        if ((f32)__fabs(dd) > lbl_80366710) { f32 e = lbl_80366718 - (f32)fn_800F049C(-kq * dt); spd = e * dd + len; } \
    } else { \
        dd = want - len; \
        if ((f32)__fabs(dd) > lbl_80366710) { f32 e = lbl_80366718 - (f32)fn_800F049C(lbl_80366758 * dt); spd = e * dd + len; } \
    } }

static inline V3 &UpV() { return lbl_80357E90; }
static inline V3 *UpP() { return &lbl_80357E90; }
static inline f32 UpX() { return lbl_80357E90.x; }
static inline f32 UpY() { return lbl_80357E90.y; }
static inline f32 UpZ() { return lbl_80357E90.z; }
#pragma opt_propagation off
void fn_80257A98(Cam *c, f32 dt) {
    V3 tgt, r, d, n;
    f32 kq, dd, len, spd;
    f32 ang;
    fn_802610A0(c);
    cp(&c->s1.pos, &c->s0.pos);
    cp(&c->s1.fwd, &c->s0.fwd);
    cp(&c->s1.up, &c->s0.up);
    cp(&c->s1.a, &c->s0.a);
    cp(&c->s1.vel, &c->s0.vel);
    OB *o = c->own->o18c;
    if (o) {
        o->s13(&tgt, 0, 0, 0, 0);
    } else if (c->i108) {
        tgt = c->fixed;
    } else {
        return;
    }
    d.x = tgt.x - c->s0.pos.x;
    d.y = tgt.y - c->s0.pos.y;
    d.z = tgt.z - c->s0.pos.z;
    fn_80100E24(&n, &d, &c->s0.up);
    fn_80101820(&n);
    f32 dot = n.x * c->s0.fwd.x + n.y * c->s0.fwd.y + n.z * c->s0.fwd.z;
    ang = sacos(dot);
    {
        
        if ((c->s0.fwd.y * d.z - c->s0.fwd.z * d.y) * UpV().x + (c->s0.fwd.z * d.x - c->s0.fwd.x * d.z) * UpV().y + (c->s0.fwd.x * d.y - c->s0.fwd.y * d.x) * UpV().z > lbl_80366710) ang = -ang;
    }
    if ((c->ang < 0.0f && ang > 0.0f) || (c->ang > 0.0f && ang < 0.0f))
        c->own->msg(lbl_80366734, 0, 0, 0, 0);
    if (c->ie0) {
        *(volatile f32 *)&r.x = c->s0.fwd.x; *(volatile f32 *)&r.y = c->s0.fwd.y; *(volatile f32 *)&r.z = c->s0.fwd.z;
        c->t110 = *(volatile f32 *)&lbl_8036673C;
    } else {
        if (c->t110 > lbl_80366710) {
            c->t110 = c->t110 - dt;
            f32 t = c->t110;
            if (t < lbl_80366710) c->t110 = lbl_80366710;
        }
        if (lbl_80366710 == c->t110) {
            fn_801012C0(&r, &c->s0.up, &c->s0.fwd, ang);
            if (c->p128) {
                c->f11c = dt * c->f114 + c->f11c;
                { f32 t = c->f11c; if (t > lbl_80366718) { c->f11c = lbl_80366718; c->f114 = lbl_8036671C; } }
                { f32 t = c->f11c; if (t < lbl_8036671C) { c->f11c = lbl_8036671C; c->f114 = lbl_80366718; } }
                fn_801012C0(&r, &c->s0.up, &r, *c->p128 * (c->f11c * c->f118));
            }
        } else if ((c->ang < lbl_80366710 && ang > lbl_80366710) || (c->ang > 0.0f && ang < 0.0f)) {
            fn_801012C0(&r, &c->s0.up, &c->s0.fwd, ang);
        } else {
            cp(&r, &c->s0.fwd);
        }
    }
    c->ang = ang;
    f32 k = c->pf8 ? *c->pf8 : *c->pb4;
    f32 rate;
    {
        f32 dx, dy, dz, e; dx = r.x - c->s1.fwd.x; dy = r.y - c->s1.fwd.y; dz = r.z - c->s1.fwd.z;
        rate = -k * dt;
        e = lbl_80366718 - (f32)fn_800F049C(rate);
        c->s1.fwd.x = e * dx + c->s1.fwd.x;
        c->s1.fwd.y = e * dy + c->s1.fwd.y;
        c->s1.fwd.z = e * dz + c->s1.fwd.z;
    }
    if (c->pa4 && *c->pa4) {
        if (c->pd0 && *c->pd0) {
            f32 dx = lbl_80357E90.x - c->s1.up.x, dy = lbl_80357E90.y - c->s1.up.y, dz = lbl_80357E90.z - c->s1.up.z;
            f32 e = lbl_80366718 - (f32)fn_800F049C(lbl_80366740 * dt);
            c->s1.up.x = e * dx + c->s1.up.x;
            c->s1.up.y = e * dy + c->s1.up.y;
            c->s1.up.z = e * dz + c->s1.up.z;
            fn_80101820(&c->s1.up);
            fn_80100F24(&c->s1.fwd, &c->s1.up);
            fn_80101820(&c->s1.fwd);
        } else {
            fn_80101820(&c->s1.fwd);
            fn_80100F24(&c->s1.up, &c->s1.fwd);
            fn_80101820(&c->s1.up);
        }
        c->s1.a.x = c->s1.fwd.y * c->s1.up.z - c->s1.fwd.z * c->s1.up.y;
        c->s1.a.y = c->s1.fwd.z * c->s1.up.x - c->s1.fwd.x * c->s1.up.z;
        c->s1.a.z = c->s1.fwd.x * c->s1.up.y - c->s1.fwd.y * c->s1.up.x;
        fn_80101820(&c->s1.a);
    }
    if (c->pa4 == 0 || *c->pa4 == 0) {
        if (c->own->i238) {
            f32 z = c->s1.vel.z;
            SPEED();
            c->s1.vel.x = c->s1.fwd.x * spd;
            c->s1.vel.y = c->s1.fwd.y * spd;
            c->s1.vel.z = c->s1.fwd.z * spd;
            c->s1.vel.z = z;
        }
    } else {
        fn_80101820(&d);
        f32 l = sq(c->s1.vel.x * c->s1.vel.x + c->s1.vel.y * c->s1.vel.y + c->s1.vel.z * c->s1.vel.z);
        if (lbl_80366710 == l) cp(&c->s1.vel, &c->s1.fwd);
        else fn_80101820(&c->s1.vel);
        { f32 spd, dd;
        {
            f32 dy, dz;
            dd = d.x - c->s1.vel.x; dy = d.y - c->s1.vel.y; dz = d.z - c->s1.vel.z;
            f32 e = lbl_80366718 - (f32)fn_800F049C(rate);
            c->s1.vel.x = e * dd + c->s1.vel.x;
            c->s1.vel.y = e * dy + c->s1.vel.y;
            c->s1.vel.z = e * dz + c->s1.vel.z;
        }
        fn_80101820(&c->s1.vel);
        {
        SPEED();
        c->s1.vel.x = c->s1.vel.x * spd;
        c->s1.vel.y = c->s1.vel.y * spd;
        c->s1.vel.z = c->s1.vel.z * spd;
        }
        }
        if (c->p12c && *c->p12c) fn_80100F24(&c->s1.vel, &lbl_80357E90);
    }
    c->s1.pos.x = dt * c->s1.vel.x + c->s1.pos.x;
    c->s1.pos.y = dt * c->s1.vel.y + c->s1.pos.y;
    c->s1.pos.z = dt * c->s1.vel.z + c->s1.pos.z;
    cp(&c->tgt, &tgt);
    if (c->pa4 == 0 || *c->pa4 == 0) fn_80266AD0(c, dt);
    d.x = tgt.x - c->s1.pos.x;
    d.y = tgt.y - c->s1.pos.y;
    d.z = tgt.z - c->s1.pos.z;
    if (inbox(&d, c->p120) && *c->p124) {
        cp(&c->s1.pos, &tgt);
        c->s1.vel.x = lbl_80366710;
        c->s1.vel.y = lbl_80366710;
        c->s1.vel.z = lbl_80366710;
    }
    fn_8026102C(c);
    if (inbox(&d, c->p120)) c->own->msg(lbl_802A9A28, 0, 0, 0, 0);
}

} /* extern "C" */
