// fn_80189BA4: NonMatching (GC/2.0p1), only FP reg swap x0(f7)/w(f9) left in rect setup; see hm-work/wA_80189BA4/STATUS.txt
#include "common.h"

extern "C" {

struct C4 { u8 r, g, b, a; };
struct Mat { u8 d[20]; };
struct Fx {
    u8 pad[4];
    u32 flags;   /* 4 */
    u8 pad2[8];
    C4 c0[4];    /* 16 */
    C4 c1[4];    /* 32 */
    C4 c2[4];    /* 48 */
    f32 d0;      /* 64 */
    f32 d1;      /* 68 */
    f32 z0;      /* 72 */
    f32 z1;      /* 76 */
    u8 pad3[8];
    f32 nx;      /* 88 */
    f32 ny;      /* 92 */
};
struct Cam { u8 pad[76]; f32 z; };
struct Ctx {
    u8 pad[32];
    s32 x0, y0, x1, y1;  /* 32 */
    u8 pad2[6400];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
    virtual Cam *GetCam(); /* 164 */
};
struct Shd { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void Get(Mat *); /* 24 */ };
struct W {
    u8 pad[112];
    Shd *shd;   /* 112 */
    u8 pad2[8];
    f32 z;      /* 124 */
    u8 pad3[16];
    f32 dx;     /* 144 */
    f32 dy;     /* 148 */
    u8 pad4[4];
    f32 ox;     /* 156 */
    f32 oy;     /* 160 */
    f32 w;      /* 164 */
    f32 h;      /* 168 */
    f32 cx;     /* 172 */
    f32 cy;     /* 176 */
    f32 m;      /* 180 */
    s32 res;    /* 184 */
};
void fn_80148310(Mat *);
void fn_80121298(C4 *, C4 *, C4 *, f32);
void fn_801217EC(C4 *, C4 *);
void fn_80121658(C4 *);
s32 fn_80147CD8(Mat *, C4 *);
extern f32 lbl_803649F8, lbl_803649FC, lbl_80364A00;
extern f64 lbl_80364A08, lbl_80364A10;

inline f32 Sq(f32 x)
{
    if (x > lbl_803649F8) {
        const f64 _half = lbl_80364A08;
        const f64 _three = lbl_80364A10;
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

void fn_80189BA4(Fx *fx, Ctx *c, W *w)
{
    Mat m;
    C4 col;
    C4 zc;
    f32 len, y0, x0;
    fn_80148310(&m);
    x0 = (f32)c->x0;
    y0 = (f32)c->y0;
    w->w = (f32)(c->x1 - c->x0);
    w->h = (f32)(c->y1 - c->y0);
    w->m = w->w;
    if (w->m < w->h) w->m = w->h;
    {
    f32 tx = lbl_80364A00 * (lbl_803649FC + w->dx) * w->w + x0;
    f32 ty = lbl_80364A00 * (lbl_803649FC + w->dy) * w->h + y0;
    w->cx = lbl_80364A00 * w->w + x0;
    w->cy = lbl_80364A00 * w->h + y0;
    w->ox = tx - w->cx;
    w->oy = ty - w->cy;
    }
    len = Sq(w->dx * w->dx + w->dy * w->dy);
    if (fx->flags & 1) {
        if (len <= fx->d0) fn_80121298(&col, fx->c0, fx->c1, len / fx->d0);
        else if (len <= fx->d1) fn_80121298(&col, fx->c1, fx->c2, (len - fx->d0) / (fx->d1 - fx->d0));
        else fn_801217EC(&col, fx->c2);
    } else {
        fn_80121658(&col);
    }
    if (fx->flags & 2) {
        Cam *cam = c->GetCam(); f32 d = w->z - cam->z;
        if (d <= fx->z0) fn_80121298(&zc, fx->c0, fx->c1, d / fx->z0);
        else if (d <= fx->z1) fn_80121298(&zc, fx->c1, fx->c2, (d - fx->z0) / (fx->z1 - fx->z0));
        else fn_801217EC(&zc, fx->c2);
        col.r = (u32)(zc.r * (col.r + 1)) >> 8;
        col.g = (u32)(zc.g * (col.g + 1)) >> 8;
        col.b = (u32)(zc.b * (col.b + 1)) >> 8;
        col.a = (u32)(zc.a * (col.a + 1)) >> 8;
    }
    w->shd->Get(&m);
    w->res = fn_80147CD8(&m, &col);
    if (lbl_803649F8 != len) {
        f32 inv = lbl_803649FC / len;
        fx->nx = w->dx * inv;
        fx->ny = w->dy * inv;
    }
}

} /* extern "C" */
