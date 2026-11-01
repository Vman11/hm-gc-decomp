// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct P {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void pos(V *, int, int, int, int);
};
struct S { u8 pad[216]; s32 f216; };
struct G : P { u8 pad4[276]; f32 x, y, z; u8 pad292[232]; S *f524; };
struct GM { u8 pad[72]; G *f72; };
struct T { u8 pad[224]; P *f224; u8 pad228[160]; f32 *f388; f32 *f392; };
extern GM *lbl_8035B308;
extern f32 lbl_80361BD0;
extern f64 lbl_80361BF8, lbl_80361C00;

static inline f32 Sq(f32 x) {
    if (x > lbl_80361BD0) {
        const f64 _half = lbl_80361BF8;
        const f64 _three = lbl_80361C00;
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

s32 fn_800A1860(T *o) {
    s32 r = 0;
    G *g = lbl_8035B308->f72;
    if (g->f524->f216 != 1) {
        f32 x = g->x, y = g->y, z = g->z;
        f32 d = Sq(x * x + y * y + z * z);
        if (d > lbl_80361BD0) {
            V a, b;
            lbl_8035B308->f72->pos(&a, 0, 0, 0, 0);
            o->f224->pos(&b, 0, 0, 0, 0);
            if ((f32)__fabs((f64)(b.z - a.z)) <= *o->f392) {
                f32 dx, dy, dz;
                dz = b.z - b.z;
                dy = b.y - a.y;
                *(volatile f32 *)&a.z = b.z;
                dx = *(volatile f32 *)&b.x - a.x;
                if (Sq(dx * dx + dy * dy + dz * dz) <= *o->f388) r = 1;
            }
        }
    }
    return r;
}

}

} /* extern "C" */
