// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { int OSDisableInterrupts(void); int OSRestoreInterrupts(int); }
struct V { f32 x, y, z; };
extern f32 lbl_8036577C;
extern f64 lbl_80365780, lbl_80365788;
f64 fn_800F047C(f64, f64);
struct O { virtual void a0(); virtual int busy(); u8 pad4[76]; f32 f80; f32 f84; f32 f88; f32 f92; int f96; u8 pad100[368]; O *f468; };
struct X { u8 pad[52]; V f52; };
struct T { u8 pad[92]; u8 f92[12]; V f104; u8 pad116[60]; O *f176; };
void fn_80103F08(X *, void *, V *);
int fn_80202B68(O *);
void fn_80201F68(O *, f32);
static inline f32 Sq(f32 x) {
    if (x > lbl_8036577C) {
        const f64 _half = lbl_80365780;
        const f64 _three = lbl_80365788;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = (f32)(x * g);
        return y;
    }
    return x;
}
static inline f32 Dot(const V *a, const V *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
void fn_80206164(T *t, X *x, f32 dt) {
    V v;
    fn_80103F08(x, t->f92, &v);

    f32 len = Sq(v.x * v.x + v.y * v.y + v.z * v.z);
    f32 yaw = -(f32)fn_800F047C(-v.x, v.z);
    f32 h = Sq(v.x * v.x + v.z * v.z);
    f32 dx = Dot(&v, &x->f52);
    f32 dt2 = Dot(&v, &t->f104);
    f32 k = (dt2 + dx) / len;
    for (O *o = t->f176; o; o = o->f468) {
        if (o->busy() || fn_80202B68(o)) {
            int lv = OSDisableInterrupts();
            o->f80 = yaw;
            o->f84 = lbl_8036577C;
            o->f88 = len;
            o->f92 = k;
            o->f96 = 1;
            OSRestoreInterrupts(lv);
            fn_80201F68(o, dt);
        }
    }
}

} /* extern "C" */
