// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
typedef struct V3 { f32 x, y, z; } V3;
struct X156 { u8 pad[120]; void *f120; };
struct VO {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void v13(V3 *a, s32 b, s32 c, s32 d, s32 e);
    virtual void v14(V3 *a, s32 b, s32 c, s32 d, s32 e);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23();
    virtual void v24();
    u8 pad[152]; X156 *f156; u8 pad2[276 - 160]; s32 f276;
};
extern "C" {
typedef struct S5 { s32 a, b, c, d, e; } S5;
extern S5 lbl_8029A8B8;
extern S5 lbl_8029A8CC;
extern char lbl_80361BD4[8];
extern f32 lbl_80361BCC;
extern f32 lbl_80361BD0;
extern f32 lbl_80361BD8;
extern f32 lbl_80361C28;
extern f64 lbl_80361C30;
extern f32 lbl_80361BF4;
extern u32 lbl_8035B530;
typedef struct L { u8 pad[20]; s32 f20; } L;
extern L lbl_803575DC;
typedef struct O { u8 pad[48]; void *f48; } O;
typedef struct R0 { u8 pad[16]; u32 f16; } R0;
typedef struct R { R0 *f0; } R;
typedef struct G1 { u8 pad[188]; f32 f188; } G1;
typedef struct G { u8 pad[4]; G1 *f4; } G;
typedef struct W { u8 pad[12]; u32 f12; } W;
typedef struct T { u8 p0[192]; G *f192; u8 p196[28]; VO *f224; u8 p228[52]; f32 *f280; u8 p284[28]; s32 *f312; u8 p316[8]; s32 f324; u8 p328[4]; f32 *f332; u8 p336[12]; f32 *f348; f32 *f352; s32 f356; u8 p360[4]; s32 *f364; u8 p368[8]; f32 *f376; f32 *f380; u8 p384[24]; R *f408; R *f412; u8 p416[8]; f32 f424; f32 f428; f32 f432; u8 p436[4]; s32 f440; u8 p444[4]; s32 f448; u8 p452[4]; s32 f456; u32 f460; u32 f464; s32 f468; V3 f472; V3 f484; V3 f496; u32 *f508; u32 *f512; W *f516; O *f520; f32 f524; } T;
int rand(void);
s32 fn_800F6CD0(s32 a, char *t);
void fn_8023FA2C(T *self, O **p, S5 s);
void fn_8023F764(T *self, O **p, S5 s);
void fn_80240DBC(T *self, f32 v);
W *fn_80247AE4(L *l, s32 a);
W *fn_80240028(T *self);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
V3 *fn_80245F8C(W *w, s32 i);
void fn_80107F3C(void *, V3 *);

static inline int isZero(V3 *v) { return v->x == lbl_80361BD0 && v->y == lbl_80361BD0 && v->z == lbl_80361BD0; }
static inline bool canGo(T *s) { bool r = *s->f312 != 0; if (r) r = s->f224->f276 == 0; return r; }

static inline void acq(T *self) {
    if (fn_800F6CD0(self->f324, lbl_80361BD4) == 0) {
        S5 s;
        self->f520 = 0;
        s = lbl_8029A8B8;
        s.a = self->f324;
        fn_8023FA2C(self, &self->f520, s);
    }
}
static inline void acq2(T *self) { acq(self); }
static inline void rel(T *self) {
        if (self->f520 != 0) {
            S5 s;
            s = lbl_8029A8CC;
            s.a = self->f324;
            fn_8023F764(self, &self->f520, s);
            self->f520 = 0;
            fn_80240DBC(self, lbl_80361BCC);
        }
}
void fn_800A226C(T *self) {
    self->f456 = 1;
    self->f468 = 0;
    self->f448 = 0;
    if (isZero(&self->f472)) {
        self->f224->v13(&self->f472, 0, 0, 0, 0);
    } else {
        self->f224->v14(&self->f472, 0, 0, 0, 0);
    }
    if (canGo(self)) {
        self->f224->v23();
        acq2(self);
        if (*self->f364 != 0) {
            self->f524 = lbl_80361BD0;
        } else {
            s32 ri = rand() % 10000u;
            f32 t = lbl_80361BD8 * (f32)ri;
            f32 d = *self->f380 - *self->f376;
            t = d * t + *self->f376;
            self->f524 = t;
        }
        self->f440 = 1;
    } else {
        self->f224->v24();
        rel(self);
        self->f440 = 0;
    }
    if (fn_800F6CD0(self->f356, lbl_80361BD4) == 0 && lbl_803575DC.f20 != 0) {
        self->f516 = fn_80247AE4(&lbl_803575DC, self->f356);
    }
    if (self->f516 == 0) self->f516 = fn_80240028(self);
    self->f464 = self->f516->f12;
    if (self->f508 == 0) {
        if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        self->f508 = new u32[self->f464];
        fn_800F7E98();
        if (self->f508 == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        self->f512 = new u32[self->f464];
        fn_800F7E98();
        if (self->f512 == 0) fn_800604C4(-4, 0, 0, 0);
    }
    {
        G1 *g = self->f192->f4;
        if (self->f432 < lbl_80361BD0) {
            self->f432 = g->f188;
        } else {
            g->f188 = self->f432;
        }
    }
    if (self->f464 != 0) {
        V3 *a = fn_80245F8C(self->f516, 0);
        self->f484.x = a->x; self->f484.y = a->y; self->f484.z = a->z;
        a = fn_80245F8C(self->f516, self->f464 - 1);
        self->f496.x = a->x; self->f496.y = a->y; self->f496.z = a->z;
    }
    if (self->f408->f0->f16 < self->f460) self->f460 = self->f408->f0->f16;
    if (self->f412->f0->f16 < self->f460) self->f460 = self->f412->f0->f16;
    self->f424 = *self->f280;
    self->f428 = *self->f332;
    {
        u32 r = 0;
        u32 n = (u32)(lbl_80361C28 * (*self->f352 - *self->f348));
        V3 s;
        void *m;
        if (n) r = rand() % n;
        {
            f32 q = (f32)(s32)r / lbl_80361C30;
            f32 v = *self->f348 + q;
            s.z = s.y = s.x = lbl_80361BF4;
            s.x *= v; s.y *= v; s.z *= v;
        }
        m = self->f224->f156->f120;
        if (m) fn_80107F3C(m, &s);
    }
}

} /* extern "C" */
