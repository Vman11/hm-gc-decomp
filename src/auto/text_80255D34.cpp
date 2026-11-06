// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };

struct Tgt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void getPos(V3 *o, s32 a, s32 b, s32 c, s32 d);
};

struct Own {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void send(const char *msg, s32 a, s32 b, s32 c, s32 d);
    u8 pad4[0x188];
    Tgt *tgt; /* 0x18c */
};

struct Cam {
    u8 pad0[0x14];
    V3 a0, a1, a2;   /* 0x14 */
    u8 pad38[0x18];
    V3 eye;          /* 0x50 */
    V3 fwd;          /* 0x5c */
    V3 up;           /* 0x68 */
    V3 side;         /* 0x74 */
    V3 v80;          /* 0x80 */
    u8 pad8C[4];
    f32 f90;         /* 0x90 */
    f32 f94;         /* 0x94 */
    u8 pad98[4];
    Own *own;        /* 0x9c */
    u8 padA0[0x10];
    V3 pos;          /* 0xb0 */
    s32 hasPos;      /* 0xbc */
    s32 sent;        /* 0xc0 */
    s32 *follow;     /* 0xc4 */
    u8 padC8[4];
    f32 *rate;       /* 0xcc */
    f32 *lim1;       /* 0xd0 */
    f32 *lim2;       /* 0xd4 */
    f32 *thr;        /* 0xd8 */
    Tgt *tgt;        /* 0xdc */
    V3 ref;          /* 0xe0 */
    V3 ax1;          /* 0xec */
    V3 ax2;          /* 0xf8 */
};

void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
void fn_80101820(V3 *);
void fn_80100F24(V3 *, V3 *);
void fn_80101414(V3 *, V3 *, f32);
double fn_800F045C(double);
double fn_800F049C(double);

extern f32 lbl_80366628;
extern f64 lbl_80366630;
extern f32 lbl_80366638;
extern f32 lbl_8036663C;
extern f32 lbl_80366640;
extern f32 lbl_80366644;
extern f64 lbl_80366648;
extern f64 lbl_80366650;
extern f32 lbl_80366658;
extern char lbl_8036665C[4];
extern V3 lbl_80357E90;

static inline f32 Dot(const V3 *a, const V3 *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }

static inline f32 SAcos(f32 x) {
    if ((f32)__fabs(x) <= lbl_80366630) return fn_800F045C(x);
    if (x > lbl_80366628) return lbl_80366628;
    return lbl_80366638;
}

static inline f32 Sq(f32 x) {
    if (x > lbl_80366628) {
        const f64 _half = lbl_80366648;
        const f64 _three = lbl_80366650;
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

static inline void Cross(V3 *o, const V3 *a, const V3 *b) {
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}

void fn_80255D34(Cam *self, f32 dt) {
    V3 d;
    V3 pos;
    self->tgt = self->own->tgt;
    fn_802610A0(self);
    if (self->tgt) {
        self->tgt->getPos(&pos, 0, 0, 0, 0);
    } else if (self->hasPos) {
        pos.x = self->pos.x; pos.y = self->pos.y; pos.z = self->pos.z;
    } else {
        return;
    }
    self->eye.x = self->a0.x; self->eye.y = self->a0.y; self->eye.z = self->a0.z;
    self->fwd.x = self->a1.x; self->fwd.y = self->a1.y; self->fwd.z = self->a1.z;
    self->up.x = self->a2.x; self->up.y = self->a2.y; self->up.z = self->a2.z;
    d.x = pos.x - self->eye.x;
    d.y = pos.y - self->eye.y;
    d.z = pos.z - self->eye.z;
    fn_80101820(&d);
    self->v80.x = lbl_80366628;
    self->v80.y = lbl_80366628;
    self->v80.z = lbl_80366628;
    self->f94 = self->f90;
    if (self->lim1) {
        V3 v; v.x = d.x; v.y = d.y; v.z = d.z;
        fn_80100F24(&v, &self->ax1);
        fn_80101820(&v);
        f32 a = SAcos(Dot(&self->ref, &v));
        if (a > *self->lim1) {
            V3 c;
            Cross(&c, &self->ref, &v);
            if (Dot(&c, &self->ax1) > lbl_80366628) {
                fn_80101414(&d, &self->ax1, a - *self->lim1);
            } else {
                fn_80101414(&d, &self->ax1, *self->lim1 - a);
            }
        }
    }
    if (self->lim2) {
        V3 v; v.x = d.x; v.y = d.y; v.z = d.z;
        fn_80100F24(&v, &self->ax2);
        f32 a = SAcos(Dot(&self->ref, &v));
        if (a > *self->lim2) {
            V3 c;
            Cross(&c, &self->ref, &v);
            if (Dot(&c, &self->ax2) > lbl_80366628) {
                fn_80101414(&d, &self->ax2, a - *self->lim2);
            } else {
                fn_80101414(&d, &self->ax2, *self->lim2 - a);
            }
        }
    }
    if (Dot(&self->fwd, &d) < lbl_8036663C) {
        fn_80101414(&self->fwd, &self->up, lbl_80366640);
    }
    {
        f32 dx = d.x - self->fwd.x;
        f32 dy = d.y - self->fwd.y;
        f32 dz = d.z - self->fwd.z;
        f32 e = lbl_80366644 - (f32)fn_800F049C(-*self->rate * dt);
        self->fwd.x = e * dx + self->fwd.x;
        self->fwd.y = e * dy + self->fwd.y;
        self->fwd.z = e * dz + self->fwd.z;
    }
    if (*self->follow) {
        fn_80101820(&self->fwd);
        f32 dx = lbl_80357E90.x - self->up.x;
        f32 dy = lbl_80357E90.y - self->up.y;
        f32 dz = lbl_80357E90.z - self->up.z;
        f32 e = lbl_80366644 - (f32)fn_800F049C(-*self->rate * dt);
        self->up.x = e * dx + self->up.x;
        self->up.y = e * dy + self->up.y;
        self->up.z = e * dz + self->up.z;
        fn_80100F24(&self->up, &self->fwd);
        fn_80101820(&self->up);
    } else {
        fn_80100F24(&self->fwd, &self->up);
        fn_80101820(&self->fwd);
        fn_80100F24(&d, &self->up);
        fn_80101820(&d);
    }
    Cross(&self->side, &self->fwd, &self->up);
    {
        V3 *s = &self->side;
        f32 len = Sq(s->x * s->x + s->y * s->y + s->z * s->z);
        if (lbl_80366628 == len) {
            s->x = lbl_80366644;
            s->y = lbl_80366628;
            s->z = lbl_80366628;
        } else {
            f32 inv = lbl_80366644 / len;
            s->x *= inv;
            s->y *= inv;
            s->z *= inv;
        }
    }
    if (self->sent == 0) {
        f32 t = lbl_80366658;
        if (self->thr) t = *self->thr;
        if (Dot(&self->fwd, &d) > t) {
            self->own->send(lbl_8036665C, 0, 0, 0, 0);
            self->sent = 1;
        }
    }
    fn_8026102C(self);
}

} /* extern "C" */
