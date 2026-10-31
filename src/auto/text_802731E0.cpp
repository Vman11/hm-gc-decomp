// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) : x(a), y(b), z(c) {} };
struct Sub {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void f60(V3 *, s32, s32, s32, s32);
};
struct Own { u8 pad[396]; Sub *sub; };
struct DbgN { u8 pad[4]; s32 on; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void f52();
    u8 pad4[76];
    V3 pos;   /* 80 */
    V3 v;     /* 92 */
    V3 u;     /* 104 */
    V3 w;     /* 116 */
    u8 pad128[28];
    Own *own; /* 156 */
    u8 pad160[20];
    f32 *ang; /* 180 */
    u8 pad184[16];
    f32 **src; /* 200 */
};
void fn_802610A0(Obj *);
void fn_8026102C(Obj *);
void fn_80256F8C(Obj *, f32);
f32 fn_80101664(V3 *);
void fn_80101820(V3 *);
double fn_800EFA20(double);
DbgN *fn_800F8274(void *, const char *);
s32 fn_80253664(DbgN *, s32);
extern V3 lbl_80357E90, lbl_80357AF8, lbl_80357AEC, lbl_80357B10;
#pragma explicit_zero_data on
__declspec(section ".sdata2") f32 lbl_80366FC8 = 2.0f;
__declspec(section ".sdata2") f32 lbl_80366FCC = 1.0f;
__declspec(section ".sdata2") f32 lbl_80366FD0 = 0.0f;
__declspec(section ".sdata2") f32 lbl_80366FD4 = 18.0f;
__declspec(section ".sdata2") f32 lbl_80366FD8 = 57.29578f;
__declspec(section ".sdata2") char lbl_80366FDC[7] = "gdebug";
__declspec(section ".sdata2") f32 lbl_80366FE4 = -5e-6f;
__declspec(section ".sdata2") f32 lbl_80366FE8 = 5e-6f;
extern void *lbl_8035B5E4;
extern s32 lbl_8035B830;
extern s8 lbl_8035B834;

inline void Cross(V3 *o, const V3 *a, f32 bx, f32 by, f32 bz)
{
    o->x = a->y * bz - a->z * by;
    o->y = a->z * bx - a->x * bz;
    o->z = a->x * by - a->y * bx;
}

void fn_802731E0(Obj *o, f32 dt)
{
    Sub *s = o->own->sub;
    DbgN *d;
    f32 len;
    fn_802610A0(o);
    s->f60(&o->v, 0, 0, 0, 0);
    o->pos = V3(*o->src[0], *o->src[1], *o->src[2]);
    o->pos.z += lbl_80366FC8 + o->v.z;
    o->v.x += lbl_80366FCC * lbl_80357E90.x;
    o->v.y += lbl_80366FCC * lbl_80357E90.y;
    o->v.z += lbl_80366FCC * lbl_80357E90.z;
    o->v.x -= o->pos.x;
    o->v.y -= o->pos.y;
    o->v.z -= o->pos.z;
    len = fn_80101664(&o->v);
    o->w.x = o->v.y * lbl_80366FCC - o->v.z * lbl_80366FD0;
    o->w.y = o->v.z * lbl_80366FD0 - o->v.x * lbl_80366FCC;
    o->w.z = o->v.x * *(f32 *)&lbl_80366FD0 - o->v.y * lbl_80366FD0;
    fn_80101820(&o->w);
    o->u.x = o->w.y * o->v.z - o->w.z * o->v.y;
    o->u.y = o->w.z * o->v.x - o->w.x * o->v.z;
    o->u.z = o->w.x * o->v.y - o->w.y * o->v.x;
    fn_80101820(&o->u);
    *o->ang = lbl_80366FD8 * (f32)fn_800EFA20(lbl_80366FD4 / len);
    fn_8026102C(o);
    lbl_80357AF8.x = o->v.x; lbl_80357AF8.y = o->v.y; lbl_80357AF8.z = o->v.z;
    lbl_80357AEC.x = o->u.x; lbl_80357AEC.y = o->u.y; lbl_80357AEC.z = o->u.z;
    lbl_80357B10.x = o->w.x; lbl_80357B10.y = o->w.y; lbl_80357B10.z = o->w.z;
    fn_80256F8C(o, dt);
    d = fn_800F8274(lbl_8035B5E4, lbl_80366FDC);
    if (!lbl_8035B834) { lbl_8035B830 = 0; lbl_8035B834 = 1; }
    if (d && d->on) {
        if (!((f32)fn_80253664(d, 80) >= lbl_80366FE4) || !((f32)fn_80253664(d, 80) <= lbl_80366FE8)) {
            lbl_8035B830 = 1;
        } else if (lbl_8035B830 == 1) { o->f52(); lbl_8035B830 = 0; }
    }
}

} /* extern "C" */
