#include "common.h"

extern "C" {

struct Vec { f32 x, y, z; };
struct Sph { Vec c; f32 r; };
struct Snd {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void play(const char *, int, int, int, int);
};
struct Obj {
    u8 pad0[0x14];
    Vec pos;      /* 0x14 */
    f32 m[12];    /* 0x20 */
    Vec vel;      /* 0x50 */
    Vec ax;       /* 0x5c */
    Vec ay;       /* 0x68 */
    Vec az;       /* 0x74 */
    Vec at;       /* 0x80 */
    u8 pad8c[4];
    f32 f90;      /* 0x90 */
    f32 f94;      /* 0x94 */
    u8 pad98[4];
    Snd *snd;     /* 0x9c */
    u8 padA0[0x1b0 - 0xa0];
    f32 *volatile pts;     /* 0x1b0 */
};
extern f32 lbl_8035E758;
inline void vmadd(Vec *d, f32 s, const Vec *v) { d->x = s * v->x + d->x; d->y = s * v->y + d->y; d->z = s * v->z + d->z; }
extern volatile f32 lbl_8035E75C;
extern volatile f32 lbl_8035E760;
extern f32 lbl_8035E764;
extern char lbl_8035E768[7];
void fn_80100CF4(Sph *);
void fn_802610A0(Obj *);
void fn_8026102C(Obj *);
f32 fn_80101590(Vec *, Vec *);
void fn_80264AC0(int, Vec *, Vec *, Sph *, int *, Vec *, void *, void *, void *, void *, int, int, int, int, int, int, int, int);
int fn_80264E0C(Vec *, Vec *, Vec *, void *, void *, void *, void *, int, int, int, int, int, int, int, int);

static inline void vadd(Vec *d, const Vec *v) { d->x = d->x + v->x; d->y = d->y + v->y; d->z = d->z + v->z; }
static inline void vmp(Vec *d, Obj *o, unsigned int j, const Vec *v) { f32 *q = o->pts; f32 k = lbl_8035E75C; vmadd(d, k * q[j], v); }
void fn_80066714(Obj *o, Vec *a, Vec *b) {
    Vec A[6];
    Vec B[6];
    Vec out[6];
    Vec s172[6];
    int hits[6];
    u8 s124[24];
    u8 s100[24];
    u8 s76[24];
    Sph sph;
    Vec t;
    Vec *pa;
    Vec *pb;
    unsigned int i;
    int moved;
    f32 s;

    fn_80100CF4(&sph);
    sph.c.x = lbl_8035E758;
    sph.c.y = lbl_8035E758;
    sph.c.z = lbl_8035E758;
    sph.r = lbl_8035E758;
    fn_802610A0(o);
    o->pos.x = a->x; o->pos.y = a->y; o->pos.z = a->z;
    o->vel.x = b->x; o->vel.y = b->y; o->vel.z = b->z;
    o->ax.x = o->m[0]; o->ax.y = o->m[1]; o->ax.z = o->m[2];
    o->ay.x = o->m[3]; o->ay.y = o->m[4]; o->ay.z = o->m[5];
    o->az.x = o->m[6]; o->az.y = o->m[7]; o->az.z = o->m[8];
    o->at.x = o->m[9]; o->at.y = o->m[10]; o->at.z = o->m[11];
    o->f94 = o->f90;

    t = o->pos;
    {
        f32 *p = o->pts;
        f32 k = lbl_8035E75C;
        vmadd(&t, p[0] * k, &o->ax);
        vmadd(&t, ((volatile f32 *)p)[1] * lbl_8035E760, &o->ay);
        vmadd(&t, p[2] * k, &o->az);
    }

    for (i = 0; i < 6; i++) {
        A[i] = t;
        B[i] = o->vel;
        vmp(&B[i], o, 3 + i * 3, &o->ax);
        if (i != 0) {
            vmp(&B[i], o, 4 + i * 3, &o->ay);
        }
        vmp(&B[i], o, 5 + i * 3, &o->az);
        vadd(&sph.c, &A[i]);
        vadd(&sph.c, &B[i]);
    }
    sph.c.x *= lbl_8035E764; sph.c.y *= lbl_8035E764; sph.c.z *= lbl_8035E764;
    for (i = 0; i < 6; i++) {
        f32 d = fn_80101590(&A[i], &sph.c);
        sph.r = sph.r > d ? sph.r : d;
        d = fn_80101590(&B[i], &sph.c);
        sph.r = sph.r > d ? sph.r : d;
    }
    fn_80264AC0(6, A, B, &sph, hits, out, s172, s124, s100, s76, 0, 0, 0, 0, 0, 0, 0, 1);
    moved = 0;
    for (i = 0; i < 6; i++) {
        if (hits[i]) {
            moved = 1;
            f32 dx = out[i].x; f32 dy = out[i].y; f32 dz = out[i].z;
            dx -= B[i].x; dy -= B[i].y; dz -= B[i].z;
            o->vel.x += dx;
            o->vel.y += dy;
            o->vel.z += dz;
        }
    }
    if (moved) o->snd->play(lbl_8035E768, 0, 0, 0, 0);

    t = o->pos;
    {
        f32 *p = o->pts;
        f32 k = lbl_8035E75C;
        vmadd(&t, p[0] * k, &o->ax);
        vmadd(&t, p[1] * k, &o->ay);
        vmadd(&t, p[2] * k, &o->az);
        B[0] = o->vel;
        vmadd(&B[0], p[0] * k, &o->ax);
        vmadd(&B[0], p[1] * k, &o->ay);
        vmadd(&B[0], p[2] * k, &o->az);
    }
    hits[0] = fn_80264E0C(&t, B, out, s172, s124, s100, s76, 0, 0, 0, 0, 0, 0, 0, 1);
    if (hits[0]) o->vel = o->pos;
    fn_8026102C(o);
}

} /* extern "C" */
