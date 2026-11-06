// fn_801737D8: vertex cache lookup (sibling of fn_80173CE4). NonMatching draft SDIFF 343:
// target terms k=3,5,6,7 are (0x100 - e) & k (literal here); n stays a register (loop IV?) in target.
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
    u32 ia, ib, ic, n, i;
    ia = Eq(s->pos[0], a) | (Eq(s->pos[1], a) << 1) | ((0x100 - Eq(s->pos[2], a)) & 3) | (Eq(s->pos[3], a) << 2) | ((0x100 - Eq(s->pos[4], a)) & 5);
    ib = Eq(s->pos[0], b) | (Eq(s->pos[1], b) << 1) | ((0x100 - Eq(s->pos[2], b)) & 3) | (Eq(s->pos[3], b) << 2) | ((0x100 - Eq(s->pos[4], b)) & 5);
    ic = Eq(s->pos[0], c) | (Eq(s->pos[1], c) << 1) | ((0x100 - Eq(s->pos[2], c)) & 3) | (Eq(s->pos[3], c) << 2) | ((0x100 - Eq(s->pos[4], c)) & 5);
    ia |= ((0x100 - Eq(s->pos[5], a)) & 6) | ((0x100 - Eq(s->pos[6], a)) & 7) | (Eq(s->pos[7], a) << 3);
    ib |= ((0x100 - Eq(s->pos[5], b)) & 6) | ((0x100 - Eq(s->pos[6], b)) & 7) | (Eq(s->pos[7], b) << 3);
    ic |= ((0x100 - Eq(s->pos[5], c)) & 6) | ((0x100 - Eq(s->pos[6], c)) & 7) | (Eq(s->pos[7], c) << 3);
    n = 8;
    if (!ia) {
        ia = n;
        lbl_8032F028.pos[n] = a;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[108])(p->fbc, a, &s->clip[n]);
        n++;
    } else ia--;
    if (!ib) {
        ib = n;
        lbl_8032F028.pos[n] = b;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[108])(p->fbc, b, &s->clip[n]);
        n++;
    } else ib--;
    if (!ic) {
        ic = n;
        lbl_8032F028.pos[n] = c;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[108])(p->fbc, c, &s->clip[n]);
        n++;
    } else ic--;
    fn_801718AC(p, ia, ib, ic);
    for (i = n; i > 8; i--) {
        s->pos[s->f690] = s->pos[i - 1];
        s->codes[s->f690] = s->codes[i - 1];
        s->clip[s->f690].x = s->clip[i - 1].x;
        s->clip[s->f690].y = s->clip[i - 1].y;
        s->clip[s->f690].z = s->clip[i - 1].z;
        s->f690 = (s->f690 + 1) & 7;
    }
}
}
