#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct C4 { u8 r, g, b, a; C4() {} C4(u8 _r, u8 _g, u8 _b, u8 _a) { r = _r; g = _g; b = _b; a = _a; } };
struct L { u8 b[64]; };
struct FT { u8 pad[404]; void (*f404)(void *, V *, V *); };
extern FT lbl_803286D0;
extern f32 lbl_80364680;
extern f32 lbl_80364684;
extern f32 lbl_80364698;
extern f32 lbl_803646A4;
struct P { u8 pad[10888]; void *f10888; u8 pad2[0x3f0c - 10892]; u32 cnt; L items[512]; };
struct X { u8 pad[1132]; u8 f1132; u8 pad1133[11]; u32 f1144; u32 f1148; int f1152; int f1156; };
struct Src { u8 pad[20]; f32 r, g, b, a; };
struct T { u8 pad[12]; u32 f12; u8 pad16[0x1934 - 16]; P *f6452; X *f6456; u8 pad6460[0x19a8 - 0x193c]; int f6568; int f6572; u8 pad6576[4]; V f6580[8]; V f6676[8]; int f6772[8]; u32 f6804; L *f6808[8]; };
void fn_800D79F4(L *, C4);
void fn_800D7CA4(int, u8, int, u32, u32, int, int);
void fn_800D77AC(L *, f32, f32, f32, f32, f32, f32);
void fn_800D7984(L *, f32, f32, f32);
void fn_800D7A0C(L *, u32);
static inline L *Alloc(P *p) {
    if (p->cnt >= 0x200) return 0;
    return &p->items[p->cnt++];
}
static inline void mode(X *x, int b, int c) {
    if (x->f1152 != b || x->f1156 != c) {
        x->f1152 = b;
        x->f1156 = c;
        fn_800D7CA4(0, x->f1132, 0, x->f1144, x->f1148, x->f1152, x->f1156);
    }
}
void fn_801647F8(T *__restrict t, u32 n, Src *s, V *__restrict pos) {
    if (n >= 8) return;
    L *l = Alloc(t->f6452);
    if (!l) return;
    *(L *volatile *)&t->f6808[n] = l;
    *(volatile int *)&t->f6772[n] = 1;
    f32 K, r, g, b, a;
    r = *(volatile f32 *)&s->r; g = s->g; b = s->b; a = s->a;
    K = *(volatile f32 *)&lbl_80364698;
    r *= K; g *= K; b *= K; a *= K;
    C4 c((int)r, (int)g, (int)b, (int)a);
    fn_800D79F4(l, c);
    t->f6568 = 2;
    t->f6572 = 1;
    mode(t->f6456, t->f6568, t->f6572);
    fn_800D77AC(l, lbl_80364680, lbl_80364684, lbl_80364684, lbl_80364680, lbl_80364684, lbl_80364684);
    *(volatile f32 *)&t->f6580[n].x = *(volatile f32 *)&lbl_80364684;
    *(volatile f32 *)&t->f6580[n].y = *(volatile f32 *)&lbl_80364684;
    *(volatile f32 *)&t->f6580[n].z = *(volatile f32 *)&lbl_80364684;
    t->f6676[n].x = pos->x;
    t->f6676[n].y = pos->y;
    t->f6676[n].z = pos->z;
    if (t->f12 & 2) {
        V o;
        lbl_803286D0.f404(t->f6452->f10888, pos, &o);
        fn_800D7984(l, lbl_803646A4 * -o.x, lbl_803646A4 * -o.y, lbl_803646A4 * -o.z);
        fn_800D7A0C(l, 1 << n);
    } else {
        fn_800D7984(l, lbl_803646A4 * -pos->x, lbl_803646A4 * -pos->y, lbl_803646A4 * -pos->z);
    }
}

} /* extern "C" */
