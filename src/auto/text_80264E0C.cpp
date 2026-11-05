#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct S8 { u32 a, b; };
struct I3 { u32 x, y, z; };
struct E { u32 f0; u8 pad4[0x74]; u32 f78; u8 pad7c[8]; u32 f84; u32 f88; u32 f8c; I3 *f90; u32 f94; };
struct G20 { u8 pad[20]; u32 f20; };
struct G12 { u8 pad[12]; void *f12; };
extern E lbl_8035784C;
extern G20 *lbl_8035B754;
extern G12 *lbl_8035B65C;
extern void *lbl_8035B768;
extern u32 lbl_80366B98;
void fn_800FC408(E *, V3 *, V3 *);
void fn_8019A6CC(void *);
u32 fn_80264F2C(E *, V3 *, V3 *, V3 *, V3 *, u32 *, u32 *, u32 *, u32 *, S8 *, u32 *, V3 *, u32 *, u32 *, V3 *, u32);

u32 fn_80264E0C(V3 *a, V3 *b, V3 *p2, V3 *p3, u32 *p4, u32 *p5, u32 *p6, u32 *out, S8 *s8, u32 *s9,
                V3 *s10, u32 *s11, u32 *s12, V3 *s13, u32 s14) {
    if (out) *out = lbl_8035B754->f20;
    lbl_8035B768 = lbl_8035B65C->f12;
    lbl_8035784C.f0 |= lbl_80366B98;
    fn_800FC408(&lbl_8035784C, a, b);
    lbl_8035784C.f84 = 0;
    lbl_8035784C.f78 = 0;
    lbl_8035784C.f88 = 0;
    lbl_8035784C.f90->x = 0;
    lbl_8035784C.f90->y = 0;
    lbl_8035784C.f90->z = 0;
    lbl_8035784C.f94 = 0;
    fn_8019A6CC(lbl_8035B768);
    return fn_80264F2C(&lbl_8035784C, a, b, p2, p3, p4, p5, p6, out, s8, s9, s10, s11, s12, s13, s14);
}

} /* extern "C" */
