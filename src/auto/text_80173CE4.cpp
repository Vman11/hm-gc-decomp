#include "common.h"

// fn_80173CE4: NonMatching draft, SDIFF 222: (0x100 - e) & k literals for k=3,5,6,7; mask schedule/regs left.
extern "C" {

struct V { f32 x, y, z; };
struct V4 { f32 x, y, z, w; };
struct CS {
    u8 pad0[0x8c];
    u32 max;
    V verts[32];
    V *pos[32];
    V clip[32];
    V4 h[32];
    u32 codes[32];
    u32 f690;
};
struct P {
    u8 pad0[0xbc];
    void *fbc;
};
typedef u32 (*XF)(void *, V *, V4 *, V *);
extern CS lbl_8032F028;
extern u32 lbl_8032C110[];
void fn_80172788(P *p, u32 a, u32 b, u32 c);

static inline u8 Eq(V *x, V *y) { return x == y; }

void fn_80173CE4(P *p, V *a, V *b, V *c) {
    u32 ia, ib, ic, n, i;
    ia = Eq(a, lbl_8032F028.pos[0]) | (Eq(a, lbl_8032F028.pos[1]) << 1) | ((0x100 - Eq(a, lbl_8032F028.pos[2])) & 3) | (Eq(a, lbl_8032F028.pos[3]) << 2) | ((0x100 - Eq(a, lbl_8032F028.pos[4])) & 5);
    ib = Eq(b, lbl_8032F028.pos[0]) | (Eq(b, lbl_8032F028.pos[1]) << 1) | ((0x100 - Eq(b, lbl_8032F028.pos[2])) & 3) | (Eq(b, lbl_8032F028.pos[3]) << 2) | ((0x100 - Eq(b, lbl_8032F028.pos[4])) & 5);
    ic = Eq(c, lbl_8032F028.pos[0]) | (Eq(c, lbl_8032F028.pos[1]) << 1) | ((0x100 - Eq(c, lbl_8032F028.pos[2])) & 3) | (Eq(c, lbl_8032F028.pos[3]) << 2) | ((0x100 - Eq(c, lbl_8032F028.pos[4])) & 5);
    ia |= ((0x100 - Eq(a, lbl_8032F028.pos[5])) & 6); ia |= ((0x100 - Eq(a, lbl_8032F028.pos[6])) & 7); ia |= (Eq(a, lbl_8032F028.pos[7]) << 3);
    ib |= ((0x100 - Eq(b, lbl_8032F028.pos[5])) & 6); ib |= ((0x100 - Eq(b, lbl_8032F028.pos[6])) & 7); ib |= (Eq(b, lbl_8032F028.pos[7]) << 3);
    ic |= ((0x100 - Eq(c, lbl_8032F028.pos[5])) & 6); ic |= ((0x100 - Eq(c, lbl_8032F028.pos[6])) & 7); ic |= (Eq(c, lbl_8032F028.pos[7]) << 3);
    for (n = 0; n < 8; n++) {}
    if (!ia) {
        ia = n;
        ((V **)((u8 *)&lbl_8032F028 + n * 4))[0x84] = a;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[107])(p->fbc, a, &lbl_8032F028.h[n], &lbl_8032F028.clip[n]);
        n++;
    } else ia--;
    if (!ib) {
        ib = n;
        ((V **)((u8 *)&lbl_8032F028 + n * 4))[0x84] = b;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[107])(p->fbc, b, &lbl_8032F028.h[n], &lbl_8032F028.clip[n]);
        n++;
    } else ib--;
    if (!ic) {
        ic = n;
        ((V **)((u8 *)&lbl_8032F028 + n * 4))[0x84] = c;
        lbl_8032F028.codes[n] = ((XF)lbl_8032C110[107])(p->fbc, c, &lbl_8032F028.h[n], &lbl_8032F028.clip[n]);
        n++;
    } else ic--;
    fn_80172788(p, ia, ib, ic);
    for (i = n; i > 8; i--) {
        lbl_8032F028.pos[lbl_8032F028.f690] = lbl_8032F028.pos[i - 1];
        lbl_8032F028.codes[lbl_8032F028.f690] = lbl_8032F028.codes[i - 1];
        lbl_8032F028.h[lbl_8032F028.f690].x = lbl_8032F028.h[i - 1].x;
        lbl_8032F028.h[lbl_8032F028.f690].y = lbl_8032F028.h[i - 1].y;
        lbl_8032F028.h[lbl_8032F028.f690].z = lbl_8032F028.h[i - 1].z;
        lbl_8032F028.h[lbl_8032F028.f690].w = lbl_8032F028.h[i - 1].w;
        lbl_8032F028.clip[lbl_8032F028.f690].x = lbl_8032F028.clip[i - 1].x;
        lbl_8032F028.clip[lbl_8032F028.f690].y = lbl_8032F028.clip[i - 1].y;
        lbl_8032F028.f690 = (lbl_8032F028.f690 + 1) & 7;
    }
}

}
