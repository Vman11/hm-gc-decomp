#include "common.h"

extern "C" {



struct V { f32 x, y, z; };
struct C4 { u8 r, g, b, a; C4() {} C4(u8 _r, u8 _g, u8 _b, u8 _a) { r = _r; g = _g; b = _b; a = _a; } };
struct L { u8 pad[64]; };
struct Pool { u8 pad[10888]; void *f10888; u8 pad10892[5248]; u32 n; L arr[512]; };
struct X { u8 pad[1132]; u8 f1132; u8 pad1133[11]; u32 f1144; u32 f1148; int f1152; int f1156; };
struct S { u8 pad[20]; f32 c[4]; u8 pad36[20]; f32 f56; u8 pad60[4]; f32 f64; f32 f68; f32 f72; };
struct FT { u8 pad[392]; void (*f392)(void *, V *, V *); u8 pad396[8]; void (*f404)(void *, V *, V *); };
extern FT lbl_803286D0;
struct T { u8 pad[12]; u32 f12; u8 pad16[6436]; Pool *f6452; X *f6456; u8 pad6460[108]; int f6568; int f6572; u8 pad6576[4]; V f6580[8]; V f6676[8]; int f6772[9]; L *f6808[8]; };
extern f32 lbl_80364698, lbl_8036469C, lbl_803646A0;
void fn_800D79F4(L *, C4);
void fn_800D7CA4(int, u8, int, u32, u32, int, int);
void fn_800D77F4(L *, int, f32);
void fn_800D77C8(L *, f32, f32, f32);
void fn_800D79B0(L *, f32, f32, f32);
void fn_800D7984(L *, f32, f32, f32);
void fn_800D7A0C(L *, u32);
static inline void mode(X *x, int a, int b) {
    if (x->f1152 != a || x->f1156 != b) {
        x->f1152 = a;
        x->f1156 = b;
        fn_800D7CA4(0, x->f1132, 0, x->f1144, x->f1148, x->f1152, x->f1156);
    }
}
void fn_80164584(T *t, u32 idx, S *s, V *pos, V *dir) {
    if (idx >= 8) return;
    Pool *p = t->f6452;
    L *l;
    if (p->n >= 512) l = 0;
    else l = &p->arr[p->n++];
    if (!l) return;
    t->f6808[idx] = l;
    t->f6772[idx] = 2;
    f32 r = s->c[0], g = s->c[1], b = s->c[2], a = s->c[3];
    f32 K = lbl_80364698;
    r *= K; g *= K; b *= K; a *= K;
    C4 c((int)r, (int)g, (int)b, (int)a);
    fn_800D79F4(l, c);
    t->f6568 = 2;
    t->f6572 = 1;
    mode(t->f6456, t->f6568, t->f6572);
    fn_800D77F4(l, 3, lbl_8036469C * (lbl_803646A0 * s->f56));
    fn_800D77C8(l, s->f64, s->f68, s->f72);
    f32 px = pos->x;
    f32 py = pos->y;
    f32 pz = pos->z;
    f32 dx = dir->x;
    t->f6580[idx].x = px;
    f32 dy = dir->y;
    t->f6580[idx].y = py;
    f32 dz = dir->z;
    t->f6580[idx].z = pz;
    t->f6676[idx].x = dx;
    t->f6676[idx].y = dy;
    t->f6676[idx].z = dz;
    if (t->f12 & 2) {
        V o;
        lbl_803286D0.f404(t->f6452->f10888, dir, &o);
        fn_800D79B0(l, o.x, o.y, o.z);
        lbl_803286D0.f392(t->f6452->f10888, pos, &o);
        fn_800D7984(l, o.x, o.y, o.z);
        fn_800D7A0C(l, 1 << idx);
    } else {
        fn_800D79B0(l, dx, dy, dz);
        fn_800D7984(l, pos->x, pos->y, pos->z);
    }
}



} /* extern "C" */
