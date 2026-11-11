// fn_801737D8: vertex cache lookup (sibling of fn_80173CE4, same first 170 insns). NonMatching draft DIFF 124 SDIFF 66 (was 312/218) (wSI):
// per-slot statements with a block-local q (target = one fully unrolled n-loop over the 8 slots; n=8 left unfolded by the empty loop);
// group 2 + paths + tail loop are register-only (base r28 vs r27, ib r27 vs r28); group 1 (slots 0-4) schedule still differs.
// The per-slot a/b/c statement order below is a search result (best of ~2700 sampled), not understood.
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
    u32 ib;
    CS *s = &lbl_8032F028;
    u32 *w = (u32 *)s;
    u32 ia, ic, n, i;
    {
        V *q = (V *)w[132];
    ib = Eq(b, q);
    ia = Eq(a, q);
    ic = Eq(c, q);
    }
    {
        V *q = (V *)w[133];
    ic |= (Eq(c, q) << 1);
    ia |= (Eq(a, q) << 1);
    ib |= (Eq(b, q) << 1);
    }
    {
        V *q = (V *)w[134];
    ia |= ((0x100 - Eq(a, q)) & 3);
    ib |= ((0x100 - Eq(b, q)) & 3);
    ic |= ((0x100 - Eq(c, q)) & 3);
    }
    {
        V *q = (V *)w[135];
    ib |= (Eq(b, q) << 2);
    ic |= (Eq(c, q) << 2);
    ia |= (Eq(a, q) << 2);
    }
    {
        V *q = (V *)w[136];
    ia |= ((0x100 - Eq(a, q)) & 5);
    ib |= ((0x100 - Eq(b, q)) & 5);
    ic |= ((0x100 - Eq(c, q)) & 5);
    }
    {
        V *q = (V *)w[137];
    ia |= ((0x100 - Eq(a, q)) & 6);
    ib |= ((0x100 - Eq(b, q)) & 6);
    ic |= ((0x100 - Eq(c, q)) & 6);
    }
    {
        V *q = (V *)w[138];
    ia |= ((0x100 - Eq(a, q)) & 7);
    ib |= ((0x100 - Eq(b, q)) & 7);
    ic |= ((0x100 - Eq(c, q)) & 7);
    }
    {
        V *q = (V *)w[139];
    ia |= (Eq(a, q) << 3);
    ib |= (Eq(b, q) << 3);
    ic |= (Eq(c, q) << 3);
    }
    for (n = 0; n < 8; n++) {}
    if (!ia) {
        ia = n++;
        s->pos[ia] = a;
        lbl_8032F028.codes[ia] = ((XF)lbl_8032C110[108])(p->fbc, a, &lbl_8032F028.clip[ia]);
    } else ia--;
    if (!ib) {
        ib = n++;
        lbl_8032F028.pos[ib] = b;
        lbl_8032F028.codes[ib] = ((XF)lbl_8032C110[108])(p->fbc, b, &lbl_8032F028.clip[ib]);
    } else ib--;
    if (!ic) {
        ic = n++;
        lbl_8032F028.pos[ic] = c;
        lbl_8032F028.codes[ic] = ((XF)lbl_8032C110[108])(p->fbc, c, &lbl_8032F028.clip[ic]);
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
