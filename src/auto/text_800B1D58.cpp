// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// fn_800B1D58: NonMatching draft, 4 diff lines (one stfs in the e *= s length block is scheduled one slot
// early). Same TU as text_800B1844/text_800B21A0 (shared .sdata2 80362F7C..80362FB8: the int->float magic
// lbl_80362F98 comes out as a compiler literal here); T and VO are supersets of text_800B1844's
// (extra fields only in its padding).
#include "common.h"

extern "C" {

} /* extern "C" */
typedef struct V3 { f32 x, y, z; } V3;
struct VO {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void v13(V3 *a, V3 *b, V3 *c, V3 *d, s32 e);
    virtual void v14(V3 *a, V3 *b, V3 *c, V3 *d, s32 e);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23();
    virtual void v24();
    u8 pad4[276];
    V3 f280;
    u8 pad292[48];
    f32 f340;
};
extern "C" {
struct FT { u8 pad[12]; void (*f12)(void *, V3 *); };
extern FT lbl_803286D0;
extern u32 lbl_80362F7C;
extern f32 lbl_80362F80;
extern f32 lbl_80362F84;
extern f32 lbl_80362F88;
extern f32 lbl_80362F8C;
extern f32 lbl_80362F90;
extern f32 lbl_80362FA0;
extern f32 lbl_80362FA4;
extern f64 lbl_80362FA8;
extern f64 lbl_80362FB0;
typedef struct Q { u8 pad[16]; void *f16; u8 pad2[12]; u32 f32_; } Q;
typedef struct O { u8 pad[48]; Q *f48; } O;
typedef struct A276 { O *f0; u8 pad[8]; s32 f12; s32 f16; f32 f20; f32 f24; f32 f28; } A276;
typedef struct X { u32 f0; u8 pad[44]; u32 f48; } X;
typedef struct T {
    u8 pad0[96]; s32 f96; u8 p1[224 - 100]; VO *f224; u8 p2[276 - 228]; A276 *f276; s32 *f280; f32 *f284;
    u8 p3[296 - 288]; f32 *f296; f32 *f300; f32 *f304; f32 *f308; f32 *f312; f32 *f316; u8 p4[324 - 320];
    s32 *f324; s32 *f328; s32 f332; f32 *f336; u8 p5[352 - 340]; f32 *f352; f32 *f356;
    V3 f360; s32 f372; f32 f376; s32 f380; u8 p6[4]; s32 f388;
} T;
typedef struct G72 { u8 pad[72]; VO *f72; } G72;
extern G72 *lbl_8035B308;
void fn_80241628(T *p, s32 a, s32 b);
void fn_80101820(V3 *v);
void fn_80101414(V3 *v, V3 *axis, f32 a);

static inline f32 Sq(f32 x) {
    if (x > *(volatile f32 *)&lbl_80362F88) {
        const f64 _half = lbl_80362FA8;
        const f64 _three = lbl_80362FB0;
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

static inline void Set(V3 *o, const V3 *a) {
    o->x = a->x;
    o->y = a->y;
    o->z = a->z;
}

static inline void SetV(V3 *o, const V3 *a) {
    *(volatile f32 *)&o->x = a->x;
    *(volatile f32 *)&o->y = a->y;
    *(volatile f32 *)&o->z = a->z;
}



static inline f32 MagS(f32 x, f32 y, f32 z) {
    f32 xx = x * x, yy = y * y, zz = z * z;
    return Sq(zz + (xx + yy));
}
static inline f32 SubM(V3 *o, const V3 *a, const V3 *b) {
    f32 x = a->x - b->x;
    f32 y = a->y - b->y;
    f32 z = a->z - b->z;
    *(volatile f32 *)&o->x = x;
    *(volatile f32 *)&o->y = y;
    *(volatile f32 *)&o->z = z;
    f32 xx = x * x, yy = y * y, zz = z * z;
    return Sq(zz + (xx + yy));
}
static inline f32 Mag(const V3 *v) {
    f32 x = v->x, y = v->y, z = v->z;
    f32 xx = x * x, yy = y * y, zz = z * z;
    return Sq(zz + (xx + yy));
}

s32 fn_800B1D58(T *p) {
    V3 a;
    V3 b;
    V3 d;
    V3 c;
    V3 e;
    V3 h;
    V3 g;
    f32 dz;
    f32 s;
    lbl_8035B308->f72->v13(&a, 0, 0, 0, 0);
    p->f224->v13(&b, 0, 0, 0, 0);
    dz = b.z - a.z;
    if (dz >= *p->f304 && dz <= *p->f304 + *p->f300) {
        {
        a.z = b.z;
        f32 m = SubM(&d, &b, &a);
        if (m <= *p->f296) {

            VO *o = lbl_8035B308->f72;
            SetV(&c, &o->f280);
            {
            f32 spd = Mag(&c);
            s = spd * *p->f308;
            }
            if (s > *p->f312) s = *p->f312;
            if (s > lbl_80362F88) {
                Set(&e, &d);
                e.z = lbl_80362F88;
                fn_80101820(&e);
                {
                f32 ux, uy, vz, vy, vx, k;
                ux = *(f32 *)&lbl_80362F88;
                uy = lbl_80362F88;
                vy = e.y;
                *(volatile f32 *)&h.x = ux;
                vz = e.z;
                *(volatile f32 *)&h.y = uy;
                vx = *(volatile f32 *)&e.x;
                k = lbl_80362FA4;
                h.z = k;
                g.x = vy * k - vz * uy;
                g.y = vz * ux - vx * k;
                g.z = vx * uy - vy * ux;
                }
                fn_80101820(&g);
                h.x = g.y * e.z - g.z * e.y;
                h.y = g.z * e.x - g.x * e.z;
                h.z = g.x * e.y - g.y * e.x;
                fn_80101820(&h);
                fn_80101414(&e, &g, -(lbl_80362FA0 * *p->f316));
                fn_80241628(p, 1, 0);
                {
                    f32 l;
                    {
                    f32 x0 = *(volatile f32 *)&e.x;
                    f32 y0 = *(volatile f32 *)&e.y;
                    f32 z0 = *(volatile f32 *)&e.z;
                    f32 xxs = x0 * s;
                    f32 zzs = z0 * s;
                    f32 yys = y0 * s;
                    *(volatile f32 *)&e.x = xxs;
                    *(volatile f32 *)&e.y = yys;
                    *(volatile f32 *)&e.z = zzs;
                    l = MagS(xxs, yys, zzs);
                    }

                    VO *m = p->f224;
                    Set(&m->f280, &e);
                    m->f340 = l;
                }
                c.z = lbl_80362F88;
                fn_80101820(&c);
                d.z = lbl_80362F88;
                fn_80101820(&d);
                p->f376 = (c.x * d.y - c.y * d.x >= lbl_80362F88) ? 1 : -1;
                p->f376 *= s;
                return 1;
            }
        }
        }
    }
    return 0;
}

} /* extern "C" */
