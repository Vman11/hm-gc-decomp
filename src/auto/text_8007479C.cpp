#include "common.h"
extern "C" {
struct V3 { f32 x, y, z; };
struct FT { u8 pad[0x130]; void (*f130)(void *, V3 *); };
extern FT lbl_803286D0;
extern f32 lbl_8035F4A8, lbl_8035F3EC, lbl_8035F54C, lbl_8035F550, lbl_8035F45C, lbl_8035F490;
extern const f64 lbl_8035F4D0, lbl_8035F4D8;
struct O { u8 pad[0x1c]; u32 n; u8 pad2[4]; u8 *a; u8 *b; };
struct OA { u8 pad[0xa8]; O *o; };
struct Y { u8 pad[0x10]; void *f10; };
struct Z { u8 pad[0x30]; Y *y; };
struct OV { u8 pad[0x1930];
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(void *, s32, s32); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
  virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
  virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
  virtual void v60(); virtual void v61(); virtual void v62(); };
struct W30 { u8 pad[0x30]; virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(s32); };
struct P { u8 pad[0x9c]; void *f9c; OA *fa0; u8 pad2[0x428 - 0xa4]; Z *f428; u8 pad3[0x5ec - 0x42c]; s32 f5ec; u8 pad4[0xc]; OV *f5fc; void *f600; V3 eye; V3 dir; };
void fn_80107244(void *, V3 *);
void fn_80101820(V3 *);
void fn_80129710(void *, V3 *, V3 *, V3 *);
void *fn_801955D8(void *);
void fn_801A0CBC(void *, OV *);

static inline f32 Sqrtf(f32 x) {
    if (x > lbl_8035F3EC) {
        const f64 _half = lbl_8035F4D0;
        const f64 _three = lbl_8035F4D8;
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
static inline void Cross(V3 *o, V3 *a, V3 *b) {
    f32 x = a->y * b->z - a->z * b->y;
    f32 y = a->z * b->x - a->x * b->z;
    f32 z = a->x * b->y - a->y * b->x;
    o->x = x; o->y = y; o->z = z;
}
static inline void Cross2(V3 *o, V3 *a, V3 *b) {
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}
static inline void Norm2(V3 *v) {
    f32 xx = v->x * v->x;
    f32 yy = v->y * v->y;
    f32 zz = v->z * v->z;
    f32 len = Sqrtf(xx + yy + zz);
    if (lbl_8035F3EC == len) {
        v->x = lbl_8035F490; v->y = lbl_8035F3EC; v->z = lbl_8035F3EC;
    } else {
        f32 inv = lbl_8035F490 / len;
        v->x *= inv; v->y *= inv; v->z *= inv;
    }
}
static inline void Norm(V3 *v) {
    f32 len = Sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    if (lbl_8035F3EC == len) {
        v->x = lbl_8035F490; v->y = lbl_8035F3EC; v->z = lbl_8035F3EC;
    } else {
        f32 inv = lbl_8035F490 / len;
        v->x *= inv; v->y *= inv; v->z *= inv;
    }
}

void fn_8007479C(P *p) {
    V3 s;
    V3 up;
    V3 u;
    V3 pos;
    O *o = p->fa0->o;
    Y *y;
    fn_80107244(o->n > 1 ? o->a + 0x28 : o->b + (1 - o->n) * 0x34, &pos);
    pos.z -= lbl_8035F4A8;
    y = p->f428->y;
    if (y) {
        lbl_803286D0.f130(y->f10, &p->eye);
    } else {
        p->eye.x = lbl_8035F3EC;
        p->eye.y = lbl_8035F3EC;
        p->eye.z = lbl_8035F3EC;
    }
    p->eye.z = lbl_8035F54C + pos.z;
    p->dir.x = p->eye.x - pos.x;
    p->dir.y = p->eye.y - pos.y;
    p->dir.z = p->eye.z - pos.z;
    fn_80101820(&p->dir);
    p->eye.x = lbl_8035F550 * p->dir.x + pos.x;
    p->eye.y = lbl_8035F550 * p->dir.y + pos.y;
    p->eye.z = lbl_8035F550 * p->dir.z + pos.z;
    up.x = lbl_8035F3EC;
    up.y = lbl_8035F3EC;
    up.z = lbl_8035F45C;
    Cross(&s, &up, &p->dir);
    Norm(&s);
    Cross2(&u, &p->dir, &s);
    Norm2(&u);
    fn_80129710(p->f600, &p->eye, &pos, &u);
    p->f5fc->v3(p->f600, 7, 0);
    fn_801A0CBC(fn_801955D8(p->f9c), p->f5fc);
    (*(W30 **)p->f5fc)->w3(0x80);
    p->f5fc->v62();
    p->f5ec = 1;
}
}
