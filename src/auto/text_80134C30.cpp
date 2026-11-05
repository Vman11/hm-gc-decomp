#include "common.h"

extern "C" {

typedef struct V3 { f32 x, y, z; } V3;
typedef struct Sph { f32 x, y, z, r; } Sph;
struct Fmt { u8 pad[0x1c]; };
struct Lock { u32 ptr; u32 stride; u8 pad[0x6c]; };
struct Obj;
struct In;
struct Fac { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void lockVB(Fmt *, u32, Lock *); virtual void unlockVB(u32); virtual void p7(); virtual void p8(); virtual void lockIB(u32, u16 **); virtual void unlockIB(u32); virtual void draw(Obj *, void *, int, u8 *); };
struct In { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual Fac *fac(); };
struct Obj { In *in; };
void fn_8014CA08(Fmt *);
void fn_8014C8C8(Fmt *, u32, u32, u32);
double fn_800EFDA4(double);
double fn_800F030C(double);
extern f32 lbl_803640E8;
extern f32 lbl_803640EC;
extern f32 lbl_803640F0;

void fn_80134C30(Obj *obj, Sph *s, void *arg, u32 rings, u32 segs, u8 flag) {
    Fmt fmt;
    Lock lk;
    u16 *idx;
    Fac *f;
    u32 nv, nidx, vi, i, k;
    f32 cx, r, cz, cy, phi, step;
    fn_8014CA08(&fmt);
    idx = 0;
    k = 0;
    nidx = segs * 6;
    nv = segs * rings + 2;
    if (rings > 1) nidx += segs * (rings - 1) * 6;
    fn_8014C8C8(&fmt, 0x8080, 0, 1);
    f = obj->in->fac();
    f->lockVB(&fmt, nv, &lk);
    f->lockIB(nidx, &idx);
    {
        V3 *v = (V3 *)lk.ptr;
        cx = s->x;
        cz = s->z;
        r = s->r;
        v->x = cx;
        cy = s->y;
        v->y = cy;
        v->z = cz + r;
    }
    lk.ptr += lk.stride;
    i = 0;
    vi = 1;
    step = lbl_803640E8 / (f32)(rings + 1);
    for (; i < rings; i++) {
        phi = lbl_803640EC - (f32)(i + 1) * step;
        u32 j;
        for (j = 0; j < segs; j++) {
            f32 th = lbl_803640F0 * (f32)j / (f32)segs;
            f32 x = r * (f32)fn_800EFDA4(phi) * (f32)fn_800EFDA4(th) + cx;
            f32 y = r * (f32)fn_800EFDA4(phi) * (f32)fn_800F030C(th) + cy;
            f32 z = r * (f32)fn_800F030C(phi) + cz;
            V3 *v = (V3 *)lk.ptr;
            v->x = x;
            v->y = y;
            v->z = z;
            lk.ptr += lk.stride;
            vi++;
        }
        if (i == 0) {
            for (j = 0; j < segs; j++) {
                if (j == segs - 1) {
                    *idx++ = 0;
                    *idx++ = 1;
                    *idx++ = j + 1;
                } else {
                    *idx++ = 0;
                    *idx++ = j + 2;
                    *idx++ = j + 1;
                }
            }
            k = vi;
        } else {
            for (j = 0; j < segs; j++) {
                if (j == segs - 1) {
                    *idx++ = k - segs;
                    *idx++ = k;
                    *idx++ = k - 1;
                    *idx++ = k - 1;
                    *idx++ = k;
                    *idx++ = k + j;
                } else {
                    *idx++ = k + j - segs + 1;
                    *idx++ = k + j + 1;
                    *idx++ = k + j - segs;
                    *idx++ = k + j - segs;
                    *idx++ = k + j + 1;
                    *idx++ = k + j;
                }
            }
            k = vi;
        }
    }
    k -= segs;
    {
        V3 *v = (V3 *)lk.ptr;
        f32 ex = s->x, ez = s->z, er = s->r;
        v->x = ex;
        v->y = s->y;
        v->z = ez - er;
    }
    lk.ptr += lk.stride;
    {
        u32 j;
        for (j = 0; j < segs; j++) {
            if (j == segs - 1) {
                *idx++ = vi;
                *idx++ = j + k;
                *idx++ = k;
            } else {
                u32 a = j + k;
                *idx++ = vi;
                *idx++ = a;
                *idx++ = a + 1;
            }
        }
    }
    f->unlockIB(nidx);
    f->unlockVB(nv);
    f->draw(obj, arg, 1, &flag);
}

}
