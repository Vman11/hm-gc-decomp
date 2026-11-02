// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
extern f32 lbl_80365EFC, lbl_80365F08, lbl_80365F40, lbl_80365F50, lbl_80365F54, lbl_80365F58;
extern f64 lbl_80365F28, lbl_80365F30, lbl_80365F48;

f64 fn_800F045C(f64);
struct O { u32 f0; u8 pad4[20]; V pos; u8 pad36[68]; virtual void a0(); virtual void a1(); virtual void upd(); };
struct T { u8 pad[156]; O *f156; u8 pad160[296]; f32 *f456; f32 *f460; };
void fn_80100F24(V *, void *);
void fn_80101820(V *);
int fn_80264E0C(V *, V *, void *, int, int, int, void **, int, int, int, int, int, int, int, int);
static inline f32 Sq(f32 x) {
    if (x > lbl_80365EFC) {
        const f64 _half = lbl_80365F28;
        const f64 _three = lbl_80365F30;
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
int fn_802376C0(T *t, V *from, V *fwd, void *m, int cone, int dist, void *arg) {
    O *o = t->f156;
    if (o->f0 & 4) o->upd();
    V p;
    V d;
    f32 pz, py, px;
    px = o->pos.x;
    p.x = px;
    py = o->pos.y;
    p.y = py;
    pz = o->pos.z;
    p.z = pz;
    px -= from->x;
    d.x = px;
    py -= from->y;
    d.y = py;
    pz -= from->z;
    d.z = pz;
    if (dist) {
        f32 a = px * px;
        f32 b = py * py;
        f32 c = pz * pz;
        f32 l = Sq(c + (a + b));
        f32 mx = t->f456 ? *t->f456 : lbl_80365F40;
        if (l > mx) return 0;
    }
    fn_80100F24(&d, m);
    fn_80101820(&d);
    if (cone) {
        f32 c = fwd->x * d.x + fwd->y * d.y + fwd->z * d.z;
        f32 ang;
        if ((f32)__fabs((f64)c) <= lbl_80365F48) ang = fn_800F045C(c);
        else if (c > lbl_80365EFC) ang = lbl_80365EFC;
        else ang = lbl_80365F50;
        f64 da = __fabs((f64)ang);
        f32 aa = (f32)da;
        f32 lim = t->f460 ? lbl_80365F08 * (lbl_80365F54 * *t->f460) : lbl_80365F58;
        if (aa > lim) return 0;
    }
    void *hit = 0;
    if (!fn_80264E0C(from, &p, arg, 0, 0, 0, &hit, 0, 0, 0, 0, 0, 0, 0, 1)) return 1;
    if (hit && hit == t->f156) return 1;
    return 0;
}

} /* extern "C" */
