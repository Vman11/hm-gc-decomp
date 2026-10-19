// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800746E8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(s32, s32, s32, s32, f32 *); };
extern u8 lbl_803286D0[];
extern f32 lbl_8035F548;
extern f32 lbl_8035F3EC;
extern u32 lbl_8035F3F0;

void fn_800746E8(V_800746E8 *p) {
    f32 v[3];
    f32 t[3];
    u8 *q;
    v[0] = lbl_8035F548;
    v[1] = lbl_8035F548;
    v[2] = lbl_8035F548;
    p->m(0, 0, 0, 0, v);
    (*(void (**)(void *, f32 *))(lbl_803286D0 + 0x130))(*(void **)(*(u8 **)((u8 *)p + 0x458) + 0x10), t);
    t[2] = lbl_8035F3EC;
    q = *(u8 **)((u8 *)p + 0x458);
    (*(void (**)(void *, f32 *))(lbl_803286D0 + 0xC))(*(void **)(q + 0x10), t);
    *(u32 *)(q + 0x20) |= lbl_8035F3F0;
}

} /* extern "C" */
