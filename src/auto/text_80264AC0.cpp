#include "common.h"
extern "C" {
struct V3 { f32 x, y, z; };
struct S8 { u32 a, b; };
struct E { u32 f0; u8 pad[148]; };
struct T { u8 pad[52]; E *f52; };
struct G20 { u8 pad[20]; u32 f20; };
struct G12 { u8 pad[12]; void *f12; };
extern T lbl_803578F0;
extern G20 *lbl_8035B754;
extern G12 *lbl_8035B65C;
extern void *lbl_8035B768;
extern u32 lbl_80366B98;
void fn_800FCF74(T *);
void fn_800FCED8(T *, V3 *, V3 *, void *, int);
void fn_8018BF8C(T *);
void fn_8019A5E0(void *, T *, void *);
u32 fn_80264F2C(E *, V3 *, V3 *, V3 *, V3 *, u32 *, u32 *, u32 *, u32 *, S8 *, u32 *, V3 *, u32 *, u32 *, V3 *, u32);

u32 fn_80264AC0(u32 n, V3 *a, V3 *b, void *c, u32 *out, V3 *p8, V3 *p9, u32 *p10, u32 *s168, u32 *s172,
                u32 *s176, S8 *s180, u32 *s184, V3 *s188, u32 *s192, u32 *s196, V3 *s200, u32 s204) {
    u32 i;
    u32 res;
    if (s176) *s176 = lbl_8035B754->f20;
    lbl_8035B768 = lbl_8035B65C->f12;
    fn_800FCF74(&lbl_803578F0);
    for (i = 0; i < n; i++) {
        fn_800FCED8(&lbl_803578F0, &a[i], &b[i], 0, 0);
        lbl_803578F0.f52[i].f0 |= lbl_80366B98;
    }
    fn_8018BF8C(&lbl_803578F0);
    fn_8019A5E0(lbl_8035B768, &lbl_803578F0, c);
    res = 0;
    for (i = 0; i < n; i++) {
        V3 *qp8 = p8 ? &p8[i] : 0;
        V3 *qp9 = p9 ? &p9[i] : 0;
        u32 *qp10 = p10 ? &p10[i] : 0;
        u32 *qs168 = s168 ? &s168[i] : 0;
        u32 *qs172 = s172 ? &s172[i] : 0;
        u32 *qs176 = s176 ? &s176[i] : 0;
        S8 *qs180 = s180 ? &s180[i] : 0;
        u32 *qs184 = s184 ? &s184[i] : 0;
        V3 *qs188 = s188 ? &s188[i] : 0;
        u32 *qs192 = s192 ? &s192[i] : 0;
        u32 *qs196 = s196 ? &s196[i] : 0;
        V3 *qs200 = s200 ? &s200[i] : 0;
        out[i] = fn_80264F2C(&lbl_803578F0.f52[i], &a[i], &b[i], qp8, qp9, qp10, qs168, qs172, qs176, qs180, qs184, qs188, qs192, qs196, qs200, s204);
        res |= out[i];
    }
    return res;
}
}
