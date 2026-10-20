// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O_80107DE0 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
struct V3 { f32 x, y, z; };
extern "C" { extern u8 lbl_803286D0[]; extern f32 lbl_80363910; extern u32 lbl_80363908; extern u32 lbl_8036390C; }

s32 fn_80107DE0(u8 *p) {
    V3 v;
    u8 *n;
    if (*(O_80107DE0 **)p == 0) {
        if (!(*(u32 *)(p + 32) & 0x20)) {
            return 0;
        }
        v.x = lbl_80363910 / *(f32 *)(p + 40);
        v.y = lbl_80363910 / *(f32 *)(p + 44);
        v.z = lbl_80363910 / *(f32 *)(p + 48);
        (*(void (**)(void *, void *))(lbl_803286D0 + 88))(*(void **)(p + 20), &v);
    } else {
        (*(O_80107DE0 **)p)->m();
        if (!(*(u32 *)(p + 32) & 0x20)) {
            return 0;
        }
        v.x = lbl_80363910 / *(f32 *)(p + 40);
        v.y = lbl_80363910 / *(f32 *)(p + 44);
        v.z = lbl_80363910 / *(f32 *)(p + 48);
        (*(void (**)(void *, void *))(lbl_803286D0 + 88))(*(void **)(p + 20), &v);
        (*(void (**)(void *, void *))(lbl_803286D0 + 352))(*(void **)(p + 20), *(void **)(*(u8 **)p + 20));
    }
    for (n = *(u8 **)(p + 8); n != 0; n = *(u8 **)(n + 4)) {
        *(u32 *)(n + 32) |= lbl_80363908;
    }
    *(u32 *)(p + 32) |= lbl_8036390C;
    *(u32 *)(p + 32) &= ~0x20;
    return 32;
}

} /* extern "C" */
