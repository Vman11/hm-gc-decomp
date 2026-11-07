// fn_801737D8: vertex cache lookup (sibling of fn_80173CE4). NonMatching draft SDIFF 218 (wOA):
// Eq(a, pos) operand order; Eq part reads pos via u32 *w; path1 uses s, paths 2/3 the global. Left: target keeps n=8 unfolded in path1 (slwi n,2).
#include "common.h"

extern "C" {
struct V { f32 x, y, z; };
struct CS {
    u8 pad0[0x8c];
    u32 max;
    V verts[32];
    V *pos[32];
    V clip[32];
    u8 pad410[0x610 - 0x410];
    u32 codes[32];
    u32 f690;
};
struct P {
    u8 pad0[0xbc];
    void *fbc;
};
typedef u32 (*XF)(void *, V *, V *);
extern CS lbl_8032F028;
extern u32 lbl_8032C110[];
void fn_801718AC(P *, u32, u32, u32);

static inline u8 Eq(V *x, V *y) { return x == y; }

void fn_801737D8(P *p, V *a, V *b, V *c) {
    CS *s = &lbl_8032F028;
    u32 *w = (u32 *)s;
    u32 ia, ib, ic, n, i;
    ia = Eq(a, (V *)w[132]) | (Eq(a, (V *)w[133]) << 1) | ((0x100 - Eq(a, (V *)w[134])) & 3) | (Eq(a, (V *)w[135]) << 2) | ((0x100 - Eq(a, (V *)w[136])) & 5);
    ib = Eq(b, (V *)w[132]) | (Eq(b, (V *)w[133]) << 1) | ((0x100 - Eq(b, (V *)w[134])) & 3) | (Eq(b, (V *)w[135]) << 2) | ((0x100 - Eq(b, (V *)w[136])) & 5);
    ic = Eq(c, (V *)w[132]) | (Eq(c, (V *)w[133]) << 1) | ((0x100 - Eq(c, (V *)w[134])) & 3) | (Eq(c, (V *)w[135]) << 2) | ((0x100 - Eq(c, (V *)w[136])) & 5);
    ia |= ((0x100 - Eq(a, (V *)w[137])) & 6) | ((0x100 - Eq(a, (V *)w[138])) & 7) | (Eq(a, (V *)w[139]) << 3);
    ib |= ((0x100 - Eq(b, (V *)w[137])) & 6) | ((0x100 - Eq(b, (V *)w[138])) & 7) | (Eq(b, (V *)w[139]) << 3);
    ic |= ((0x100 - Eq(c, (V *)w[137])) & 6) | ((0x100 - Eq(c, (V *)w[138])) & 7) | (Eq(c, (V *)w[139]) << 3);
    n = 8;
    if (!ia) {
        ia = n;
        s->pos[n] = a;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[108])(p->fbc, a, &s->clip[n]);
        n++;
    } else ia--;
    if (!ib) {
        ib = n;
        lbl_8032F028.pos[n] = b;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[108])(p->fbc, b, &lbl_8032F028.clip[n]);
        n++;
    } else ib--;
    if (!ic) {
        ic = n;
        lbl_8032F028.pos[n] = c;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[108])(p->fbc, c, &lbl_8032F028.clip[n]);
        n++;
    } else ic--;
    fn_801718AC(p, ia, ib, ic);
    for (i = n; i > 8; i--) {
        lbl_8032F028.pos[lbl_8032F028.f690] = lbl_8032F028.pos[i - 1];
        lbl_8032F028.codes[lbl_8032F028.f690] = lbl_8032F028.codes[i - 1];
        lbl_8032F028.clip[lbl_8032F028.f690].x = lbl_8032F028.clip[i - 1].x;
        lbl_8032F028.clip[lbl_8032F028.f690].y = lbl_8032F028.clip[i - 1].y;
        lbl_8032F028.clip[lbl_8032F028.f690].z = lbl_8032F028.clip[i - 1].z;
        lbl_8032F028.f690 = (lbl_8032F028.f690 + 1) & 7;
    }
}
}
