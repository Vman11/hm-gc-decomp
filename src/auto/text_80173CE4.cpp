#include "common.h"

// fn_80173CE4: NonMatching draft, SDIFF 128: (0x100 - e) & k literals, pos[] via locals; first mask group schedule + regs left.
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
    V *q0, *q1, *q2, *q3, *q4, *q5, *q6, *q7;
    q0 = lbl_8032F028.pos[0];
    q1 = lbl_8032F028.pos[1];
    q2 = lbl_8032F028.pos[2];
    q3 = lbl_8032F028.pos[3];
    q4 = lbl_8032F028.pos[4];
    ia = Eq(a, q0) | (Eq(a, q1) << 1) | ((0x100 - Eq(a, q2)) & 3) | (Eq(a, q3) << 2) | ((0x100 - Eq(a, q4)) & 5);
    ib = Eq(b, q0) | (Eq(b, q1) << 1) | ((0x100 - Eq(b, q2)) & 3) | (Eq(b, q3) << 2) | ((0x100 - Eq(b, q4)) & 5);
    ic = Eq(c, q0) | (Eq(c, q1) << 1) | ((0x100 - Eq(c, q2)) & 3) | (Eq(c, q3) << 2) | ((0x100 - Eq(c, q4)) & 5);
    q5 = lbl_8032F028.pos[5]; q6 = lbl_8032F028.pos[6]; q7 = lbl_8032F028.pos[7];
    ia |= ((0x100 - Eq(a, q5)) & 6);
    ib |= ((0x100 - Eq(b, q5)) & 6);
    ic |= ((0x100 - Eq(c, q5)) & 6);
    ia |= ((0x100 - Eq(a, q6)) & 7);
    ib |= ((0x100 - Eq(b, q6)) & 7);
    ic |= ((0x100 - Eq(c, q6)) & 7);
    ia |= (Eq(a, q7) << 3);
    ib |= (Eq(b, q7) << 3);
    ic |= (Eq(c, q7) << 3);
    for (n = 0; n < 8; n++) {}
    if (!ia) {
        ia = n++;
        ((V **)((u8 *)&lbl_8032F028 + ia * 4))[0x84] = a;
        lbl_8032F028.codes[ia] = ((XF)lbl_8032C110[107])(p->fbc, a, &lbl_8032F028.h[ia], &lbl_8032F028.clip[ia]);
    } else ia--;
    if (!ib) {
        ib = n++;
        ((V **)((u8 *)&lbl_8032F028 + ib * 4))[0x84] = b;
        lbl_8032F028.codes[ib] = ((XF)lbl_8032C110[107])(p->fbc, b, &lbl_8032F028.h[ib], &lbl_8032F028.clip[ib]);
    } else ib--;
    if (!ic) {
        ic = n++;
        ((V **)((u8 *)&lbl_8032F028 + ic * 4))[0x84] = c;
        lbl_8032F028.codes[ic] = ((XF)lbl_8032C110[107])(p->fbc, c, &lbl_8032F028.h[ic], &lbl_8032F028.clip[ic]);
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
